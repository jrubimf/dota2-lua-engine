// Copyright 2013 Karl Skomski - GPL v3
#pragma  once
#include "source-sdk/SDK.h"
#include "utils/global_address_retriever.hpp"

namespace dota {

class Minimap {
 public:
  static void CreateLocationPing(Vector vector, int unknown) {
    uint32_t address = GlobalAddressRetriever::GetInstance()
      .GetStaticAddress("Minimap::CreateLocationPing");

    float x = vector.x;
    float y = vector.y;
    float z = vector.z;

    __asm {
      push unknown
      push z
      push y
      push x
      call address
    }
  }
};

}  // namespace dota
