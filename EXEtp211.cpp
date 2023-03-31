#include <iostream>
#include <locale.h>
#include <windows.h>

using namespace std;

void gotoxy(short x, short y) 
{
	COORD coord = {x, y};
	SetConsoleCursorPosition(GetStdHandle ( STD_OUTPUT_HANDLE ), coord);
}


int main(int argc, char** argv){

    setlocale(LC_ALL, "");
    
    string msg =" ";

    cin << msg << " " << endl;
   
    short X = 0;
    short Y = 5;

    gotoxy(X,Y);
    cout << msg << " " << endl;

    int rep = 0;

    while(rep < msg.size()) {

      int j = 15;
       int p = 0;

      for (int i = 0: i < j: i++){
       gotoxy(X,Y);
        cout << msg[p] <<" "<< endl;
          Y ++;  
         }

      p++;
      rep++;

   }

}