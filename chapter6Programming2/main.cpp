//Rectangle Area
#include <iostream>
using namespace std;

double displayData(double,double),
        getArea;

int main() {
    double getLength,
            getWidth;

    cout<<"Please enter a length of the rectangle";
    cin>>getLength;
    cout<<"Please enter a width of the retangle";
    cin>>getWidth;
    cout<<"The Rectangle area is "<<displayData(getLength,getWidth)<<endl;
    return 0;
}

double displayData(double getLength, double getWidth ){
    getArea= getLength*getWidth;
    return getArea;

}



