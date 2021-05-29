// JustCppConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include <string>
#include <string.h> 
#include <cstring> 
 
using namespace std;
int const MAX_BUFFERSIZE = 3000;
std::string createMainString(std::string inputString);
char* AddOneStringToAnother(char  destenation[MAX_BUFFERSIZE], char  string2[]);
int main()
{
    std::cout << "Hello World!\n\n\n";
    char dset [MAX_BUFFERSIZE]= "st";
    char s2[] = "string number 1";
    
    
    char* final  =  AddOneStringToAnother(dset, s2) ;

    std::cout << "\n\n\n this Is the Result";
    std::cout << "\n\n\n this Is the Result";
    //createMainString("123");
}
std::string createMainString(std::string inputString) {
    char finalString[MAX_BUFFERSIZE] = "******   ";
    char stringToAdd[5] = "1234";
    // finalString.push(inputString) = finalString+inputString + "   *******";
    AddOneStringToAnother(finalString, stringToAdd);
    return finalString;
}
 char* AddOneStringToAnother (char destenation[MAX_BUFFERSIZE], char string2[]) {
    //  std::cat  MainString
 
    const int finalLength = sizeof(destenation) + sizeof(string2) - 1;
    std::cout << "\n" <<   " begin loopin through the String: \n\n\ " ;
    int l = 0;
    for (int i = 0; i < 10; i++) {
        char c = destenation[i];
        std::cout << "\n" << i << " value ";
        std::cout << c;
        if (c == '\0' || l > 0) {
            destenation[i] = string2[l];
            l++;
        }
    }
    std::cout << "\n" << " End of loopin through the String: \n\n\ ";
   

    //char stringPointer*= &finalString;
    // std::strncat(MainString, stringToadd, MAX_BUFFERSIZE - strlen(stringToadd) - 1);
    return destenation;
}
 //  if (myChar != 32){
      //    std::cout << "\n" << i << " " + myChar;
//       }



 
