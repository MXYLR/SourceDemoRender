#pragma once
#include "SDR Extension\Extension.hpp"
#include <d3d11.h>

namespace SDR::ExtensionManager
{
	void LoadExtensions();
	bool HasExtensions();

	namespace Events
	{
		/*
			
		*/
		bool CallHandlers(const char* name, const rapidjson::Value& value);

		/*
			
		*/
		void Ready();

		/*
			
		*/
		void StartMovie(ID3D11Device* device, int width, int height, int fps);

		/*
			
		*/
		void EndMovie();

		/*
			
		*/
		void ModifyFrame(SDR::Extension::ModifyFrameData& data);
	}
}
