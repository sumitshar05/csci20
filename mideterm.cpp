#include <iostream>
// used iostream so i can use the cout feature which helped me to display the infomration on the screen 
using namespace std;
//used this so i can write cout and endl without typing std overall used it so it makes my code shorter and much easier to read.

int main() {
//used this because this is the main function this is where my program starts running and everything
//inside the curly brackets belong to this main function.
    char board[3][3] = {
        {'-','-','-'},
        {'-','-','-'},
        {'-','-','-'}
};
//created a 3x3 matrix board for this game 
//used char because each spave stores one character 
//in this case this game uses 9 spaces which could be 3 rows and 3 columns 
//used '-' to show this space is empty anc could be used at the beginning of the game. 

int row,col;
//created this to show two integral which are rows and columns short for row and col
// row basicallt will store the row number the player wants to choose rows go up down
//col stores the column number the plaer wants to choose goes right left
//used int because these psotions will be whole numbers (eg-0,1,2)
char player = 'x';
//used x because in the game x always goes first]
//basically used this to sjpw variable called player and used char because x is a single character 
int moves = 0;
//created this to show the number of moves set it to 0 because no moves have been made befire the game has started 
//i will try to increase this as each move is made
while (moves<9){
//while loop i used because it will repeat the code while moves is les than 9 because thats how many open spaces
//the loop can keep runing as long as contions are true and not all space have been taken

cout<<board [0][0]<<" "<<board[0][1]<<" "<<board[0][2]<< endl;
//used cout to display the first row of my board in which the first number is row and second number is col
//used endl to move to next line after showung my first row
cout<<board [1][0]<<" "<<board[1][1]<<" "<<board[1][2]<< endl;
//used cout to also show my second row of my board in which th row number is 1 because arrays start at 0?
//row shows the three soaces in the middle of the board
cout<<board [2][0]<<" "<<board[2][1]<<" "<<board[2][2]<< endl;
//lastly the final row in which i used to show the third row number is 2
//all of this together should show something like line 10-12

return 0;
//uised it to tell the computer the program ginished successfully and it is inside thw ile loop so the program stops 
//after displaying the board once
    }
}