/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bag.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatkeski <fatkeski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:12:00 by fatkeski          #+#    #+#             */
/*   Updated: 2025/07/26 19:25:00 by fatkeski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once // birden fazla include guard engelleyici -> "Bu dosya bir kez dahil edildikten sonra, aynı dosya ikinci kez include edilirse onu yok say."

// bag veri yapısı, multiset'e denktir. bir veri ve ondan kaç tane bulunduğunu tutan bir yapıdır.
// abstract class ve hatta interface. bag olan her şey aşağıdaki 4 işlemi yapabilmeli
class bag
{
 public:
	virtual void insert (int) = 0;
	virtual void insert (int *, int) = 0;
	virtual void print() const = 0;
	virtual void clear() = 0;
};
