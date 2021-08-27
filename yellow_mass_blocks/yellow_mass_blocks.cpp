#include <iostream>
using namespace std;

int main()
{
    uint32_t N;
    uint16_t R;
    uint16_t W, H, D;
    // W = H = D = 10'000;
    // N = 100'000;
    uint64_t sum = 0;

    cin >> N >> R;

    for (uint32_t i = 0; i < N; ++i) {
        cin >> W >> H >> D;
        uint64_t V;

        uint32_t step_1 = static_cast<uint32_t>(W)* static_cast<uint32_t>(H);
        V = static_cast<uint64_t>(step_1)* static_cast<uint64_t>(D);
        sum += V;
    }
    cout << sum * R;
    return 0;
}

