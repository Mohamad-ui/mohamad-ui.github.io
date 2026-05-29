#include <iostream>
#include <opencv2/opencv.hpp>
#include <string>

int main() {

    cv::Mat Box_1;
    cv::Mat Box_2;

    Box_1 = cv::imread("/data/data/com.termux/files/home/cpp/idk/mohamad-ui.github.io/idk/images/Box_1.jpg");
    Box_2 = cv::imread("/data/data/com.termux/files/home/cpp/idk/mohamad-ui.github.io/idk/images/Box_2.jpg");

    if(Box_1.empty() || Box_2.empty()) {
        std::cout << "Failed to load image" << std::endl;
        return 1;
    }

    std::string repeat_check;

    std::cout << "Do you want the box the jiggle? please enter y or n" << std::endl;
    std::cin >> repeat_check;

    if(repeat_check == "y") {
        repeat_check = "true";
    }
    else {
	std::cout << "The box wont repeat" << std::endl;
        return 1;
    }

    	while(repeat_check == "true") {
	 cv::imshow("Box", Box_1);
	 cv::waitKey(50);

	 cv::imshow("Box", Box_2);
	 cv::waitKey(50);
    }

    cv::waitKey(0);

    cv::destroyAllWindows();

    return 0;
 }
