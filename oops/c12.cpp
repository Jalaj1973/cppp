
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char input[100], output[100];
    int i, j;

    cout << "Enter a string \n";
    cin.getline(input, 500);

    for (i = 0, j = 0; input[i] != '\0'; i++)
    {
        if (input[i] != ' ')
        {
            // If current character is not a space character,
            // copy it to output String
            output[j++] = input[i];
        }
    }
    output[j] = '\0';

    cout << "Input String: " << input << endl;
    cout << "String without spaces : " << output;

    return 0;
}