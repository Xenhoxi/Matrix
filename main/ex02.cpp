/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:10:39 by ljerinec          #+#    #+#             */
/*   Updated: 2026/10/26 12:39:43 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Master.hpp"

int main()
{
    std::cout << "--- EX02 ---" << std::endl;
    std::cout << "Lib Matrix" << std::endl;
    
    float iresult = linear_interpolation(0.0, 1.0, 0.5);
    std::cout << "Linear interpolation result = " << iresult << std::endl;

    float fresult = linear_interpolation(21., 42., 0.5);
    std::cout << "Linear interpolation result = " << fresult << std::endl;
    
    std::cout << "---- VECTOR ----" << std::endl;
    Vector<float>  vec_1({2.0, 1.});
    Vector<float>  vec_2({4.0, 2.});

    vec_1.display();
    vec_2.display();
    std::cout << "lerp(V1, V2, 0.3) = ";
    Vector<float>   res = linear_interpolation(vec_1, vec_2, 0.3);
    res.display();
    
    std::cout << "---- MATRIX ----" << std::endl;
    Matrix<float>    mat_1({
        {2.0, 1.},
        {3., 4.}});

    Matrix<float>    mat_2({
        {20., 10.},
        {30., 40.}});
    mat_1.display();
    mat_2.display();
    std::cout << "lerp(M1, M2, 0.5) = ";
    Matrix<float>   mat_res = linear_interpolation(mat_1, mat_2, 0.5);
    mat_res.display();
}
