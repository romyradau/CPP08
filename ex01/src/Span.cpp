#include "../incl/Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
}

Span::Span(unsigned int N): _n(N)
{
	_intArray.reserve(N);
}

Span::Span( const Span & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->_n = rhs.getStorage();
		_intArray = rhs._intArray;
		//container ahben auch den assignment operator!
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Span const & i )
{
	o << "Span class that can store at maximum " << i.getStorage() << " integers";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber(int number){
	
	if (_intArray.size() < _n){
		_intArray.push_back(number);
		//vector wuerde selber reallocaten
	}
	else
		throw std::out_of_range("span is full");
}

unsigned int Span::shortestSpan(){
	
	if(_intArray.size() > 1){

		unsigned int span = std::numeric_limits<unsigned int>::max();
		std::sort(_intArray.begin(), _intArray.end());
		std::vector<int>::iterator IT = _intArray.begin();
		std::vector<int>::iterator IT2 = _intArray.begin() + 1;
		for (;IT2 != _intArray.end(); IT++, IT2++){

			if((*IT2 - *IT) < span){
				span = (*IT2 - *IT);
			}
		}
		return (span);
		//mit ;; kann man 
	}
	else
		throw std::length_error("span not long enough");

}

unsigned int Span::longestSpan(){

	if (_intArray.size() > 1){

		std::sort(_intArray.begin(), _intArray.end());
		return (_intArray.back() - _intArray.front());
	}
	else
		throw std::length_error("span not long enough");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
unsigned int Span::getStorage(void) const{

	return (this->_n);
}


/* ************************************************************************** */