// This header is used for bindgen to automatically generate the openvr c binding
// bindgen -match openvr_capi.h scripts/binding.h -o binding.rs

//#include <stdbool.h>
#include <stdint.h>
#define bool int

#include "../openvr/headers/openvr_capi.h"
