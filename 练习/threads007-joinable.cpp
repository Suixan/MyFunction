#include <iostream>
#include <thread>
#include <chrono>

/*

void foo()
{
		
	std::this_thread::sleep_for(std::chrono::seconds(1));
	
}

int main(int argc, const char *argv[])
{
	std::thread t1;
	
	std::cout <<  "before starting, joinable: " << t1.joinable() << '\n';
	
	
	t1 = std::thread(foo);
	
	std::cout <<  "after starting, joinable: " << t1.joinable() << '\n';
	
	t1.join();
	
	return 0;	
	
}
*/

void foo()
{
		
	std::this_thread::sleep_for(std::chrono::seconds(1));
	
}


void bar()
{
		
	std::this_thread::sleep_for(std::chrono::seconds(1));
	
}
int main()
{
	
	std::cout <<  "starting first helper...\n";
	std::thread helper1(foo);
	
	
	std::cout <<  "starting second helper...\n";
	std::thread helper2(bar);

	std::cout <<  "waiting for helpers to finish..."<< '\n';
	
	helper1.join();
	helper2.join();
	
	std::cout << "done\n";
	return 0;	
	
}






















