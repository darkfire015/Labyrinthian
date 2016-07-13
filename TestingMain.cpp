// Testing file to double check Labyrinthian work without doing a full run of the program.

#include<iostream>
#include<string>
#include "DunMap.h"

void PointTests();
void CellTests();
void DunMapTests();
void Print(std::string line);

int main() {
	std::cout << "Starting Tests... \n";
	
	// Point tests
	PointTests();

	// Cell Tests
	CellTests();

	// DunMap tests
	DunMapTests();

	// cin line to show the console rather than automatically close. VSC Baka!
	int end;
	std::cin >> end;
	
	return 0;
}

void Print(std::string line)
{
	std::cout << line << std::endl;
}

void PointTests()
{
	Print("Point Tests.");
	Point x;
	Point y = Point(0, 0);
	Point z = Point(0, 1);

	// Check == works for true;
	if (x == y)
		Print("Passed: ==");
	else
		Print("Failed: ==");

	// check == works for false;
	if (x != z)
		Print("Passed: !=");
	else
		Print("Failed: !=");
}

void CellTests()
{
	Print("Cell Tests");
	Cell x;
	
	// Check default connectivity (everything should be 0).
	if (x.ConnectivityCheck())
		Print("Passed: Connectivity Check");
	else
		Print("Failed: Connectivity Check");

	// Double check the default connectivity by printing it.
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			std::cout << (int)x.getConnectivity(Point(i, j)) << ' ';
		}
		std::cout << std::endl;
	}

	// getData
	
}

void DunMapTests()
{

}