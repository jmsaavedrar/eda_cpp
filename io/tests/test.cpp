#include "io/io.hpp"

int main(int nargs, char** vargs){
	std::string filename("../data/ej1.html");
	io::readTextFile(filename);
	return 0;
}
