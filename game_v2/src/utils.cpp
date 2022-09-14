namespace game{
bool** createLab(int size,bool val){
	bool** lab = new bool*[size];
	for(int i=0; i<size; i++){
		lab[i] = new bool[size];
		for(int j=0; j<size; j++){
				lab[i][j] = val;
		}
	}
	return lab;

}
void copyData(bool** lab, int size, bool data[][8]){
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			lab[i][j] = data[i][j];
		}
	}
}

void deleteLab(bool** lab, int size){
	for(int i=0; i<size; i++){
		delete[] lab[i];
	}
	delete[] lab;
}

}
