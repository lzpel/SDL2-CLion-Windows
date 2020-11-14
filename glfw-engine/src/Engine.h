/// @file Engine.h
/// Created by misum on 2020/11/15.
/// 外部ライブラリをincludeせず隠蔽する予定。
///

#ifndef GLPRACTICE_ENGINE_H
#define GLPRACTICE_ENGINE_H

#include "Node.h"

class Engine : virtual public Node{
	void* Window;
public:
	const char* WindowTitle;
	///@fn
	///初期設定
	Engine(int w=640,int h=480,const char*title="engine");
	//Engine始動。終了するまでブロック
	void Run();
	//Nodeから継承。Runから呼ぶ；
	virtual void Init();
	virtual void Draw();
	virtual void Terminate();
};
enum LOGLEVEL{LOGINFO,LOGERROR};
char Log(const char*message,LOGLEVEL level=LOGLEVEL::LOGINFO);

#endif //GLPRACTICE_ENGINE_H