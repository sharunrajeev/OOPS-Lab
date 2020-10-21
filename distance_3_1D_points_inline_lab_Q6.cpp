#include <iostream>
using namespace std;
inline float shortest_distance(int,int,int);

int main(){
    int t,a,b,c;
    cout<<"-----Shortest Distance between three 1 dimension points -----\n";
    cout<<"Enter the coordinates of three points representing the vertices of triangle\n";
    cin>>a>>b>>c;
    cout<<"Shortest distance between points is "<<shortest_distance(a,b,c)<<" units \n";
    return 0;
}

inline float shortest_distance(int x,int y,int z){
    return (x+y+z)/3.0;
}
