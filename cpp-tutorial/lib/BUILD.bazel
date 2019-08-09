cc_library(
    name = "hello-time",
    srcs = ["hello-time.cc"],
    hdrs = ["hello-time.h"],
    visibility = ["//main:__pkg__"],
)

cc_test(
  name = "unittest",
  srcs = glob(["test/*.cc"]),
  deps = [
    ":hello-time",
    "@googletest//:gtest_main",
  ],
)

