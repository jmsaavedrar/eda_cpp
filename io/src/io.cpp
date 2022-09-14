#include "io/io.hpp"
#include <fstream>
#include <iostream>

namespace io {
	void readTextFile(const std::string &filename){
		std::ifstream f_in(filename);
		char symbol = '\0';
		if (f_in.is_open()){
			while (f_in.get(symbol)){
				std::cout<<symbol;
			}
			std::cout<<std::endl;
		}
		else{
			std::cout<< "Error al leer " << filename << std::endl;
		}
		f_in.close();

	}
}
