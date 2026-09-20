# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int arr[a];

    for(int i = 0; i < a; i++){
        long long m;
        cin >> m;
        arr[i] = m;
    }

    string verdict = "YES";
    for (int i = 1; i < a; i++){
        if (arr[i] != arr[i-1]){
            verdict = "NO";
            break;
        }
    }


    cout << verdict << endl;
    return 0;
}