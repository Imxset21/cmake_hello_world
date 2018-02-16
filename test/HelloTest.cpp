#include <Hello.h>

#include <iostream>
#include <string>

#include <gflags/gflags.h>
#include <glog/logging.h>
#include <gtest/gtest.h>

TEST(TestHello, TestQueueConfig) {
    ASSERT_EQ(*whirlpool::get_queue_config(), std::string{"ayy lmao"});
}

DEFINE_bool(verbose, false, "Whether to print extra debugging information");

int main(int argc, char** argv) {
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  google::InitGoogleLogging(argv[0]);
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
 
