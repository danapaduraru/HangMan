#pragma once
#include <string>
#include <vector>
using namespace std;
class Word
{
	string myWord;
	string hiddenWord;
	char letter;
	vector <char> badletters;
	vector <char> goodletters;
	int lives = 6;
	int players = 0;
	bool game_over = 0;
	int language;
	int wizard = 0;
	int fairy = 0;
public:

	void StartGame();
	void OnePlayer();
	void AssignGeneratedWord(string s);

	void ReadWord();
	void PrintWord();

	void CreateHiddenWord();
	void PrintHiddenWord();

	void GetLetter();
	void TryLetter();
	void GoodLetter();
	void BadLetter();
	char LetterInWord();
	void PrintBadLetters();

	void PrintConsole();
	bool CompareWords();
	void Finish();
	void Game();
	void PlayAgain();

    void GraphicsStartGame();
    void GraphicsChoosePlayersNumber();
    void DrawHang();
    void DrawMan();
	Word();
	~Word();
};

