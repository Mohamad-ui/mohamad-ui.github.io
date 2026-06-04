#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <string>

int main() {

    cv::Mat Box_1;
    cv::Mat Box_2;

    int jiggles = 0;

    Box_1 = cv::imread("/data/data/com.termux/files/home/cpp/mohamad-ui.github.io/Jiggler/images/Box_1.jpg");
    Box_2 = cv::imread("/data/data/com.termux/files/home/cpp/mohamad-ui.github.io/Jiggler/images/Box_2.jpg");
   

    if(Box_1.empty() || Box_2.empty()) {
        std::cout << "Failed to load image" << std::endl;
        return 1;
    }

    std::string repeat_check;

    std::cout << "Do you want the box the jiggle? please enter y or n";
    std::cout << std::endl;
    std::cin >> repeat_check;

    if(repeat_check == "y") {
        repeat_check = "true";
    }
    else {
	std::cout << "The box wont repeat";
	std::cout << std::endl;

        return 1;
    }

    	while(repeat_check == "true") {
	 cv::imshow("Box", Box_1);
	 cv::waitKey(50);

	 cv::imshow("Box", Box_2);
	 cv::waitKey(50);
    
	 jiggles++;

	 std::cout << "Number of jiggles: "; 
	 std::cout << jiggles;
	 std::cout << std::endl;

	 int key = cv::waitKey(50);

         if(key == 27) {
		 std::cout << "No jiggles for u fatss";
		 std::cout << std::endl;

		 break;
	 }

    }

    cv::waitKey(0);

    cv::destroyAllWindows();

    return 0;
 }
