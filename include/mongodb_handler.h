#include <cstdint>
#include <string>

#include "character_size.h"

#pragma once

namespace learning {
class MongoDbHandler {
  // Mario Kart Characters
  bool AddCharacterToDb(const std::string &character_name,
                        const CharacterSize &size, const int16_t &wins) {
    return true;
  }

  bool UpdateWins(const std::string &character_id) {
    return true;
  }

  bool RemoveCharacterFromDb(const std::string &character_id) {
    return true;
  }
};
}  // namespace learning
