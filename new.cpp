#include "template.h"

namespace TemplateLibrary {
	Template fileTemplate;

	void Template::createTemplate(templateConfig config, MSGfileConfig msgConf) {
		msgConf.fileName = "test";
		std::ofstream file(msgConf.fileName + ".msg");

		for (int i = 0; i < fileTemplate.textTemplate.size(); i++)
		{
			switch (i)
			{
			case 6:
				fileTemplate.textTemplate[i] += config.fontItalic;
				break;
			case 7:
				fileTemplate.textTemplate[i] += config.fontUnderline;
				break;
			case 8:
				fileTemplate.textTemplate[i] += config.fontBold;
				break;
			case 10:
				fileTemplate.textTemplate[i] += config.fontSize;
				break;
			case 15:
				fileTemplate.textTemplate[i] += config.height;
				break;
			case 16:
				fileTemplate.textTemplate[i] += config.width;
				break;
			case 17:
				fileTemplate.textTemplate[i] += config.positionY;
				break;
			case 18:
				fileTemplate.textTemplate[i] += config.positionX;
				break;
			case 20:
				fileTemplate.textTemplate[i] += config.content;
			}

			const char *write = fileTemplate.textTemplate[i].c_str();
			file << write << endl;
		}

		for (int i = 0; i < fileTemplate.MSGInfoTemplate.size(); i++)
		{
			switch (i)
			{
			case 1:
				fileTemplate.MSGInfoTemplate[i] += msgConf.ObjectsCnt;
				break;
			case 7:
				fileTemplate.MSGInfoTemplate[i] += msgConf.MsgDots;
				break;
			case 14:
				fileTemplate.MSGInfoTemplate[i] += msgConf.fileName;
			}

			const char *write = MSGInfoTemplate[i].c_str();
			file << write << endl;
		}

		file.close();
	}
}