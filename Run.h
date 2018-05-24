#ifndef Run_H
#define Run_H
#include "Main.h"
#include "View.h"
#include "SettingsStore.h"
#include "View.h"
#include "MapGameField.h"
class Run
{
	public:
	MapGameField& CreateMap();

	void run();
};
#endif Run_H