/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:10:39 by ljerinec          #+#    #+#             */
/*   Updated: 2024/12/03 10:56:37 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Vector.hpp"

int main()
{
    std::cout << "Matrix" << std::endl;

    float vec[] = {1.0, 2.3, 6.0, 7.8902};
    // float vec2[] = {3.0, 3.3, 6.0, 7.8902};
    // float mat[][] = {
    //     {90.43, 54},
    //     {5.6, 78},
    //     {3.0, 4.5},
    // };
    std::cout << sizeof(vec) << std::endl;
    Vector  my_vec(vec, sizeof(vec));
    my_vec.display();
    vec[0] = 13.4;
    my_vec.display();
    std::cout << my_vec << std::endl;

    return (1);
}
