#include <iostream>
#include <algorithm>
#include <ctime>
#include "../Tools/header.h"

int main(){
	DES des;
	system("clear");		   
	std::string plaintext;
	std::cout << std::endl << "[ Clear Text ] -> ";
	std::getline(std::cin,plaintext); 
	srand(time(0));
	for(auto i = plaintext.length()-1; i > 0; i--){
		int j = rand()%(i+1);
		std::swap(plaintext[i],plaintext[j]);
	}
	
	des.Func(plaintext);
	
	return 0;
}
