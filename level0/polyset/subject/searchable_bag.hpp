#pragma once

#include "bag.hpp"

class searchable_bag : virtual public bag {
public:
	virtual bool has(int) const = 0;
};
