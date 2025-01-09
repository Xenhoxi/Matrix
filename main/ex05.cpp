/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:10:39 by ljerinec          #+#    #+#             */
/*   Updated: 2025/01/09 16:50:19 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Master.hpp"

int main()
{
    std::cout << "Lib Matrix" << std::endl;

    try
    {
        Vector<float>    v1({1.0, 0.0});
        Vector<float>    v2({1.0, 0.0});
        std::cout << angle_cos(v1, v2) << std::endl;

        Vector<float>    v3({1.0, 0.0});
        Vector<float>    v4({0.0, 1.0});
        std::cout << angle_cos(v3, v4) << std::endl;
        
        Vector<float>    v9({-1.0, 1.0});
        Vector<float>    v10({1.0, -1.0});
        std::cout << angle_cos(v9, v10) << std::endl;

        Vector<float>    v5({2.0, 1.0});
        Vector<float>    v6({4.0, 2.0});
        std::cout << angle_cos(v5, v6) << std::endl;
        
        Vector<float>    v7({1.0, 2.0, 3.0});
        Vector<float>    v8({4.0, 5.0, 6.0});
        std::cout << angle_cos(v7, v8) << std::endl;

        Vector<float>    v11({-1.0});
        Vector<float>    v12({1.0, -1.0});
        std::cout << angle_cos(v11, v12) << std::endl;
    }
    catch(const SizeError& se)
    {
        std::cerr << se.what() << '\n';
    }
    
    
}
