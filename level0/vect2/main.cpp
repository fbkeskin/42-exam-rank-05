/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatkeski <fatkeski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 21:04:35 by fatkeski          #+#    #+#             */
/*   Updated: 2025/07/29 15:21:50 by fatkeski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vect2.hpp"

int main()
{
	vect2 v1; // 0, 0
	vect2 v2(1, 2); // 1, 2
	const vect2 v3(v2); // 1, 2
	vect2 v4 = v2; // 1, 2

	std::cout << "v1: " << v1 << std::endl;
	std::cout << "v1: " << "{" << v1[0] << ", " << v1[1] << "}" << std::endl;
	std::cout << "v2: " << v2 << std::endl;
	std::cout << "v3: " << v3 << std::endl;
	std::cout << "v4: " << v4 << std::endl;
	std::cout << v4++ << std::endl; // 2, 3
	std::cout << ++v4 << std::endl; // 3, 4
	std::cout << v4-- << std::endl; // 2, 3
	std::cout << --v4 << std::endl; // 1, 2


	v2 += v3; // 2, 4
	v1 -= v2; // -2, -4
	v2 = v3 + v3 *2; // 3, 6
	v2 = 3 * v2; // 9, 18
	v2 += v2 += v3; // 20, 40
	v1 *= 42; // -84, -168
	v1 = v1 - v1 + v1;

	std::cout << "v1: " << v1 << std::endl;
	std::cout << "v2: " << v2 << std::endl;
	std::cout << "-v2: " << -v2 << std::endl;
	std::cout << "v1[1]: " << v1[1] << std::endl;
	v1[1] = 12;
	std::cout << "v1[1]: " << v1[1] << std::endl;
	std::cout << "v3[1]: " << v3[1] << std::endl;
	std::cout << "v1 == v3: " << (v1 == v3) << std::endl;
	std::cout << "v1 == v1: " << (v1 == v1) << std::endl;
	std::cout << "v1 != v3: " << (v1 != v3) << std::endl;
	std::cout << "v1 != v1: " << (v1 != v1) << std::endl;

	return (0);
}
