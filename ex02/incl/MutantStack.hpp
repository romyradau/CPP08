#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP


# include <algorithm>
# include <iostream>
# include <stack>
# include <list>

template< class fillWith>
class MutantStack: public std::stack<fillWith>{

	public:

		MutantStack():std::stack<fillWith>(){}
		MutantStack(MutantStack const & src): std::stack<fillWith>(src){
			if (this != &src)
				*this = src;
		}
		MutantStack & operator=(MutantStack const & rhs){
			this->c = rhs.c;
			return *this;
		}
		~MutantStack(){};
		
		typedef typename std::stack<fillWith>::container_type::iterator iterator;
		typedef typename std::stack<fillWith>::container_type::reverse_iterator mutantRIT;
		typedef typename std::stack<fillWith>::container_type::const_iterator mutantCIT;
		typedef typename std::stack<fillWith>::container_type::const_reverse_iterator mutantCRIT;

//std::<fillWith>::container_type:: ... needed

		iterator begin(){
			return this->c.begin();
		}
		mutantCIT cbegin() const{
			return this->c.begin();
		}
		//return this->c.begin()const geht nicht aber woher weiss er dann, dass der It const ist?
		iterator end(){
			return this->c.end();
		}
		mutantCIT cend()const{
			return this->c.end();
		}
		mutantRIT rbegin(){
			return this->c.rbegin();
		}
		mutantCRIT crbegin()const{
			return this->c.rbegin();
		}
		mutantRIT rend(){
			return this->c.rend();
		}
		mutantCRIT crend()const{
			return this->c.rend();
		}

};

#endif