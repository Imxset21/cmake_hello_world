#include "Hello.h"

#include <iostream>

int main(void) {
  std::cout << *whirlpool::get_queue_config() << std::endl;
}
