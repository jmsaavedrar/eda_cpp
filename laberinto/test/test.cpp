#include <iostream>
#include "maze/maze.hpp"
int main(int nargs, char** vargs){
	maze::Maze laberinto(21,21);
	laberinto.print();


	return 0;
}
