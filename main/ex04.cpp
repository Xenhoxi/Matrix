/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:10:39 by ljerinec          #+#    #+#             */
/*   Updated: 2026/10/26 12:42:31 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Master.hpp"

int main()
{

    Vector<float>    v1({0.0, 0., 0});
    std::cout << "norm_1: " << v1.norm_1() << ", norm: " << v1.norm() << ", norm_inf: " << v1.norm_inf() << std::endl;
    Vector<float>    v2({1.0, 2., 3});
    std::cout << "norm_1: " << v2.norm_1() << ", norm: " << v2.norm() << ", norm_inf: " << v2.norm_inf() << std::endl;
    Vector<float>    v3({3.0, 2., 1});
    std::cout << "norm_1: " << v3.norm_1() << ", norm: " << v3.norm() << ", norm_inf: " << v3.norm_inf() << std::endl;
    Vector<float>    v4({9.0, 28., 21});
    std::cout << "norm_1: " << v4.norm_1() << ", norm: " << v4.norm() << ", norm_inf: " << v4.norm_inf() << std::endl;
    Vector<float>    v5({-1, -2});
    std::cout << "norm_1: " << v5.norm_1() << ", norm: " << v5.norm() << ", norm_inf: " << v5.norm_inf() << std::endl;
    
}
