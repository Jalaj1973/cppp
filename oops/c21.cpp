#include<iostream>
#include<vector>
using namespace std;

int main() {
	int count=0;
    vector<int> a;
    for(int i = 0; i < 5; i++) {
        int num;
        cin >> num;
        a.push_back(num);
    }
   for (int i = 0; i < a.size(); i++) {
        if (a[i] != 1) {
            a[count] = a[i];
            count++;
        }
    }
    while (count < a.size()) {
        a[count] = 1;
        count++;
    }
    for(int i=0;i<a.size();i++) cout << a[i] << " ";
}