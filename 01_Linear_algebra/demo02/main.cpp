/**
      20210302
      @author:hongqiangwang
             
**/
#include <iostream>
#include <Eigen/Core>
using namespace std;
using namespace Eigen;

typedef Eigen::Matrix<float, 3, 3> MyMatrix33f;
//typedef Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> myMatrix;

int main()
{
    MyMatrix33f a,b,c;

    a = MyMatrix33f::Zero();  // fill matrix elements with zeros
    b = MyMatrix33f::Identity(); // fill matrix as Identity matrix
    c = MyMatrix33f::Random(); //fill matrix elements with random values
    cout<<"The matrix a is \n"<<a<<"\n"<<b<<"\n"<<c<<endl;
    
    
    
    return 0;
}


