#include "Sound.h"

sf::Sound dialogue;		sf::SoundBuffer buffer;

sf::Music music_menu;	sf::Music music_0;
sf::Music music_1;		sf::Music music_2;
sf::Music music_3;		sf::Music music_4;
sf::Music music_mem1;	sf::Music music_mem2;
sf::Music music_mem3;	sf::Music music_mem4;
sf::Music music_credg;	sf::Music music_credb;
sf::Music orrery;		sf::Music phone;
sf::Music bgm;			sf::Music piano;
sf::Music drain;		sf::Music knife;


// Loading all the music files. (We know. There's a lot...)
void initMusic()
{
	buffer.loadFromFile("Music/dialogue.wav");
	
	//Menu
	music_menu.openFromFile("Music/signalis_menu.ogg");

	// Levels
	music_0.openFromFile("Music/home_signalis.ogg");
	music_1.openFromFile("Music/signalis_redgate.ogg");
	music_2.openFromFile("Music/signalis_3000.ogg");
	music_3.openFromFile("Music/signalis_ritual.ogg");
	music_4.openFromFile("Music/signalis_eulenlieder.ogg");

	// Memories
	music_mem1.openFromFile("Music/signalis_ariane.ogg");
	music_mem2.openFromFile("Music/signalis_ewige.ogg");
	music_mem3.openFromFile("Music/signalis_doubleback.ogg");
	music_mem4.openFromFile("Music/scary.ogg");

	// Extras
	phone.openFromFile("Music/phone.ogg");
	bgm.openFromFile("Music/waves.ogg");
	piano.openFromFile("Music/piano.ogg");
	drain.openFromFile("Music/drain.ogg");
	orrery.openFromFile("Music/signalis_orrery.ogg");
	knife.openFromFile("Music/knife.ogg");

	music_credg.openFromFile("Music/signalis_menu.ogg");
	music_credb.openFromFile("Music/signalis_serenade.ogg");

	music_0.setLoop(true);		music_1.setLoop(true);
	music_2.setLoop(true);		music_3.setLoop(true);	
	music_1.setLoop(true);		music_mem1.setLoop(true);
	music_mem2.setLoop(true);	music_mem3.setLoop(true);
	piano.setLoop(true);		orrery.setLoop(true);
	bgm.setLoop(true);			music_menu.setLoop(true);
}