
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    {
        ifstream fin("student.txt");
        char ch;
        int count = 0;
        while (!fin.eof())
        {
            fin.get(ch);
          
                switch (ch)
                {
                case 'a':
                case 'A':
                case 'e':
                case 'E':
                case 'o':
                case 'O':
                case 'u':
                case 'U':
                case 'i':
                case 'I':
                    count++;
                    break;
                }
            
        }
        fin.close();
        cout << "There are " << count << " vowels in NOTES.TXT file.";
    }

    return 0;
}