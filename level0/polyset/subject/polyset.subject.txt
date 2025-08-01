Assigment name: Polyset
Expected File: searchable_array_bag.cpp, searchable_array_bag.hpp,
searchable_tree_bg.cpp, searchable_tree_bag.hpp, set.cpp, set.hpp

You will find in this directory some classes:
- bag: an abstract class representing a bag
- searchable_bag: an abstract class representing a bag with the ability to
	search in it.
- array_bag: an implementation of a bag with an array an underlying data
	structure.
- tree_bag: an implementation of a bag with a binary search tree as underlying
	data structure.

If you don't know what is a set or a bag (shame!) you can read the attached
file shame.en.txt

First Part:
Since a bag without a searching function isn't very useful, implement two
classes searchable_array_bag and searchable_tree_bag, that will inherit from
array_bag and tree_bag and implement the searchable bag abstract class.

Second Part:
Implement the class set that will wrap a searchable_bag and turn it into a set.
You will find in this dir a main that must compile with your code.
All classes should be under orthodox canonical form. Don't forget the const.
