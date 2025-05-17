#include<iostream>
#include<stdlib.h>
#include<stdio.h>

//opencv
#include<opencv2\objdetect\objdetect.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include<opencv2\highgui\highgui.hpp>
#include "opencv2\core.hpp"
#include <opencv2\core\core.hpp>
#include <opencv2\opencv.hpp>
#include "opencv2/face.hpp"
#include "ostream"

//file handling
#include <fstream>
#include <sstream>

//header files that contain functions
#include "FaceRecognizer.h"
#include <vector>
#include <algorithm>
#include <map>



int main()
{
	FaceRecognizer Munes;
	std::vector<std::string> mfundo = Munes.vec;
	int choice;
	std::cout << "1. Recognise Face\n";
	std::cout << "2. Add Face\n";
	std::cout << "3. Display Students\n";
	std::cout << "Choose One: ";
	std::cin >> choice;
	switch (choice)
	{
	case 1:
			Munes.FaceRecognition();
			mfundo = Munes.vec;
			for (int i = 0; i < mfundo.size(); i++) {
				std::cout << mfundo[i];
			}

		
		
		
		break;
	case 2:
		Munes.addFace();
		Munes.eigenFaceTrainer();
		break;
	case 3:
		Munes.Display();
		break;

	default:
		return 0;
	}
	//system("pause");
	return 0;
}