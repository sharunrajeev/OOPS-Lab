/* Question : Write class which contains an integer array and a static function to find
the average of that array. Create THREE objects. Read the values into the
array using one object, and find the average. Let the second object
modifies the value by multiplying each element by a certain multiplier.
Repeat the process of finding the average usng first object. */
// Code :
#include <iostream>
using namespace std;
const int SIZE = 10;

class static_average {
    static int arr[SIZE];
public:
    void getData(int size);
    static void average(int size);
    void modify(int size);
};

int static_average :: arr[SIZE];
void static_average :: getData(int size) {
    cout << "Enter "<<size<<" elements to the Array : ";
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
}

void static_average :: average(int size) {
    int sum = 0;
    float avg;
    cout<<"Elements in the Array : ";
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<' ';
        sum+=arr[i];
    }
    avg = sum / size;
    cout<<"\nThe average of the Array is : "<<avg<<endl;
}

void static_average :: modify(int size) {
    int change;
    cout<<"\nEnter the value with which array elements should be multiplied : ";
    cin>>change;
    for(int i=0;i<size;i++)
       arr[i] = arr[i] * change;
    average(size);
}
int main() {
    static_average sa[3];
    int size,i = 1;
    cout<<"Enter the size of the Array (max "<<SIZE<<" element) : ";
    cin>>size;
    sa[0].getData(size);
    sa[0].average(size);
    while(i<3) {
        sa[i].modify(size);
        i++;
    }
    return 0;
}
