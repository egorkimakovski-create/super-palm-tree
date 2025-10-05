#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string text;
    int s=0;
    cout<<"Introduceti un text(sir de caractere):"<<endl;
    getline(cin, text); 
    for (char c : text) 
    {
        if(c==' ') 
        {
            s++;
        }
    }
    cout<<"Numarul de spatii este egal cu:"<<s<<endl;
    return 0;
}
