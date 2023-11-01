#include <iostream>
using namespace std;
char tiles[10] = {
  '0',
  '1',
  '2',
  '3',
  '4',
  '5',
  '6',
  '7',
  '8',
  '9'
};

int checkResult();
void board();

int main() {
  int player = 1, i, choice;
  
  char mark;

  do {
    board();
    player = (player % 2) ? 1 : 2;

    cout << "Player " << player << ", enter a number:  ";
	cin >> choice;
    
    mark = (player == 1) ? 'X' : 'O';

    if (choice == 1 && tiles[1] == '1')

      tiles[1] = mark;
    else if (choice == 2 && tiles[2] == '2')

      tiles[2] = mark;
    else if (choice == 3 && tiles[3] == '3')

      tiles[3] = mark;
    else if (choice == 4 && tiles[4] == '4')

      tiles[4] = mark;
    else if (choice == 5 && tiles[5] == '5')

      tiles[5] = mark;
    else if (choice == 6 && tiles[6] == '6')

      tiles[6] = mark;
    else if (choice == 7 && tiles[7] == '7')

      tiles[7] = mark;
    else if (choice == 8 && tiles[8] == '8')

      tiles[8] = mark;
    else if (choice == 9 && tiles[9] == '9')

      tiles[9] = mark;
    else {
      cout << "Invalid Move ";

      player--;
      cin.ignore();
      cin.get();
    }

    i = checkResult();

    player++;
  } while (i == -1);

  board();

  if (i == 1)

    cout << "==>\a Player " << --player << " Won ";
  else
    cout << "==>\a Game Draw";

  cin.ignore();
  cin.get();

  char yn = 'N';
  cout << "Play Again? Y/N: ";
  cin >> yn;

  if (yn == 'Y' || yn == 'y') {
    main();
  }

  return 0;
}

int checkResult() {
  if (tiles[1] == tiles[2] && tiles[2] == tiles[3])

    return 1;
  else if (tiles[4] == tiles[5] && tiles[5] == tiles[6])

    return 1;
  else if (tiles[7] == tiles[8] && tiles[8] == tiles[9])

    return 1;
  else if (tiles[1] == tiles[4] && tiles[4] == tiles[7])

    return 1;
  else if (tiles[2] == tiles[5] && tiles[5] == tiles[8])

    return 1;
  else if (tiles[3] == tiles[6] && tiles[6] == tiles[9])

    return 1;
  else if (tiles[1] == tiles[5] && tiles[5] == tiles[9])

    return 1;
  else if (tiles[3] == tiles[5] && tiles[5] == tiles[7])

    return 1;
  else if (tiles[1] != '1' && tiles[2] != '2' && tiles[3] != '3' &&
    tiles[4] != '4' && tiles[5] != '5' && tiles[6] != '6' &&
    tiles[7] != '7' && tiles[8] != '8' && tiles[9] != '9')

    return 0;
  else
    return -1;
}

void board() {
  system("cls");
  cout << "\n\n\tTic Tac Toe\n\n";

  cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
  cout << endl;

  cout << "  " << tiles[1] << "  |  " << tiles[2] << "  |  " << tiles[3] << endl;

  cout << "_____|_____|_____" << endl;
  cout << "     |     |     " << endl;

  cout << "  " << tiles[4] << "  |  " << tiles[5] << "  |  " << tiles[6] << endl;

  cout << "_____|_____|_____" << endl;
  cout << "     |     |     " << endl;

  cout << "  " << tiles[7] << "  |  " << tiles[8] << "  |  " << tiles[9] << endl;

  cout << "     |     |    " << endl << endl;

}
