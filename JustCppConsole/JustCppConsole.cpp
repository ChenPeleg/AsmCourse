// JustCppConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include <string>
#include <string.h> 
#include <cstring> 
 
using namespace std;
int const MAX_BUFFERSIZE = 3000;
std::string createMainString(std::string inputString);
char* catString(char  destenation[MAX_BUFFERSIZE], char  string2[]);
int main()
{
    std::cout << "Hello World!\n\n\n";
    char mainstring [MAX_BUFFERSIZE]= "string number 1";
    char s2[MAX_BUFFERSIZE] = "string number 1";
     catString(mainstring, s2) ;

    std::cout << "\n\n\n this Is the Result:\n" << mainstring << "\n\n\n";
 
    //createMainString("123");
}
std::string createMainString(std::string inputString) {
    char finalString[MAX_BUFFERSIZE] = "******   ";
    char stringToAdd[5] = "1234";
 
    catString(finalString, stringToAdd);
    return finalString;
}
 char* catString (char destenation[MAX_BUFFERSIZE], char string2[]) {
  
    int l = 0;
    for (int i = 0; i < 100; i++) {
        char c = destenation[i];
    
        if (c == '\0' || l > 0) {
            destenation[i] = string2[l];
            l++;
            if (string2[l] == '\0' || l == sizeof(string2)){
                break;
            }
        }
       
    } 
    return destenation;
}
 



 
