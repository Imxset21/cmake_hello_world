#include <Hello.h>

#include <iostream>

#include <gflags/gflags.h>
#include <glog/logging.h>

DEFINE_bool(verbose, false, "Whether to print extra debugging information");

int main(int argc, char** argv) {
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  google::InitGoogleLogging(argv[0]);
  
  LOG(ERROR) << *whirlpool::get_queue_config();
}
 
