// JustCppConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h> 
#include <string> 
#include <cstring> 
 
extern "C" int mainasm();

using namespace std;
int const MAX_BUFFERSIZE = 3000;
void prettyPrintResult(char destenation[]);
char* catString(char  destenation[MAX_BUFFERSIZE], char  string2[]);
int main()
{
    
    char res[] = "123122341325134531451351";
    int asmRet = mainasm();
   // std::string s = std::to_string(42);
    //std::string s = std::to_string(asmRet);
    int number = asmRet;
    number = 89;
    char  numberstring[(((sizeof number) * CHAR_BIT) + 2) / 3 + 2];
    sprintf_s(res, "%d", number);
   // char pchar[ ] = s.c_str();


     prettyPrintResult(res);
}
void prettyPrintResult(char * result ) {
    char mainstring[MAX_BUFFERSIZE] = "";
    char borderline[] = "       *****************************************************\n";
    char headerLine[] = "       ***********    Assembly Application    **************\n";
    char simpleLine[] = "       ***                                               ***\n";
    char answerLine[] = "       ***                                               ***\n";
    int offset = 20;
    for (int i = 0; i < 15; i++) {
        
        char lastChar = result[i];
        answerLine[i + offset] = lastChar;
        if (lastChar == '\0' || lastChar < 32 || lastChar > 127) {
            answerLine[i + offset] = ' ';
           // break;
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
 



 
