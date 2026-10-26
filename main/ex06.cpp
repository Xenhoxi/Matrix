/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 12:59:53 by ljerinec          #+#    #+#             */
/*   Updated: 2026/10/26 13:02:44 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Master.hpp"

int main()
{
    std::cout << "--- EX06 ---" << std::endl;

    try
    {
        Vector<float>    v1({0.0, 0.0, 1.0});
        Vector<float>    v2({1.0, 0.0, 0.0});
        std::cout << cross_product(v1, v2) << std::endl;
    }
    catch(const SizeError& se)
    {
        std::cerr << se.what() << '\n';
    }
    
    
}