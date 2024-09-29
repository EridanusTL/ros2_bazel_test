cc_library(
    name = "mujoco-sim",
    srcs = [
        "glfw_adapter.cc",
        "glfw_dispatch.cc",
        "lodepng.cc",
        "platform_ui_adapter.cc",
        "simulate.cc",
    ],
    hdrs = glob(["*.h"]),
    copts = ["-std=c++17"],
    visibility = ["//visibility:public"],
    deps = ["//third_party:mujoco-lib"],
)
