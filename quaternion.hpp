//
// Created by Вова on 28.10.2019.
//

#ifndef LAB2_QUATERNION_HPP
#define LAB2_QUATERNION_HPP
struct quaternion {
    quaternion ();
    quaternion (double real, double x, double y, double z);
    quaternion operator+(const quaternion& a);
    quaternion operator-(const quaternion& a);
    quaternion operator*(const quaternion& b);
    quaternion operator/(const quaternion &b);
    friend std::ostream &operator<<(std::ostream &out, quaternion const &a);
    friend std::istream &operator>>(std::istream &in, quaternion &a);
private:
    double array[4];
};
#endif //LAB2_QUATERNION_HPP
