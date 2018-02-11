#ifndef HELLO_H
#define HELLO_H

#include <memory>
#include <string>

namespace whirlpool {

extern std::unique_ptr<std::string> get_queue_config(void);

} //namespace whirlpool
#endif
