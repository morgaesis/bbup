cc_binary(
    name = "main",
    srcs = ["main.cpp", "hello.h"],
)

cc_test(
		name = "hello_test",
		srcs = [
			"hello_test.cpp",
		],
		size = "small",
		deps = [
			"//src:main",
			"@googletest//:gtest_main",
		],
)
