#include <iostream>
#include <stdio.h>
#include <errno.h>
using namespace std;

int main()
{
	FILE* Fp;
	fopen_s(&Fp, "Debug/Vertex.vert", "r");
	int* ptr;
	system("pause");
	return 0;
}
