#include <iostream>
using namespace std;

// class arrayObject {
//     int i,sum,arr[10];
//     float avg;
// public:
//     static int average() {
//         sum = 0;
//         for(i=0;i<arr.length();i++){
//             sum += arr[i];
//         }
//         avg = sum / arr.length();
//         return avg;
//     }
//     int multiply_array(int multiplier) {
//         for(i=0;i<arr.length();i++) {
//             arr[i] *=multiplier;
//         }
//     }
// };
//
// int main() {
//     arrayObject o1,o2,o3;
//
// }
int length(int a[]) {
    int len = 0;
    for(int i=0;a[i]!='\0';i++)
        len++;
    return len;
}
int main(){
    int a[100];
    for(int i=0;a[i]!='\0';i++){
        cin>>a[i];
    }
    cout<<sizeof(a)<<endl;
    cout<<sizeof(a)/sizeof(a[0]);
    cout<<*(&a + 1) - a;
}
