// JustCppConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include <string>
#include <string.h> 
#include <cstring> 
 
using namespace std;
int const MAX_BUFFERSIZE = 3000;
void prettyPrintResult(char destenation[]);
char* catString(char  destenation[MAX_BUFFERSIZE], char  string2[]);
int main()
{
    
    char res[] = "123122341325134531451351";
     prettyPrintResult(res);
}
void prettyPrintResult(char result[]) {
    char mainstring[MAX_BUFFERSIZE] = "";
    char borderline[] = "       *****************************************************\n";
    char headerLine[] = "       ***********    Assembly Application    **************\n";
    char simpleLine[] = "       ***                                               ***\n";
    char answerLine[] = "       ***                                               ***\n";
    int offset = 20;
    for (int i = 0; i < 15; i++) {
        answerLine[i + offset] = result[i];
        if (result[i] == '\0') {
            break;
        }
       
    }
  //  std::cout << borderline << headerLine;
    catString(mainstring, borderline);
    catString(mainstring, headerLine);
    for (int i = 0; i < 6; i++) {
        catString(mainstring, simpleLine); 
        if (i == 3) {
            catString(mainstring, answerLine);
        }
    }
    catString(mainstring, borderline);
    catString(mainstring, borderline);
    std::cout << mainstring;
    return;
}
 char* catString (char destenation[MAX_BUFFERSIZE], char string2[]) {
  
    int l = 0;
    for (int i = 0; i < 10000; i++) {
        char c = destenation[i]; 
        if (c == '\0' || l > 0) { 
            destenation[i] = string2[l]; 
            l++;
            if (string2[l] == '\0'){              
                break;
            }
        }
       
    } 
    return destenation;
}
 



 
