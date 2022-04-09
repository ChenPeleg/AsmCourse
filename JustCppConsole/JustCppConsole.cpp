 
#include <iostream>
#include <string.h> 
#include <string> 
#include <cstring> 
#include "common.h"
 
extern "C" int asmmain(void); //pontersFunc
  
using namespace std;

void prettyPrintResult(char* result);
char* catString(char  destenation[MAX_BUFFERSIZE], char  string2[]);


int main()
{
  
    char res[] = "asdfasdfasdfq234123412341234      00000000   "; 
    int retArrayFirstNonZero = asmmain();
    int number = 0; 

    /* This Is the result that will show on the screen*/
    number = retArrayFirstNonZero; 
    sprintf_s(res, "%d", number);

     prettyPrintResult(res);
}

 



 
