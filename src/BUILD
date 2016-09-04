# Copyright 2016, Stewart Henderson

cc_binary(
  name = "example-binary",
  srcs = [
    "example.cc"
  ],
  deps = [
    "//external:glog",
    "@boost//:assert"
  ],
  linkopts = [
    "-pthread"
  ]
)
