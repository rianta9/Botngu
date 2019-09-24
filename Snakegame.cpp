#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#include "reply.h"
using namespace std;



struct toado{
	int x, y;
};


bool gameOver;
const int width = 30;
const int height = 20;
string kytu;
string text;
int vt, score, tail;
enum eDirection{ STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection direct, rem = STOP;
toado head, body[200], fruit;


void setup(){
	direct = STOP;
	head.x = width/2;
	head.y = height/2;
	fruit.x = rand()%width;
	fruit.y = rand()%height;
}

void draw(){
	system("cls");
	cout << "*";
	for(int i=1; i<width+1; i++) cout << " ";
	cout << "*\n";
	for(int i=0; i<height; i++){
		for(int j=0; j<width; j++){
			if(i == head.y && j == head.x) cout << "O";
			else if(i == fruit.y && j == fruit.x) cout << text[vt];
			else{
				bool print = false;
				for(int k=0; k<=tail; k++){
					if(body[k].x == j && body[k].y == i){
						cout << kytu[k];
						print = true;
					}
				}
				if(!print) cout << " ";
			} 
		}
		cout << endl;
	}
	cout << "*";
	for(int i=1; i<width+1; i++) cout << " ";
	cout << "*";
	cout << endl;
	cout << "Score: " << score << endl;
}


void input(){
	if(kbhit()){
		switch(_getch()){
			case 'A':
			case 'a':
				if(rem != RIGHT) direct = LEFT, rem = LEFT;
				break;
			case 'D':
			case 'd':
				if(rem != LEFT) direct = RIGHT, rem = RIGHT;
				break;
			case 'W':
			case 'w':
				if(rem != DOWN) direct = UP, rem = UP;
				break;
			case 'S':
			case 's':
				if(rem != UP) direct = DOWN, rem = DOWN;
				break;
			case 'x':
			case 'X':
				gameOver = true;
				break;
		}
	}
}

void logic(){
	toado prev = body[0], prev2;
	body[0] = head;
	for(int i=1; i<tail; i++){
		prev2 = body[i];
		body[i] = prev;
		prev = prev2;
	}
	switch(direct){
		case LEFT:
			head.x--;
			break;
		case RIGHT:
			head.x++;
			break;
		case UP:
			head.y--;
			break;
		case DOWN:
			head.y++;
			break;
		default:
			break;
	}
	if(head.x < 0) head.x = width-1;
	if(head.x >= width) head.x = 0;
	if(head.y < 0) head.y = height-1;
	if(head.y >= height) head.y = 0;
	for(int i=0; i<tail; i++){
		if(body[i].x == head.x && body[i].y == head.y) {
			gameOver = true;
			cout << "Game over!" << endl;
			cout << "Text: " + kytu << endl;
		}
	}
//	if(body[tail-1].x == head.x && body[tail-1].y == head.y) gameOver = true; 
	if(head.x == fruit.x && head.y == fruit.y){
		kytu += (text[vt++]);
		score += 10;
		tail++;
		if(vt >= text.size()){
			draw();
			Sleep(200);
			cout << "You Win. Chuc mung ^^" << endl;
			cout << "Text: " + kytu << endl;
			gameOver = true;
			return;
		}
		fruit.x = rand()%width;
		fruit.y = rand()%height;
	}
}

void runsnakegame(){
	ios_base::sync_with_stdio(0);
	srand(time(NULL));
	gameOver = false;
	score = 0, tail = 0;
	vt = 0;
	kytu = "";
	text = "i_love_you";
	
	setup();
	while(!gameOver){
		draw();
		input();
		logic();
		Sleep(100);
	}
}

