/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:10:39 by ljerinec          #+#    #+#             */
/*   Updated: 2026/10/26 12:39:18 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Master.hpp"

int main()
{
    std::cout << "--- EX03 ---" << std::endl;

    Vector<float>  v1({0.0, 0.});
    Vector<float>  v2({1.0, 1.});
    std::cout << "v1 . v2 = " << v1.dot(v2) << std::endl;
    Vector<float>  v3({1.0, 1.});
    Vector<float>  v4({1.0, 1.});
    std::cout << "v3 . v4 = " << v3.dot(v4) << std::endl;
    Vector<float>  v5({-1.0, 6.});
    Vector<float>  v6({3.0, 2.});
    std::cout << "v5 . v6 = " << v5.dot(v6) << std::endl;
    

    Vector<float>    vec_1({2.0, 1.});
    Vector<float>    vec_2({4.0, 2.});

    std::cout << "vec 1 . vec 2 = " << vec_1.dot(vec_2) << std::endl;
    std::cout << "vec 2 . vec 1 = " << vec_2.dot(vec_1) << std::endl;
}
