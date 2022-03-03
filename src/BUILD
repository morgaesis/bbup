cc_binary(
    name = "bbup",
    srcs = ["bbup.cpp", "hello.h"],
	deps = ["@boost//:program_options"],
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
