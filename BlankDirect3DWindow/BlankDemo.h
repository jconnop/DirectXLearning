#ifndef _BLACK_DEMO_H_
#define _BLANK_DEMO_H_

#include "Dx11DemoBase.h";

class BlankDemo : public Dx11DemoBase
{
	public:
		BlankDemo();
		virtual ~BlankDemo();

		bool LoadContent();
		void UnloadContent();

		void Update( float dt );
		void Render();
};

#endif