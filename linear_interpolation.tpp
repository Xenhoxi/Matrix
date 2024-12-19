/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linear_interpolation.tpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:15:19 by ljerinec          #+#    #+#             */
/*   Updated: 2024/12/19 16:20:25 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename V>
V   linear_interpolation(V u, V v, float t)
{
    V res = (v - u) * t + u;
	return (res);
}
