#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <sstream>
#include <random>

int main() {
    // Setup SFML window
    sf::RenderWindow window(sf::VideoMode(600, 400), "Guessing Game");
    window.setFramerateLimit(60);

    // Random number generation
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 100);
    int secretNumber = dist(gen);

    // Font & Text Setup
    sf::Font font;
    if (!font.loadFromFile("/usr/share/fonts/truetype/msttcorefonts/Arial.ttf")) {
        std::cerr << "Failed to load font!" << std::endl;
        return -1;
    }

    sf::Text title("Guess the Number (1-100)", font, 24);
    title.setPosition(120, 30);
    title.setFillColor(sf::Color::White);

    sf::Text inputText("", font, 24);
    inputText.setPosition(250, 150);
    inputText.setFillColor(sf::Color::White);

    sf::Text feedback("", font, 24);
    feedback.setPosition(200, 250);
    feedback.setFillColor(sf::Color::Yellow);

    std::string userInput = "";
    bool gameWon = false;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::TextEntered) {
                if (event.text.unicode >= '0' && event.text.unicode <= '9' && userInput.size() < 3) {
                    userInput += static_cast<char>(event.text.unicode);
                }
                if (event.text.unicode == '\b' && !userInput.empty()) { // Backspace handling
                    userInput.pop_back();
                }
                if (event.text.unicode == '\r' || event.text.unicode == '\n') { // Enter key pressed
                    if (!userInput.empty()) {
                        int guessedNumber = std::stoi(userInput);
                        if (guessedNumber < secretNumber)
                            feedback.setString("Too Low! Try again.");
                        else if (guessedNumber > secretNumber)
                            feedback.setString("Too High! Try again.");
                        else {
                            feedback.setString("Correct! You Win!");
                            gameWon = true;
                        }
                        userInput.clear(); // Reset input
                    }
                }
            }
        }

        // Update input text
        inputText.setString("Your Guess: " + userInput);

        // Clear screen and draw elements
        window.clear(sf::Color::Black);
        window.draw(title);
        window.draw(inputText);
        window.draw(feedback);
        window.display();
    }

    return 0;
}

