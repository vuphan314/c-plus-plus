#include "timing.h"

////////////////////////////////////////////////////////////

Float getRemainingDuration(auto startTime,
    Float currentPercentage) {
  auto currentDuration = getDuration(startTime);
  return currentDuration *
    (100.0 / currentPercentage - 1) / 3600;

}
auto getDuration(auto startTime) {
  auto currentTime = getTime();
  return chrono::duration_cast
    <chrono::seconds>(currentTime - startTime).count();
}

auto getTime() {
  return chrono::system_clock::now();
}

////////////////////////////////////////////////////////////

void testTiming() {
  auto startTime = getTime();
  for (int i = 0; i < 1000000000; i++);
  cout << getRemainingDuration(startTime, 50) << "h left\n";
}
