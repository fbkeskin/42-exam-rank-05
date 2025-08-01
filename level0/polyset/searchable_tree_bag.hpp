/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchable_tree_bag.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatkeski <fatkeski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:26:28 by fatkeski          #+#    #+#             */
/*   Updated: 2025/07/27 18:48:18 by fatkeski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "tree_bag.hpp"
#include "searchable_bag.hpp"


class searchable_tree_bag : public tree_bag, public searchable_bag
{
	private:
		bool search(node* node, const int value) const;
	public:
		searchable_tree_bag();
		searchable_tree_bag(const searchable_tree_bag& source);
		searchable_tree_bag& operator=(const searchable_tree_bag& source);
		bool has(int) const;
		~searchable_tree_bag();
};
