#include "Hello.h"

#include <memory>
#include <string>

using namespace whirlpool;

std::unique_ptr<std::string> whirlpool::get_queue_config(void) {
  return std::make_unique<std::string>("ayy lmao");
}
