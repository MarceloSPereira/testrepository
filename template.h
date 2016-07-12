#pragma once

#ifdef TEMPLATE_EXPORT
#define TEMPLATE_API __declspec(dllexport)
#else
#define TEMPLATE_API __declspec(dllimport)
#endif

#include<iostream>
#include<cstring>
#include<vector>
#include <fstream>

using namespace std;

namespace TemplateLibrary {
	struct templateConfig
	{
		string content,
			fontBold, //1 or 0
			fontItalic, //1 or 0
			fontUnderline, //1 or 0
			fontSize,
			height,
			width,
			positionX,
			positionY;
	};

	struct MSGfileConfig
	{
		string MsgDots,
			ObjectsCnt,
			Delay,
			fileName;
	};

	class Template
	{
		vector<string> textTemplate;
		vector<string> MSGInfoTemplate;
	public:
		Template();
		~Template();
		void createTemplate(templateConfig config, MSGfileConfig msgConf);

	private:

	};

	Template::Template()
	{
		textTemplate.push_back("[Object001]");
		textTemplate.push_back("SelectedDSCount=0");
		textTemplate.push_back("FontZoomInOutX=100");
		textTemplate.push_back("FontName=0");
		textTemplate.push_back("FontIsWF=1");
		textTemplate.push_back("FontStrikeout=0");
		textTemplate.push_back("FontItalic=");
		textTemplate.push_back("FontUnderline=");
		textTemplate.push_back("FontBold=");
		textTemplate.push_back("FontSizeType=1");
		textTemplate.push_back("FontSize=");
		textTemplate.push_back("Hide=0");
		textTemplate.push_back("Angle=0");
		textTemplate.push_back("ZoomY=100");
		textTemplate.push_back("ZoomX=100");
		textTemplate.push_back("Height=");
		textTemplate.push_back("Width=");
		textTemplate.push_back("PositionY=");
		textTemplate.push_back("PositionX=");
		textTemplate.push_back("Name=Text");
		textTemplate.push_back("Content=");
		textTemplate.push_back("Type=131073");

		MSGInfoTemplate.push_back("[MSGInfo]");
		MSGInfoTemplate.push_back("ObjectsCnt=");
		MSGInfoTemplate.push_back("MsgDots5=0");
		MSGInfoTemplate.push_back("MsgDots4=0");
		MSGInfoTemplate.push_back("MsgDots3=0");
		MSGInfoTemplate.push_back("MsgDots2=0");
		MSGInfoTemplate.push_back("MsgDots1=0");
		MSGInfoTemplate.push_back("MsgDots0=");
		MSGInfoTemplate.push_back("Delay5=30000");
		MSGInfoTemplate.push_back("Delay4=30000");
		MSGInfoTemplate.push_back("Delay3=30000");
		MSGInfoTemplate.push_back("Delay2=30000");
		MSGInfoTemplate.push_back("Delay1=30000");
		MSGInfoTemplate.push_back("Delay0=30000");
		MSGInfoTemplate.push_back("Name=");
		MSGInfoTemplate.push_back("Version=1");
	}

	Template::~Template()
	{
	}
}
