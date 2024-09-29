cc_library(
    name = "control",
    srcs = ["control.cc"],
    hdrs = [
        "control.h",
        "publisher_test.h",
        "subscriber_test.h",
    ],
    copts = ["-std=c++17"],
    includes = [""],
    visibility = ["//visibility:public"],
    deps = ["//third_party:mujoco-lib"],
)

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    copts = ["-std=c++17"],
    includes = [
        ".",
        "../../sim/mujoco",
    ],
    linkopts = [
        "-L/usr/lib/x86_64-linux-gnu",
        "-lglfw",
    ],
    deps = [
        ":control",
        "//sim/mujoco:mujoco-sim",
        "//third_party:mujoco-lib",
        "@ros2//:ros2-lib",
    ],
)
