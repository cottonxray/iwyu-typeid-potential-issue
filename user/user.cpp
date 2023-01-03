#include <dependency.h>
#include <typeindex>

auto useTypeIndexOfDependency(const Dependency &dependency) -> void {
  std::type_index type = typeid(dependency);
}
