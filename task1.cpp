#include <iostream>
#include <vector>
using namespace std;
void swapvec(vector<int>& a, int* b){
    int c;
    for (int i = 0; i < a.size(); i++){
        c = b[i];
        b[i] = a[i];
        a[i] = c;
    }
}
int main() {
    vector<int> a = {1,2,3,4};
    int b[] = {5,6,7,8};
    swapvec(a,b);
    for (int i : a){
        cout << i;
    }
    cout << endl;
    for (int i : b){
        cout << i;
    }
    return 0;
}