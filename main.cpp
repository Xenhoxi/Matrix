/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:10:39 by ljerinec          #+#    #+#             */
/*   Updated: 2024/12/09 15:16:24 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Vector.hpp"

int main()
{
    std::cout << "Matrix" << std::endl;

    float vec[] = {1.0, 2.3, 6.0, 7.8902};
    // float vec2[] = {3.0, 3.3, 6.0, 7.8902};
    // float *mat[] = {
    //     {90.43, 54},
    //     {5.6, 78},
    //     {3.0, 4.5},
    // };
    
    std::vector<float> test1 = {1.2, 2.6, 3.0};
    std::vector<float> test2 = {1.2, 2.6, 3.0};
    std::cout << test1.size() << std::endl;
    std::cout << sizeof(vec) << std::endl;
    Vector  my_vec(vec, sizeof(vec));
    my_vec.display();
    vec[0] = 13.4;
    my_vec.display();
    return (1);
}
