#include "LoadSave.h"
#include <fstream>

LoadSave::LoadSave(SettingsStore& ss):
	ss(ss)
{
	
}
void LoadSave::save(SettingsStore& ss)
{
	auto settings = ss.load();
	std::ofstream fout("settings.txt");
	for (std::map<std::string, std::vector<int>*> el : settings)
	{
		for(std::vector<int>* el : el)
		{
			fout << el;
			fout << " ";
		}
		fout << " ";
	}
}