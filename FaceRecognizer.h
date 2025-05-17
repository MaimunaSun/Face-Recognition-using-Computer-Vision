#pragma once
#include <string>
#include "opencv2\core\core.hpp"
#include "opencv2\core.hpp"
#include "opencv2\face.hpp"
#include "opencv2\highgui\highgui.hpp"
#include "opencv2\objdetect\objdetect.hpp"
#include "opencv2\opencv.hpp"
#include<direct.h>
#include <fstream>
#include <sstream>

#include <vector>
#include <algorithm>
#include <map>



class FaceRecognizer {

public:

	cv::CascadeClassifier face_cascade;
	std::string filename;
	std::string name;
	int filenumber = 0;
	std::vector<std::string> vec;
	std::string Gelo[3];

	void detectAndDisplay(cv::Mat frame);
	void addFace();
	static void dbread(std::vector<cv::Mat>& images, std::vector<int>& labels);
	void eigenFaceTrainer();
	void  FaceRecognition();
	void Display();
	void remove(std::vector<std::string>& v);



};