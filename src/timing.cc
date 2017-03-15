#include "timing.h"

////////////////////////////////////////////////////////////

Float getRemainingDuration(Time startTime,
    Float currentPercentage) {
  auto currentDuration = getDuration(startTime);
  return currentDuration *
    (100.0 / currentPercentage - 1) / 3600;

}

Duration getDuration(Time startTime) {
  Time currentTime = getTime();
  return chrono::duration_cast
    <chrono::seconds>(currentTime - startTime).count();
}

Time getTime() {
  return chrono::system_clock::now();
}

////////////////////////////////////////////////////////////

void testTiming() {
  auto startTime = getTime();
  for (int i = 0; i < 1000000000; i++);
  cout << getRemainingDuration(startTime, 50) << "h left\n";
  for (int i = 0; i < 1000000000; i++);
  cout << getDuration(startTime) << "s total\n";
}
