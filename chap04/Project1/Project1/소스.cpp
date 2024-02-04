#include <iostream>
#include <chrono>
#include <thread>

int main() {
    int frame = 0;
    int refreshRate = 120; // ��ǥ ������ �ӵ� (Hz)

    // 1�ʿ� �� �������� �Ǿ�� �ϴ��� ���
    double frameTime = 1.0 / refreshRate;

    while (true) {
        std::cout << "���� ������: " << frame << std::endl;

        // ���� �ð���ŭ ���
        auto start = std::chrono::steady_clock::now();
        std::this_thread::sleep_for(std::chrono::duration<double>(frameTime));
        auto end = std::chrono::steady_clock::now();

        // ���� �ɸ� �ð� ���
        auto elapsedSeconds = std::chrono::duration<double>(end - start).count();

        // ��ǥ ������ �ӵ��� �°� ������ ����
        frame += static_cast<int>(refreshRate * elapsedSeconds);
    }

    return 0;
}