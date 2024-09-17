#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    vector<string> testing {"This", "test", "abc"};
    for (const string& word : msg)
    {
        cout << word << " ";
        
    }
    cout << endl;
    for (const string& word: testing)
    {
        cout << word << " ";
    }

    std::cout << "babuga?\n";
    
    cout << endl;
}
