# Leaderboard System

A leaderboard system written in C++ demonstrating OOP concepts combined with STL algorithms.

## Features
- Player class with name and score
- Leaderboard class for managing players
- Add and remove players
- Display players sorted by score (highest first)
- Save and load leaderboard from file

## Concepts Covered
- Encapsulation
- Composition (Leaderboard has Players, not inheritance)
- Smart pointers (unique_ptr)
- STL vector
- STL sort with custom lambda comparator
- Lambda functions
- File I/O (ofstream, ifstream)
- String to int conversion (stoi)
- Iterator invalidation after erase()

## How to Run
g++ main.cpp Player.cpp Leaderboard.cpp -o main
./main.exe

## Classes
- `Player` — stores name and score
- `Leaderboard` — manages a collection of players, sorting, and file persistence

## Notes
`loadFile()` clears existing players before loading to avoid duplicates when reloading saved data.
