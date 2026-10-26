/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:10:39 by ljerinec          #+#    #+#             */
/*   Updated: 2026/10/26 10:25:17 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Master.hpp"

int main()
{
    // Vx[x] + Y[x] = R[x]

    
    Vector<float>  vec_1({1.0, 0, 0});
    Vector<float>  vec_2({0, 1.0, 0});
    Vector<float>  vec_3({0, 0, 1.0});
    std::cout << "Lib Matrix" << std::endl;
    Vector<float> lc = linear_combination<float>({vec_1, vec_2, vec_3}, {10, -2, 0.5});
    lc.display();

    Vector<int>  v1({1, 2, 3});
    Vector<int>  v2({0, 10, -100});

    Vector<int> lc2 = linear_combination<int>({v1, v2}, {10, -2});
    lc2.display();


    Vector<double>  v3({2.5, 2.1, 3.2});
    Vector<double>  v4({2.3, 10.5, 9.});

    Vector<double> lc3 = linear_combination<double>({v3, v4}, {2, -5});
    lc3.display();

    try
    {    
        Vector<float>  vec_1({1.0, 0, 0});
        Vector<float>  vec_2({0, 1.0, 0});
        Vector<float>  vec_3({0, 0, 1.0});
        Vector<float> lc = linear_combination<float>({vec_1, vec_2, vec_3}, {10, -2});
        lc.display();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
