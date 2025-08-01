/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigint.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatkeski <fatkeski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:17:26 by fatkeski          #+#    #+#             */
/*   Updated: 2025/07/26 17:52:26 by fatkeski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIGINT
#define BIGINT

#define SIZE_MIN 0
#define SIZE_MAX 4294967295

#include <sstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <deque>

class bigint
{
	private:
		std::string str;
		//std::string result;
	public:
		bigint();
		bigint(unsigned int num);
		bigint(const bigint& source);

		std::string getStr()const;

		bigint& operator=(const bigint& source);

		// addition
		bigint operator+(const bigint& other)const;
		bigint& operator+=(const bigint& other);

		// increments
		bigint& operator++(); // ++x
		bigint operator++(int); // x++

		// shift with num
		bigint operator<<(unsigned int n)const;
		bigint operator>>(unsigned int n)const;
		bigint& operator<<=(unsigned int n);
		bigint& operator>>=(unsigned int n);

		//shift with object
		bigint operator<<(const bigint& other)const;
		bigint operator>>(const bigint& other)const;
		bigint& operator<<=(const bigint& other);
		bigint& operator>>=(const bigint& other);

		// ==, !=, <, >, <=, >=
		bool operator==(const bigint& other) const;
		bool operator!=(const bigint& other) const;
		bool operator<(const bigint& other) const;
		bool operator>(const bigint& other) const;
		bool operator<=(const bigint& other) const;
		bool operator>=(const bigint& other) const;

		// ~bigint();

};

//void	printDeque(std::deque<int>::iterator begin, std::deque<int>::iterator end);

std::ostream& operator<<(std::ostream& output, const bigint& obj);

#endif
