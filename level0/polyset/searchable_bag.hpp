/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchable_bag.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatkeski <fatkeski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:23:22 by fatkeski          #+#    #+#             */
/*   Updated: 2025/07/26 19:34:49 by fatkeski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "bag.hpp"

class searchable_bag : virtual public bag // virtual inheritance
{
 public:
	virtual bool has(int) const = 0; // verilen sayı bag'te var mı yok mu kontrolünü yapar
};
