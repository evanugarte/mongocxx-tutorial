#pragma once

#include <ostream>
#include <string>
#include <unordered_map>

namespace learning {
enum class CharacterSize {
  kSmall,
  kMedium,
  kLarge,
};

std::unordered_map<CharacterSize, const char*> character_size_to_string({
    {CharacterSize::kSmall, "small"},
    {CharacterSize::kMedium, "medium"},
    {CharacterSize::kLarge, "large"},
});

std::unordered_map<std::string, CharacterSize> string_to_character_size({
    {"small", CharacterSize::kSmall},
    {"medium", CharacterSize::kMedium},
    {"large", CharacterSize::kLarge},
});
}  // namespace learning
