#include <iostream>

#include "mongocxx/instance.hpp"

#include "mongodb_handler.h"
#include "served/multiplexer.hpp"

int main() {
  // served::multiplexer multiplexer;
  // learning::HttpServer http_server(multiplexer);

  // http_server.InitializeEndpoints();
  // http_server.StartServer();

  // return (EXIT_SUCCESS);
  mongocxx::instance instance;
  learning::MongoDbHandler mhandler;
  mhandler.AddCharacterToDb("Donkey Kong", learning::CharacterSize::kLarge, 99);
}
