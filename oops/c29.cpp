#include <iostream>
using namespace std;
 
int main()
{   
    //Input string
    string str = "code";
    
    //Initialize reverse with null string value
    string rev = "";
    
    //Iterate input string in revrese order
    for(int i=str.length()-1; i>=0; i--){
        //concatenate characters to the reverse
        rev = rev + str[i];  
    }
    
    cout << rev;
    return 0;
}