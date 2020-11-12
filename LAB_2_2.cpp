/* Quesion : Write a program to find shortest distance between three coordinates points,
representing vertices of a triangle, using inline function. */
// Code :
#include <iostream>
#include <math.h>
using namespace std;
inline float distanceBtwTwoPoints(int x1,int y1,int z1,int x2,int y2,int z2) { return sqrt(pow((x2-x1),2)+pow((y2-y1),2)+pow((z2-z2),2)); }

int main(){
    int x[3],y[3],z[3];  // they are x coordinates, y coordinates
    float d[3]; // distanceBtwTwoPoints
    float shortest_distance; // shortest distance
    cout<<"-----Shortest Distance between three points -----\n";
    cout<<"Enter the coordinates of three points representing the vertices of triangle\n";
    cout<<"Enter the coordinates of point 1 : ";
    cin>>x[0]>>y[0]>>z[0];
    cout<<"Enter the coordinates of point 2 : ";
    cin>>x[1]>>y[1]>>z[1];
    cout<<"Enter the coordinates of point 3 : ";
    cin>>x[2]>>y[2]>>z[2];
    for(int i=0;i<=2;i++)
        if(i==2)
            d[i] = distanceBtwTwoPoints(x[i],y[i],z[i],x[0],y[0],z[0]);
        else
            d[i] = distanceBtwTwoPoints(x[i],y[i],z[i],x[i+1],y[i+1],z[i+1]);
    cout<<"\nDistance between points \n";
    cout<<"1 --- 2 -> "<<d[0]<<endl;
    cout<<"2 --- 3 -> "<<d[1]<<endl;
    cout<<"3 --- 1 -> "<<d[2]<<endl;
    if(d[0]<=d[1] && d[0]<=d[2])
        shortest_distance = d[0];
    else if(d[1]<=d[0] && d[1]<=d[2])
        shortest_distance = d[1];
    else
        shortest_distance = d[2];
    cout<<"\nShortest distance between points 1,2,3 is "<<shortest_distance<<" units \n";
    return 0;
}
