/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:10:39 by ljerinec          #+#    #+#             */
/*   Updated: 2025/01/08 14:35:18 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Master.hpp"

int main()
{
    std::cout << "Lib Matrix" << std::endl;
    
    // Vector  vec_1({2.0, 1.});
    // Vector  vec_2({4.0, 2.});
    
    // std::cout << vec_1.dot(vec_2) << std::endl;
    // vec_1.display();

    Vector<float>    vec_1({3.0, 2., 1});
    std::cout << "norm_1: " << vec_1.norm_1() << ", norm: " << vec_1.norm() << ", norm_inf: " << vec_1.norm_inf() << std::endl;

    Vector<float>    vec_2({-1, -2});
    std::cout << "norm_1: " << vec_2.norm_1() << ", norm: " << vec_2.norm() << ", norm_inf: " << vec_2.norm_inf() << std::endl;
    
}
