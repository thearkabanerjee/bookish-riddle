# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int arr[a];

    for (int i = 0; i < a; i++){
        cin >> arr[i];
    }

    int longeststreak = 1;
    int count = 1;

    for (int i = 1; i < a; i++){
        if (arr[i] > arr[i-1]){
            count += 1;
        }
        else {
            count = 1;
        }

        if (count >= longeststreak){
            longeststreak = count;
        }
    }

    cout << longeststreak << endl;
    return 0;
}