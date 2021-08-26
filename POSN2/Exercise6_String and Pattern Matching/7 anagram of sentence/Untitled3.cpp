#include <iostream>
#include <string>

#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    std::string sentence;
    std::getline(std::cin, sentence);

    vector<string> word;
    vector<string> wordcheck;
    stringstream temp;
    temp<<sentence;
    string text;
    while(temp>>text)
    {
        word.push_back(text);
        wordcheck.push_back(text);
    }
    /*while(!word.empty())
    {
        cout<<word.back()<<" ";
        word.pop_back();
    }*/
    sort(word.begin(),word.end());

    do
    {
        typedef vector<string>::iterator cnt;
        if(wordcheck==word)
            continue;
        for(cnt i=word.begin();i!=word.end();i++)
        {
            cout<<*i<<" ";
        }
        cout<<endl;
    }while(next_permutation(word.begin(),word.end()));
    return 0;
}
