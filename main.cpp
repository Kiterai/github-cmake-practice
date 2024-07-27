#include <lib.hpp>
#include <vulkan/vulkan.hpp>

int main() {
    hello();

    vk::InstanceCreateInfo instCreateInfo;
    vk::Instance instance = vk::createInstance(instCreateInfo);

    instance.destroy();
}
