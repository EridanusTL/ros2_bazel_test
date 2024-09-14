cc_binary(
    name = "talker",
    srcs = [
        "src/publisher_lambda_function.cpp",
    ],
    args = [""],
    copts = ["--std=c++17"],
    includes = [""],
    deps = ["@ros2//:ros2-lib"],
)

cc_binary(
    name = "listener",
    srcs = [
        "src/subscriber_lambda_function.cpp",
    ],
    args = [""],
    copts = ["--std=c++17"],
    includes = [""],
    deps = ["@ros2//:ros2-lib"],
)
