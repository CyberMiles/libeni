/*==- json/Object.h --------------------------------------------------------==

  This file is part of the Lity project distributed under GPL-3.0.
  See LICENSE for details.

==------------------------------------------------------------------------==*/
#ifndef ENI_JSON_OBJECT
#define ENI_JSON_OBJECT

#include <json/Value.h>
#include <adt/StringMap.h>
#include <string>

namespace json {

class Object : public eni::StringMap<Value>, public Notation
{
public:
  Object();

  Object(const Object& pCopy);

  Object& operator=(const Object& pCopy);

  ~Object() { }

  void print(std::ostream &os) const;
};

} // namespace of json

#endif
