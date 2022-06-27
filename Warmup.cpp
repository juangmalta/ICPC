#include <iostream>
#include <string>
using namespace std;

int findSum(string str)
{
int sum = 0;
for (char ch : str)
{
if (isdigit(ch))
{
sum += ch - '0';
}
}
return sum;
}

int main(){
    string problemas;
    cin>>problemas;
    int numProblesmas = stoi(problemas);
    int correctos=0;
    string entrada;
    int validos=0;
    for (int i = 0; i < numProblesmas; i++)
    {
        cin>>entrada;
        correctos = findSum(entrada);
        if (correctos>1)
        {
            validos++;
        }
        
    }
    cout<<validos<<endl;
}