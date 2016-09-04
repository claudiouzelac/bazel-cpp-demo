// Copyright 2016.  Stewart Henderson.

#include <glog/logging.h>
#include <boost/assert.hpp>

int main(int argc, char* argv[]) {
  google::InitGoogleLogging(argv[0]);
  BOOST_ASSERT(true==true);
  LOG(INFO) << "Test";
}
