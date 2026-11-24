#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Core>
#include<iostream>

int main(){

    ///给定一个点 P=(2,1), 将该点绕原点先逆时针旋转 45◦，再平移 (1,2), 计算出
    // 变换后点的坐标（要求用齐次坐标进行计算）。

    float cosa = cos(45.0/180.0*acos(-1));
    float sina = sin(45.0/180.0*acos(-1));

    std::cout << cosa << std::endl;
    std::cout << sina << std::endl;

    Eigen::Vector3f P;
    P << 2.0f,1.0f,1.0f;
    Eigen::Matrix3f R;
    R << cosa,-sina,1.0,sina,cosa,2.0,0.0,0.0,1.0;

    // 
    std::cout << R*P << std::endl;

    // Eigen

    return 0;
}