cc_library(
    name = "eigen",
    srcs = [],
    hdrs = glob(["Eigen/**"]),
    includes = ["."],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "mujoco-lib",
    srcs = ["mujoco/lib/libmujoco.so.3.2.2"],
    hdrs = glob(["mujoco/**"]),
    includes = ["."],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "rbdl",
    srcs = [
        "rbdl/lib/librbdl.so.3.3.1",
        "rbdl/lib/librbdl_urdfreader.so.3.3.1",
    ],
    hdrs = glob(["rbdl/include/rbdl/**"]),
    copts = ["-std=c++17"],
    includes = [
        "rbdl/include",
        "rbdl/include/rbdl",
        "rbdl/include/rbdl/addons/urdfreader",
    ],
    visibility = ["//visibility:public"],
    # deps = [
    #     "//third_party:eigen",
    # ],
)
