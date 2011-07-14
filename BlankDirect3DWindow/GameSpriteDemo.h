#ifndef _DEMO_H_
#define _DEMO_H_

#include "Dx11DemoBase.h"
#include"GameSprite.h"
#include <vector>

#define NUM_SPRITES 10

class GameSpriteDemo : public Dx11DemoBase
{
	public:
		GameSpriteDemo();
		virtual ~GameSpriteDemo();

		bool LoadContent();
		void UnloadContent();

		void Update( float dt );
		void Render();

	private:
		void norm(XMFLOAT2* vec);
		ID3D11VertexShader* solidColorVS_;
		ID3D11PixelShader* solidColorPS_;

		ID3D11InputLayout* inputLayout_;
		ID3D11Buffer* vertexBuffer_;

		ID3D11ShaderResourceView* colorMap_;
		ID3D11SamplerState* colorMapSampler_;
		ID3D11BlendState* alphaBlendState_;

		std::vector<GameSprite> sprites_;
		ID3D11Buffer* mvpCB_;
		XMMATRIX vpMatrix_;
};

#endif