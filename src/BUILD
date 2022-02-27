cc_binary(
    name = "bbup",
    srcs = ["main.cpp", "hello.h"],
)

cc_test(
		name = "hello_test",
		srcs = [
			"hello_test.cpp",
		],
		size = "small",
		deps = [
			"//src:bbup",
			"@googletest//:gtest_main",
		],
)
