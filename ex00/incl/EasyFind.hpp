#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <array>
# include <vector>
# include <list>
# include <exception>

template<typename T>
void	easyfind(T container, int& value){

	for (int i = 0; i < container.size(); i++){

		if (container[i] == value){
			std::cout << "match at intArr:	" << i << std::endl;
			return ;
		}
	}
	throw std::exception();
}

template<typename T>
void	easyfind2(T container, int& value){

	typename T::iterator IT;
	//warum muss man hier typename hinschreiben???
	IT = std::find(container.begin(), container.end(), value);
		if(IT != container.end()){
			std::cout << *IT << " is a match" << std::endl;
			return;
		}
	throw std::exception();
}

#endif