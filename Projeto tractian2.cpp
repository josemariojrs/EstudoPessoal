#include <conio.h>
#include <iostream>
#include <fstream>
using namespace std;

int main () {
 int length;
 char * buffer;

 ifstream is;
 is.open ("1602245833-2715-NAO7856.txt", ios::in);

 is.seekg (0, ios::end);
 length = is.tellg();
 is.seekg (0, ios::beg);

 if (is.is_open())
 {
    int n = 0;
    buffer = new char[length];
    is.read(buffer,length);

 }
 else {
   printf("Arquivo n�o foi aberto");
   getch();
}

  is.close();
}
