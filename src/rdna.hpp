#include <iostream>
#include <random>

using namespace std;

string randDNA(int seed, string bases, int x)
	{
		random_device rd;
		mt19937 eng(seed);
		
		
