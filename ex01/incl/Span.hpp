#ifndef SPAN_HPP
# define SPAN_HPP
# include <stack>
# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <limits>

class Span
{

	public:

		Span(unsigned int N);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );
		void				addNumber(int number);
		void				addNumber(std::vector<int> anotherVector);
		unsigned int 		getStorage(void) const;
		int					getValue(unsigned int i)const;
		std::vector<int>& 	getVector();
		unsigned int 		shortestSpan();
		unsigned int 		longestSpan();

	private:
		Span();
		unsigned int	_n;
		std::vector<int>		_intArray;


};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */