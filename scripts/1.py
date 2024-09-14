import os


def list_subdirectories(directory):
    # 获取指定目录下的一级子目录
    subdirs = [
        d for d in os.listdir(directory) if os.path.isdir(os.path.join(directory, d))
    ]

    # 生成格式化的字符串，从 'include' 开始，子目录路径带引号并用逗号隔开
    result = ", ".join(f'"include/{subdir}"' for subdir in subdirs)

    # 输出结果
    print(result)


# 调用函数遍历 '/opt/ros/jazzy/include' 目录下的一级子目录
list_subdirectories("/opt/ros/jazzy/include")
