#include <json/Parser.h>

int main(int argc, char* argv[])
{
  std::string json_string("{\"0\":{\"0...16\\u");
  json::Parser parser(json_string);
  if (!parser) return 87;
  return 0;
}
