#include "LoadSave.h"
#include <fstream>
#include <string>
#include <sstream>
#include <iterator>
using namespace std;

LoadSave::LoadSave(SettingsStore& ss):
	ss(ss)
{
	vector<string> inputVector = GetLinesFromFile();
	auto settings = ss.load();

	std::vector<string> itemKeys;
	for (auto & kvp : settings)
	{
		itemKeys.emplace_back(kvp.first);
	}

	int index = 0;
	for (auto el : inputVector)
	{
		istringstream in(el);
		std::vector<int> inputs;
		std::copy(std::istream_iterator<int>(in), istream_iterator<int>(),
			std::back_inserter(inputs));
		settings[itemKeys.at(index)] = inputs;
		index++;
	}
	ss.in(settings);
}
std::vector<std::string> LoadSave::GetLinesFromFile()
{
	string textFilePath = "settings.txt";
	std::vector<std::string> lines;
	ifstream ifs(textFilePath, ios::in);
	for (std::string line; std::getline(ifs, line); /**/)
		lines.push_back(line);
	return lines;
}
void LoadSave::save(SettingsStore& ss)
{
	auto settings = ss.load();
	ofstream fout("settings.txt");
	for (auto el : settings)
	{
		for(auto i : el.second)
		{
			fout << i;
			fout << " ";
		}
		fout << endl;
	}
}