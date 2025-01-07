/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:10:39 by ljerinec          #+#    #+#             */
/*   Updated: 2025/01/07 16:11:00 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Master.hpp"

// rintln!("{}", lerp(0., 1., 0.));
// 0.0
// println!("{}", lerp(0., 1., 1.));
// 1.0
// println!("{}", lerp(0., 1., 0.5));
// 0.5
// println!("{}", lerp(21., 42., 0.3));
// 27.3

// V1 = Vector::from([2., 1.])
// V2 = Vector::from(4., 2.), 0.3)
// println!("{}", lerp(V1, V2);
// [2.6]
// [1.3]

// M1 = Matrix::from([[2., 1.],
                  // [3., 4.]])
// M2 = Matrix::from([[20., 10.],
                  // [30., 40.]])
// println!("{}", lerp(M1, M2, 0.5);
// [[11., 5.5]
// [16.5, 22.]]

// u , v, t
// (v - u) * t + u

int main()
{
    std::cout << "Lib Matrix" << std::endl;
    
    int iresult = linear_interpolation(0.0, 1.0, 0.);
    std::cout << "Linear interpolation result = " << iresult << std::endl;

    float fresult = linear_interpolation(21., 42., 0.3);
    std::cout << "Linear interpolation result = " << fresult << std::endl;
    
    Vector<float>  vec_1({2.0, 1.});
    Vector<float>  vec_2({4.0, 2.});

    Vector<float>   test = linear_interpolation(vec_1, vec_2, 0.3);
    test.display();
    
    Matrix<float>    mat_1({
        {2.0, 1.},
        {3., 4.}});

    Matrix<float>    mat_2({
        {20., 10.},
        {30., 40.}});
    
    Matrix<float>   mat_res = linear_interpolation(mat_1, mat_2, 0.5);
    mat_res.display();
    mat_1.display();
    mat_2.display();
}
