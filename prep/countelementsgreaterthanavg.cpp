# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;

    int arr[a];

    for (int i = 0; i < a; i++){
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < a; i++){
        sum += arr[i];
    }
    double avg = double (sum) / a;
    int count = 0;

    for (int i = 0; i < a; i++){
        if (arr[i] > avg){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}