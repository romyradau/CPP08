#include "../incl/MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	MutantStack<int> s(mstack);
	MutantStack<int>::mutantRIT it2 = s.rbegin();
	MutantStack<int>::mutantRIT ite2 = s.rend();
	while (it2 != ite2)
	{
	std::cout << *it2 << std::endl;
	++it2;
	}
	
	return 0;
}