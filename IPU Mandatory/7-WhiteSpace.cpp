#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
int main()
{
    ifstream in;
    ofstream out;
    in.open("hello_world.txt");
    out.open("newfile.txt");
    if (!in || !out)
    {
        cout << "Could not open the files.";
        return 1;
    }
    char ch;
    while (in.get(ch))
    {
        if (!isspace((unsigned char)ch))
        {
            out.put(ch);
        }
    }
    in.close();
    out.close();
    cout << "The whitespaces have been removed successfully.";
    return 0;
}
