# include <iostream>
using namespace std;

int main(){
    int a;
    long long occur;
    cin >> a >> occur;

    int arr[a];

    for (int i = 0; i < a; i++){
        long long m;
        cin >> m;
        arr[i] =m;
    }
    int count = 0;
    for (int i = 0; i < a; i++){
        if (arr[i] == occur){
            count ++;
        }
    }

    cout << count << endl;
    return 0;
}