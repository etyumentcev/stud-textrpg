#include "RequestHundler.h"

RequestHundler::RequestHundler()
{
	commands[0] = new Command_esc;
}

void RequestHundler::HandleRequest(int action)
{
	ICommand* command = commands[action];
	return  command->execute(); // todo ����������
	RequestHundler* handler = new RequestHundler();
	handler->HandleRequest(2);
}
