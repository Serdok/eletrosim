#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window{sf::VideoMode({800, 600}), "test window"};

    while (window.isOpen()) {
        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
                return 0;
            }
        }

        window.clear(sf::Color(0, 0, 100));
        window.display();
    }

    return 0;
}
