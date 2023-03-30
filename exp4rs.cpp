#include <iostream>
#include <string>

using namespace std;

void findAndReplace(string& text,  string& search,  string& replace) 
{
    size_t pos = 0;
    while ((pos = text.find(search, pos)) != string::npos) {
        text.replace(pos, search.length(), replace);
        pos += replace.length();
    }
}

int main()
 {
    string s1, s2, word;
    cout<<"ENTER s1:"<<endl;
    getline(cin, s1);
    cout<<"ENTER s2:"<<endl;
    getline(cin, s2);
    cout<<"ENTER word:"<<endl;
    getline(cin, word);
    cout<<"ON REPLACEMENT: "<<endl;
    findAndReplace(s1,word,s2);
    cout<<s1;
    return 0;
}

