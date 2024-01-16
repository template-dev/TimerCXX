#include <iostream>
#include <chrono>
#include <thread>
#include <mutex>

void timer(int h, int m)
{
	if (h < 0 || m < 0)
	{
		std::cout << "hours or minutes are equal to 0\n";
		return;
	}

	std::mutex myMutex;
	std::lock_guard<std::mutex> lock(myMutex);
	while (true)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
		std::system("cls");

		std::chrono::minutes time;
		if (h == 0 && m != 0)
			time = std::chrono::minutes(m);
		else
			time = std::chrono::hours(h) + std::chrono::minutes(m);
		int hours = std::chrono::duration_cast<std::chrono::minutes>(time).count() / 60;
		int mins = std::chrono::duration_cast<std::chrono::minutes>(time).count() % 60;


		std::cout << (hours < 10 ? "0" : "") << hours << ":" << (mins < 10 ? "0" : "") << mins << std::endl;
		if (h == 0 && m == 0)
		{
			std::cout << "Time is left!\n";
			break;
		}

		if (h != 0 && m == 0)
		{
			--h;
			m = 60;
		}
		else
		{
			--m;
		}
	}
}

int main()
{
	std::thread timerThread(timer, 1, 30);
	
	if (timerThread.joinable())
		timerThread.join();

	std::cin.get();
}