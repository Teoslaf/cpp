#include "Span.hpp"

Span::Span(unsigned int N) : N(N)
{
	// std::cout << "Span : Default Constructor Called" << std::endl;
}

Span::~Span()
{
	// std::cout << "Span : Destructor Called" << std::endl;
}

Span::Span(Span const &obj) : N(obj.N), myvector(obj.myvector)
{
}

Span &Span::operator=(const Span &obj)
{
	// std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->N = obj.N;
		this->myvector = obj.myvector;
	}
	return (*this);
}

const char *Span::MaxElementsException::what() const throw()
{
	return "Max number reached";
}
const char *Span::EmptyElementsException::what() const throw()
{
	return "empty or 1 element";
};
void Span::addNumber(unsigned int element)
{

	try
	{
		if (myvector.size() < N)
		{
			myvector.insert(element);
			// std::cout << "added: " << element << std::endl;
		}
		else
			throw MaxElementsException();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}

unsigned int Span::shortestSpan()
{
	try
	{
		if (myvector.size() == 0 || myvector.size() == 1)
			throw EmptyElementsException();
		else
		{
			std::multiset<unsigned int>::iterator it = myvector.begin();
			unsigned int S = std::numeric_limits<unsigned int>::max();
			for (++it; it != myvector.end(); ++it)
			{
				unsigned int cur = *it;
				unsigned int prev = *(std::prev(it));
				unsigned int distance = cur - prev;
				// std::cout << distance << std::endl;
				if (S > distance)
					S = distance;
				prev++;
			}
			return S;
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
		return -1;
	}
}
unsigned int Span::longestSpan()
{
	try
	{
		if (myvector.size() == 0 || myvector.size() == 1)
			throw EmptyElementsException();
		else
		{
			unsigned int begin = *(myvector.begin());
			unsigned int end = *(--myvector.end());
			return (end - begin);
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
		return -1;
	}
}
void Span::addNumbers(std::multiset<unsigned int>::iterator start, std::multiset<unsigned int>::iterator end)
{
	if (std::distance(start, end) > N)
	{
		std::cout << "Error: Range exceeds capacity" << std::endl;
		return;
	}
	else
	{
		for (std::multiset<unsigned int>::iterator it = start; it != end; ++it)
		{
			try
			{
				if (myvector.size() < N)
					myvector.insert(*it);
				else
					throw MaxElementsException();
			}
			catch (const std::exception &e)
			{
				std::cerr << e.what() << '\n';
				return;
			}
		}
	}
}
