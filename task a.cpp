#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n,m,t,a,s,T1,answer;
    cin >> n >> m;
    vector<int>array;
    vector<int>array2;
    for(int i = 0; i < n ; i++){
        cin >> t;
        array.push_back(t);     
    }
    for(int i = 0; i < m ; i++){
        cin >> a >> s >> T1;
        array2.push_back(a);
        array2.push_back(s);
        array2.push_back(T1);
    }
    int time = 0;
    int time2 = 0;
    int n1 = n;
    for(int i = 0; i < n-1; i++){
        time += array[i];
        cout << time << endl;
        time2 += array[i];
        for(int j = 1; j < array2.size() ; j += 3){
            if (array2[j] < time && array2[j-1] < n1-1 && array2[j-1] != -1){
                cout << array2[j] << endl;
                time2 += array2[j+1];
                array2[j] = INT16_MAX;
            }
        } 
        n1--;
    }
    cout << time2;
}
int main() {
     solve();
     return 0;
}