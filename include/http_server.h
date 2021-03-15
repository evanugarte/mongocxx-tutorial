#pragma once

#include <iostream>
#include <string>

#include "SimpleJSON/json.hpp"
#include "mongocxx/instance.hpp"
#include "mongodb_handler.h"
#include "served/multiplexer.hpp"
#include "served/net/server.hpp"

namespace learning {
constexpr char kSaveEndpoint[] = "/save";
constexpr char kWinsEndpoint[] = "/wins";
constexpr char kDeleteEndpoint[] = "/delete";
constexpr char kAllCharactersEndpoint[] = "/";
constexpr char kIpAddress[] = "0.0.0.0";
constexpr char kPort[] = "5000";
constexpr int kThreads = 10;

class HttpServer {
 public:
  HttpServer(served::multiplexer multiplexer) : multiplexer(multiplexer) {}

  auto SaveCharacterToMongoDb() {}

  auto UpdateWins() {}

  auto DeleteHandler() {}

  auto GetAllCharacters() {}

  void InitializeEndpoints() {
    // map above endpoints to handler functions
  }

  void StartServer() {
    mongocxx::instance instance;
    served::net::server server(kIpAddress, kPort, multiplexer);
    std::cout << "Starting server to listen on port " << kPort << "..."
              << std::endl;
    server.run(kThreads);
  }

 private:
  served::multiplexer multiplexer;
};
}  // namespace learning
