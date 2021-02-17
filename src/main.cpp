#include <iostream>

#include "mongocxx/instance.hpp"

#include "mongodb_handler.h"

void print_result(const bool &result, const char* operation) {
  std::cout << "the " << operation << (result ? " worked" : " didn't work.") << std::endl;
}

int main() {
  mongocxx::instance instance;
  learning::MongoDbHandler mhandler;
  bool result = mhandler.UpdateWins("602bed5efb52bf47da422532");
  print_result(result, "update");
  result = mhandler.RemoveCharacterFromDb("602bed5efb52bf47da422532");
  print_result(result, "delete");

  result = mhandler.UpdateWins("602bed5efb52bf47da422532");
  print_result(result, "update");
  result = mhandler.RemoveCharacterFromDb("602bed5efb52bf47da422532");
  print_result(result, "delete");
}
