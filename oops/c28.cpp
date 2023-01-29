#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char ch;
    int lines=0,words=0,chr=0;
    ifstream ind("student.txt");
       ind.get(ch);
    while(ind){
        if(ch=='\n'){
            lines++;
        }
        else if(ch ==' '){
            words++;
        }
        else
        chr++;
        ind.get(ch);
    }
cout<<"lines="<<lines<<"\nwords="<<words<<"\ncharacters="<<chr;
return 0;
}