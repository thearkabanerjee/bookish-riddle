# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int arr[a];

    for (int i = 0; i < a; i++){
        cin >> arr[i];
    }
    int num;
    cin >> num;
    int count = 0;
    for (int i = 0; i < a;i++){
        if (arr[i] == num){
            count ++;
        }
    }


    cout << count << endl;
    return 0;
}