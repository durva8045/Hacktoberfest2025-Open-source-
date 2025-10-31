// 🌟 Hacktoberfest 2025 Exclusive Code 🌟
// Project: Digital Fortune Teller 🔮

// Description: Gives a random, positive “fortune” message each run!

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    cout << "🔮 Welcome to the Hacktoberfest 2025 Digital Fortune Teller 🔮\n\n";

    vector<string> fortunes = {
        "✨ You will achieve something amazing soon!",
        "🌈 A new opportunity will brighten your week.",
        "🔥 Your skills will impress the right person.",
        "💎 Success is coming — keep believing in yourself!",
        "🌻 A small act of kindness will return tenfold.",
        "🌙 Stay patient — something wonderful is forming for you.",
        "⚡ You’ll learn something today that changes your path.",
        "🍀 Good luck will follow your next decision!",
        "💫 You are about to start a great new chapter.",
        "🎯 Your hard work is about to pay off!"
    };

    srand(time(0)); // Seed random number
    int index = rand() % fortunes.size();

    cout << "Your fortune for today:\n";
    cout << "--------------------------------------\n";
    cout << fortunes[index] << "\n";
    cout << "--------------------------------------\n\n";

    cout << "🌟 Keep contributing and growing this Hacktoberfest 2025! 💻\n";
    return 0;
}
