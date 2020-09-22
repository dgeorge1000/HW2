// DataStruct1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cassert>
#include <cstdlib>
#include <cstdio>
#include <iostream>

//GCD
int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return gcd(b, a % b);
}

//LCM using GCD
int lcm(int a, int b)
{
	int x = gcd(a,b);
	if(x>0)
		return a*b/x
	return 0;
}

int powermod(int a, int b){
	return 0;
}

/* 
 *./exec a b r 
 */
int main(int argc, char** argv)
{
	assert(argc == 4); 
	int a=0, b=0, r=0;
	sscanf(argv[1],"%d",&a);
	sscanf(argv[2],"%d",&b);
	sscanf(argv[3],"%d",&r);
    std::cout << "Hello World!\n";
	std::cout << "GCD: " << gcd(a, b) << std::endl;
	std::cout << "LCM: " << lcm(a, b) << std::endl;
	std::cout << "Power Mod: "<< powermod(a,b) << std::endl;
}
