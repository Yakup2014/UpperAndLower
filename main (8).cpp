/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char mesaj[]="BuGün Hava Çok GÜZEL!";
    
    for(int i=0;i<strlen(mesaj);i++){
        if(i==0||mesaj[i-1]==' ')
             mesaj[i]=toupper(mesaj[i]);
        else
            mesaj[i]=tolower(mesaj[i]);
    }
    cout<<mesaj;

    return 0;
}