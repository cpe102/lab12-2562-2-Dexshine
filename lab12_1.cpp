#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

//Write definition of stat() here 
void stat(const double A[],int sizeArrayA,double B[])
{   
    double sum=0,std1=0,max=A[0],min=A[0],zsquarex=0;
    for(int i=0;i<sizeArrayA;i++){
        sum += A[i];
        if(A[i]>max) max = A[i];
        if(A[i]<min) min = A[i];
        zsquarex += pow(A[i],2);
    }
    double mean;
    mean = sum/sizeArrayA;
    std1 = sqrt(((1/sizeArrayA) * (zsquarex)) - pow(mean,2));
    B[0] = sum/sizeArrayA;
    B[1] = std1;
    B[2] = max;
    B[3] = min;

}