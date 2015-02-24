/**
Nodus Sample - Sample Plugin Node for 
Aquilinus : 3D Modification Studio
Copyright © 2014 Denis Reischl

File <AQU_Nodus.h>,
Enumeration <AQU_NodusTypes> and
Class <AQU_Nodus> :
Copyright © 2014 Denis Reischl

The stub class <AQU_Nodus> is the only public class from the Aquilinus 
repository and permitted to be used for open source plugins of any kind. 
Read the Aquilinus documentation for further information.

This file is part of >Nodus Sample<.

>Nodus Sample< is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

>Nodus Sample< is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with >Nodus Sample<.  If not, see <http://www.gnu.org/licenses/>.
***/

#include<Windows.h>
#include<typeinfo>

/**
* DirectX version enumeration.
* Do not change this declaration to ensure proper functionality.
***/
enum AQU_DirectXVersion
{
	DirectX_8_0    = 80,
	DirectX_8_0a   = 81,	
	DirectX_8_1    = 82,
	DirectX_8_1a   = 83,
	DirectX_8_1b   = 84,
	DirectX_8_2    = 85,
	DirectX_9_0    = 90,
	DirectX_9_0a   = 91,
	DirectX_9_0b   = 92,
	DirectX_9_0c   = 93,
	DirectX_9_29   = 94,
	DirectX_10     = 100,
	DirectX_10_1   = 101,
	DirectX_11     = 110,
	DirectX_11_1   = 111,
	DirectX_11_2   = 112,
	DirectX_12     = 120
};

/**
* Aquilinus plugin import node.
* All methods empty.
***/
class AQU_Nodus
{
public:
	AQU_Nodus();
	~AQU_Nodus();

	/*** AQU_Nodus public methods ***/
	virtual const char*     GetNodeType();
	virtual UINT            GetNodeTypeId();
	virtual LPWSTR          GetCategory();
	virtual HBITMAP         GetLogo();
	virtual HBITMAP         GetControl();
	virtual DWORD           GetNodeWidth();
	virtual DWORD           GetNodeHeight();
	virtual int             GetProvokingType();
	virtual bool            GetMethodReplacement();
	virtual DWORD           GetSaveDataSize();
	virtual char*           GetSaveData(UINT* pdwSizeOfData);
	virtual void            InitNodeData(char* pData, UINT dwSizeOfData);
	virtual DWORD           GetCommandersNumber();
	virtual DWORD           GetDecommandersNumber();
	virtual LPWSTR          GetCommanderName(DWORD dwCommanderIndex);
	virtual LPWSTR          GetDecommanderName(DWORD dwDecommanderIndex);
	virtual DWORD           GetCommanderType(DWORD dwCommanderIndex);
	virtual DWORD           GetDecommanderType(DWORD dwDecommanderIndex);
	virtual void*           GetOutputPointer(DWORD dwCommanderIndex);
	virtual void            SetInputPointer(DWORD dwDecommanderIndex, void* pData);
	virtual bool            SupportsD3DMethod(int nD3DVersion, int nD3DInterface, int nD3DMethod);
	virtual void*           Provoke(void* pThis, int eD3D, int eD3DInterface, int eD3DMethod, DWORD dwNumberConnected, int& nProvokerIndex);
	virtual void            WindowsEvent(UINT msg, WPARAM wParam, LPARAM lParam);
};

/**
* Exported Constructor Method.
* Do not change this declaration to ensure proper functionality.
***/
extern "C" __declspec(dllexport) AQU_Nodus* AQU_Nodus_Create()
{
	return new AQU_Nodus();

	// NOTE : If AQU_Nodus is overridden, change this to return a pointer to the derived class :
	//
	//        YOUR_CLASS* pYourClass = (YOUR_CLASS*)new YOUR_CLASS();
	//        return static_cast<AQU_Nodus*>(pYourClass);

}

