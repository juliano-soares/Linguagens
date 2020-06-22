// abrir um arquivo para sa�da
 
#include <iostream>
#include <fstream>
 
using namespace std;
 
int main(int argc, char *argv[])
{
	ofstream output("saida.txt");
	output <<  "Aprendendo C++\n";
	output << "sssssm\n";
	return 0;
}