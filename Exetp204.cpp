#include <iostream>
#include <locale.h>
#include <fstream>

using namespace std;
 
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");

    string linha;
	
	fstream arq
     arq.open("Lista.txt", ios::out)
      if (arq.is_open()){
        arq << "Rafael Henrique" << endl;
        arq << "Rafael Henrique" << endl;
        arq << "Rafael Henrique" << endl;
        arq.close();
        arq.open("Lista.txt", ios::in);

       while (!arq.eof()){
        getline (arq, linha);
        cout << linha.insert(0," ")
       }
      }
	return 0;
}