#pragma once
#include "StdInclude.hpp"
#include "Utilities/Signatures.hpp"

namespace IWXMVM::IW3::Signatures
{
	struct IW3Addresses
	{
#define Sig IWXMVM::Signatures::Signature<IWXMVM::Signatures::SignatureImpl
			
		using GAType = IWXMVM::Signatures::GameAddressType;

		Sig("51 8D 90 ?? ?? ?? ?? 52 50 E8 ?? ?? ?? ?? 68 ?? ?? ?? ?? 57",									GAType::Code, 20, IWXMVM::Signatures::Lambdas::FollowCodeFlow)> fopen;
		Sig("53 8D 4C 24 ?? E8 ?? ?? ?? ?? 8D 54 24 ?? 8D 74 24 ?? 8B D8",									GAType::Code, 20, IWXMVM::Signatures::Lambdas::FollowCodeFlow)> AnglesToAxis;
		Sig("8B F0 8B F9 FF 15 ?? ?? ?? ?? 8A 06",															GAType::Code, -8)> Cbuf_AddText;
		Sig("8B F8 83 C7 ?? 8B 8E ?? ?? ?? ?? 3B 0D ?? ?? ?? ?? 75 ?? 83 3D ?? ?? ?? ?? 00",				GAType::Code, 26)> CG_AddPlayerSpriteDrawSurfs; // killcam 'you' marker
		Sig("E8 ?? ?? ?? ?? 83 3D ?? ?? ?? ?? 00 74 ?? 68 ?? ?? ?? ?? E8",									GAType::Code, -5)> CG_CalcViewValues; // first call to AnglesToAxis we need to replace
		Sig("5C 24 ?? 55 8B 6C 24 ?? 56 8D 44 24 ?? 50 51 8B CB C6 44 24",									GAType::Code, -5)> CG_DObjGetWorldTagMatrix;
		Sig("00 53 56 57 8B F0 0F 85 ?? ?? ?? ?? 8D 44 24",													GAType::Code, -9)> CG_DrawDisconnect;
		Sig("6B FF ?? 81 C7 ?? ?? ?? ?? ?? ?? ?? ?? ?? 8D 74 24 ?? F3 A5 83 05 ?? ?? ?? ?? 01",				GAType::Code, 9)> CG_DrawTracer;
		Sig("8D 74 24 ?? D9 5C 24 ?? ?? ?? ?? ?? ?? 5F 5E 5B 8B E5 5D C3",									GAType::Code, 8)> CG_OffsetThirdPersonView; // second call to AnglesToAxis we need to replace
		Sig("53 55 56 8B F0 05 ?? ?? ?? ?? 8B C8 57 8B",													GAType::Code, -8)> CL_SystemInfoChanged;
		Sig("81 EC ?? ?? 00 00 A1 ?? ?? ?? ?? 53 33 DB 39",													GAType::Code, -6)> CL_Vid_Restart_f;
		Sig("85 C0 74 ?? 8B FE E8 ?? ?? ?? ?? 8B 0D ?? ?? ?? ?? D9 41 ?? D8 4C 24 0C D9 5E 0C 5F 5E C3",	GAType::Code, -5, IWXMVM::Signatures::Lambdas::FollowCodeFlow)> Dvar_FindMalleable;
		Sig("83 EC ?? D9 46 ?? D9 1D ?? ?? ?? ?? D9 46 ?? D9 1D",											GAType::Code, -6)> FX_SetupCamera;
		Sig("8B F8 6A 00 57 E8 ?? ?? ?? ?? D9 46 ?? D9 9F",													GAType::Code, -7)> R_SetViewParmsForScene;
		Sig("8B C6 59 C3 56 E8 ?? ?? ?? ?? 83 C4 04 ?? ?? ?? ?? ?? CC",										GAType::Code, 13)> SV_Frame;
		Sig("BA ?? ?? ?? ?? E8 ?? ?? ?? ?? 80 3D",															GAType::Data, 1, IWXMVM::Signatures::Lambdas::DereferenceAddress)> clientConnection;
		Sig("68 ?? ?? ?? ?? E8 ?? ?? ?? ?? 83 C4 0C 68 ?? ?? ?? ?? C1 E6 04",								GAType::Data, 1, IWXMVM::Signatures::Lambdas::DereferenceAddress)> clientStatic;
		Sig("05 ?? ?? ?? ?? B9 01 00 00 00 01 88 B8 56 02 00", 												GAType::Data, 1, IWXMVM::Signatures::Lambdas::DereferenceAddress)> clientActive;
		Sig("68 ?? ?? ?? ?? E8 ?? ?? ?? ?? 83 C4 0C 68 F0 E7 0F 00",										GAType::Data, 1, IWXMVM::Signatures::Lambdas::DereferenceAddress) > clientGlobalsStatic;
		Sig("BA ?? ?? ?? ?? E8 ?? ?? ?? ?? D9 03", 															GAType::Data, 1, IWXMVM::Signatures::Lambdas::DereferenceAddress)> clientGlobals;
		Sig("89 1D ?? ?? ?? ?? 5E 5F", 																		GAType::Data, 2, IWXMVM::Signatures::Lambdas::DereferenceAddress)> mouseVars;
		
		// cod4x
		using MType = Types::ModuleType;
		Sig("00 00 E8 ?? ?? ?? ?? 29 C4 C7 04 24 01 00 00 00 E8",											GAType::Code, -7), MType::SecondaryModules> CL_SystemInfoChangedCoD4X;

#undef Sig
	};
}