#include <android/api-level.h>
#include "private/bionic_sdk_version.h"

extern "C" uint32_t android_get_application_target_sdk_version();
extern "C" void android_set_application_target_sdk_version(uint32_t target);

uint32_t bionic_get_application_target_sdk_version() {
  android_set_application_target_sdk_version(__ANDROID_API_N_MR1__);
  return android_get_application_target_sdk_version();
}
