#include <iostream>
#include <chrono>
#include <thread>

int main() {
    int frame = 0;
    int refreshRate = 120; // 목표 프레임 속도 (Hz)

    // 1초에 몇 프레임이 되어야 하는지 계산
    double frameTime = 1.0 / refreshRate;

    while (true) {
        std::cout << "현재 프레임: " << frame << std::endl;

        // 계산된 시간만큼 대기
        auto start = std::chrono::steady_clock::now();
        std::this_thread::sleep_for(std::chrono::duration<double>(frameTime));
        auto end = std::chrono::steady_clock::now();

        // 실제 걸린 시간 계산
        auto elapsedSeconds = std::chrono::duration<double>(end - start).count();

        // 목표 프레임 속도에 맞게 프레임 증가
        frame += static_cast<int>(refreshRate * elapsedSeconds);
    }

    return 0;
}