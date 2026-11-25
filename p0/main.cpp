#include <cmath>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <iostream>

int main()
{

    // float a=1.0,b=2.0;
    // std::cout<< a <<std::endl;
    // std::cout<< a/b <<std::endl;
    // std::cout<< sqrt(a) <<std::endl;
    // std::cout<< acos(-1) <<std::endl;
    // std::cout<< sin(30.0/180.0*acos(-1)) <<std::endl;

    // Example of vector
    // std::cout << "Example of vector \n";
    // // vector definition
    Eigen::Vector3f v(1.0f, 2.0f, 3.0f);
    // Eigen::Vector3f w(1.0f,0.0f,0.0f);
    // // vector output
    // // std::cout << "Example of output \n";
    // // std::cout << v <<std::endl;
    // // vector add
    // std::cout << "Example of add \n";
    // std::cout << v+w <<std::endl;
    // //vector scalar multiply
    // // std::cout << "Example of scalar multiply \n";
    // // std::cout << v*3.0f <<std::endl;
    // // std::cout << 2.0f*v <<std::endl;
    // std::cout << "Example of dot multiply \n";
    // std::cout << EIGEN_DOT_H(v,w) << std::endl;

    // Example of matrix
    std::cout << "Example of matrix \n";
    // matrix definition
    Eigen::Matrix3f i, j;
    i << 1.0, 2.0, 3.0,
        4.0, 5.0, 6.0,
        7.0, 8.0, 9.0;
    j << 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0;
    // matrix output
    std::cout << "Example of output \n";
    std::cout << i << std::endl;
    // matrix add
    std::cout << "Example of add \n";
    std::cout << i + j << std::endl;
    // matrix scalar multiply
    std::cout << "Example of scalar multiply \n";
    std::cout << i * 2.0 << std::endl;
    // matrix multiply
    std::cout << "Example of matrix multiple \n";
    std::cout << i * j << std::endl;
    // matrix vector multiply
    std::cout << "Example of matrix vector multiply \n";
    std::cout << i * v << std::endl;

    return 0;
}