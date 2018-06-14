#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony *pony = new Pony;

	pony->name = "Heap pony";
	std::cout << "Pony name: " << pony->name << std::endl;
	pony->color = "Pink";
	std::cout << "Pony color: " << pony->color << std::endl;
	pony->age = "20";
	std::cout << "Pony age: " << pony->age << std::endl;
	delete pony;
}

void	ponyOnTheStack(void)
{
	Pony pony;

	pony.name = "Stack pony";
	std::cout << "Pony name: " << pony.name << std::endl;
	pony.color = "Yellow";
	std::cout << "Pony color: " << pony.color << std::endl;
	pony.age = "18";
	std::cout << "Pony age: " << pony.age << std::endl;
}

int		main(void)
{
	std::cout << "Pony on a Heap:" << std::endl;
	ponyOnTheHeap();
	std::cout << "Pony on a Stack:" << std::endl;
	ponyOnTheStack();
	return (0);
}
