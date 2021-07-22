#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/RenderStates.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Window/VideoMode.hpp>
#include <cstdlib>

int main()
{
	// Create the main window
	sf::RenderWindow window(sf::VideoMode(236, 406), "Te he infectado Onii-chan");

	// Load a sprite to display 
	sf::Texture texture;
	if (!texture.loadFromFile("resource/img/1.jpg"))
		return EXIT_FAILURE;
	sf::Sprite sprite(texture);

	// Create a graphical text to display
	sf::Font font;
	if (!font.loadFromFile("resource/fonts/mplus-1mn-regular.ttf"))
		return EXIT_FAILURE;
	sf::Text text("Yamete\n Kudasai", font, 50);

	// Load a sound to play 
	sf::Music music;
	if (!music.openFromFile("resource/sounds/asus-yamete-kudasai.ogg"))
		return EXIT_FAILURE;

	// play music
	music.play();

	// Start the program
	while ( window.isOpen() ) {
		// Process events
		sf::Event event;
		while ( window.pollEvent(event) ) {
			// Close window: exit
			if (event.type == sf::Event::Closed) 
				window.close();
		}

		/*
		 * Clear 
		 * Draw Sprite
		 * Draw Text
		 * Window deploy
		 * */
		window.clear();
		window.draw(sprite);
		window.draw(text);
		window.display();
	}

	return EXIT_SUCCESS;
}
