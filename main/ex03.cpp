/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:10:39 by ljerinec          #+#    #+#             */
/*   Updated: 2026/10/26 10:25:07 by ljerinec         ###   ########.fr       */
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

    Vector<float>    vec_1({2.0, 1.});
    Vector<float>    vec_2({4.0, 2.});

    std::cout << "Dot product: " << vec_1.dot(vec_2) << std::endl;
}
