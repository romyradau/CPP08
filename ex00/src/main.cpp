#include "../incl/EasyFind.hpp"

int	main(){

/****************<array><random access>*************************/
	std::array<int, 5> intArr = {1, 2, 3, 4, 5};
	int	value = 3;
	//without {} random values, with {} everything 0
	try{

		::easyfind(intArr, value);
		value = 33;
		::easyfind(intArr, value);
	}
	catch(std::exception & ex){
		std::cout << ex.what() << ":	number not an element of the array" << std::endl;
	}

/****************<vector><random access>*************************/
	std::vector<int> intVec;
	int	numInput;
	std::cout << "insert 3 numbers of your choice\n";
	for (int i = 0; i < 3; ++i){

		std::cin >> numInput;
		intVec.push_back(numInput);
	}
	std::cout << "you reached the end of the array\n"
	<< "now look for the number you want\n" << std::endl;
		std::cin >> numInput;
	try{
		::easyfind(intVec, numInput);
	}
	catch(std::exception & ex){
		std::cout << ex.what() << ":	number not an element of the array" << std::endl;
	}

/****************<list><bidirectional iterator>*************************/
//can't acces with easyfind - [] anymore - becasue bidirectional
	std::list<int> intL;
		intL.push_back(11);
		intL.push_back(22);
		intL.push_back(33);
	try{
		easyfind2(intL, value);
	}
	catch(std::exception &ex){
		std::cout << ex.what() << ":	number not an element of the array" << std::endl;

	}


}
