#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using std::cout;
using std::ifstream;
using std::string;
using std::vector;

enum class State {kEmpty, kObstacle};

string CellString(State cellState){
  switch (cellState) {
    case State::kEmpty : return "0";
    case State::kObstacle : return "⛰️";
  }
}

vector<State> ParseLine(string line) {
    vector<State> row;
    int n; 
    char c;
    std::istringstream stream(line);


    while (stream >> n >> c) {
        if (n == 0) { row.push_back(State::kEmpty); }
        else { row.push_back(State::kObstacle); }
    }

    return row;
}

vector<vector<State>> ReadBoardFile(string path) {
  vector<vector<State>> parsedLine;
  ifstream myfile (path);
  if (myfile) {
    string line;
    while (getline(myfile, line)) {
      parsedLine.push_back(ParseLine(line));
    }
  }
  return parsedLine;
}

void PrintBoard(const vector<vector<State>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++)  {
      cout << CellString(board[i][j]);
    }
    cout << "\n";
  }
}

// #include "test.cpp" // For testing.

int main() {
  auto board = ReadBoardFile("1.board");
  // TestParseLine(); // For testing.
  // Leave commented out.
   PrintBoard(board);
}