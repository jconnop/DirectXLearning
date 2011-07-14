#ifndef _GAMESPRITE_H_
#define _GAMESPRITE_H_

#include<xnamath.h>

class GameSprite
{
	public:
		GameSprite();
		virtual ~GameSprite();

		XMMATRIX GetWorldMatrix();

		void SetPosition( XMFLOAT2& position );
		void SetRotation( float rotation );
		void SetScale( XMFLOAT2& scale );
		void SetDirection( XMFLOAT2& direction );
		void SetSize( XMFLOAT2& size );
		XMFLOAT2 GetDirection(){ return direction_; }
		XMFLOAT2 GetPosition(){ return position_; }
		XMFLOAT2 GetSize(){ return size_; }

	private:
		XMFLOAT2 position_;
		XMFLOAT2 size_;
		XMFLOAT2 direction_;
		float rotation_;
		XMFLOAT2 scale_;
};

#endif