#include <iostream>
using namespace std;
void evendigits(long long big, int &ans){
    if (big > 0){
        if ((big % 10) % 2 == 0) ans++;
        evendigits(big /= 10, ans);
    }
}
int main(){
    int ans = 0;
    long long big = 200000030;
    evendigits(big, ans);
    cout << ans;
    return 0;
}

