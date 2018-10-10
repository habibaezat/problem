#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream infile;
    infile.open("words.txt");
    string oneword="";
    string word="";
    int count1=0;
    while(infile >> oneword)
    {
        if(oneword.size()>=4){
        for(int i = oneword.size()-4 ; i < oneword.size() ; i++)
        {
            word+=oneword[i];
        }
        if(word=="dous")
        {
            cout << oneword << endl;
            count1++;
        }


        word="";}

    }
    cout << count1;

    return 0;
}
