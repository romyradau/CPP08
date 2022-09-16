#include "../incl/Span.hpp"

int main(){
	{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	}
	// {
	// 	try{

	// 		Span MySP = Span(100000000);
	// 		// MySP.addNumber(6);
	// 		// MySP.addNumber(3);
	// 		// MySP.addNumber(17);
	// 		// MySP.addNumber(9);
	// 		for( int i = 0; i < 100000000; i++)
	// 			MySP.addNumber(i);
	// 		std::cout << MySP.longestSpan() <<std::endl;
	// 	}
	// 	catch(std::exception & ex){
	// 		std::cout << ex.what() << std::endl;
	// 	}
	// }
	{
		try{
			std::vector<int> anotherVector(10, 100);
			Span newSpan = Span(10);
			newSpan.addNumber(6);
			newSpan.addNumber(3);
			newSpan.addNumber(17);
			newSpan.addNumber(9);
			newSpan.addNumber(anotherVector);
			for (int i = 0; i < newSpan.getVector().size(); i++)
				std::cout << newSpan.getValue(i) << std::endl;
		}
				catch(std::exception & ex){
			std::cout << ex.what() << std::endl;
		}
	}
	return 0;

}