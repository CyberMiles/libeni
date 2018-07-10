/*==- json/Array.h ---------------------------------------------------------==

  This file is part of the Lity project distributed under GPL-3.0.
  See LICENSE for details.

==------------------------------------------------------------------------==*/
#ifndef ENI_JSON_ARRAY
#define ENI_JSON_ARRAY

#include <json/Notation.h>
#include <vector>
#include <iostream>

namespace json {

class Value;

class Array : private std::vector<Value>, public Notation
{
public:
  using std::vector<Value>::at;
  using std::vector<Value>::begin;
  using std::vector<Value>::end;
  using std::vector<Value>::emplace_back;
  using std::vector<Value>::push_back;

public:
  Array();

  ~Array() { }

  Array(const Array& pArray);

  Array& operator=(const Array& pArray);

  const Value& operator[](int pIdx) const { return this->at(pIdx); }

  void print(std::ostream &os) const;
};

} // namespace json

#endif