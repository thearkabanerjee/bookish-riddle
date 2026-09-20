# include <iostream>
using namespace std;

int main(){
    int a;
    long long search;
    cin >> a >> search;
    int arr[a];

    for (int i = 0; i < a; i++){
        long long m;
        cin >> m;
        arr[i] = m;
    }

    string verdict = "NO";
    for(int i = 0; i < a; i++){
        if (arr[i] == search){
            verdict = "YES";
        }
    }

    cout << verdict << endl;
    return 0;
}