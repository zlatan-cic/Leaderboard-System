#include "Leaderboard.h"

int main()
{
  Leaderboard scores;

  scores.addPlayer(std::make_unique<Player>("Jerry", 10));
  scores.addPlayer(std::make_unique<Player>("Beth", 690));
  scores.addPlayer(std::make_unique<Player>("Space Beth", 850));
  scores.addPlayer(std::make_unique<Player>("Summer", 750));
  scores.addPlayer(std::make_unique<Player>("Morty", 745));
  scores.addPlayer(std::make_unique<Player>("Rick", 950));

  scores.displaySorted();

  scores.saveFile("Smith-Sanchez_Family");

  scores.loadFile("Smith-Sanchez_Family");

  scores.removePlayer("Jerry");

  scores.addPlayer(std::make_unique<Player>("Bob", 10));

  
  scores.displaySorted();

}