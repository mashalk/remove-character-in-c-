#include <iostream>

using namespace std;


int main(){

    // Taking the string input
    string strValue;
    cout<<"Enter text : ";
    getline(cin, strValue);
    int lencount=0;
    for(int i=0; strValue[i]!='\0';++i)
    {
        lencount++;
    }

    // Now to take out a character
    string emptyString ="";   // Stores the indexed value from the old one
    string newString;       // Stores the final result after removing the character
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;

    // Loop to match the character and then take it out
    for(int j = 0; j<=lencount; ++j){
        if (strValue[j]!=ch){
            newString=emptyString+strValue[j];

        }else{
            continue;
        }
    cout<<newString;
    }

    
}