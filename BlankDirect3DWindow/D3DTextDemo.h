#ifndef _TEXTURE_DEMO_H_
#define _TEXTURE_DEMO_H_

#include "Dx11DemoBase.h"

class D3DTextDemo : public Dx11DemoBase
{
	public:
		D3DTextDemo();
		virtual ~D3DTextDemo();

		bool LoadContent();
		void UnloadContent();

		void Update( float dt );
		void Render();

	private:
		ID3D11VertexShader* solidColorVS_;
		ID3D11PixelShader* solidColorPS_;

		ID3D11InputLayout* inputLayout_;
		ID3D11Buffer* vertexBuffer_;

		ID3D11ShaderResourceView* colorMap_;
		ID3D11SamplerState* colorMapSampler_;
};

#endif