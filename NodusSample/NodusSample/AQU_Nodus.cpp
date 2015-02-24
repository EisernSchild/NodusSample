/**
Nodus Sample - 
Sample Plugin Node for
Aquilinus : 3D Modification Studio
Copyright © 2014 Denis Reischl

File <AQU_Nodus.cpp>,
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

#include"AQU_Nodus.h"

/**
* Constructor.
***/
AQU_Nodus::AQU_Nodus()
{
}

/**
* Destructor.
***/
AQU_Nodus::~AQU_Nodus()
{
}

/**
* Return the name of your node.
* This name will be used in the Aquilinus working area.
***/
const char* AQU_Nodus::GetNodeType() 
{
	// EXAMPLE : For simplicity you can return the typeid().name of your class.
	return typeid(AQU_Nodus).name(); 
}

/**
* Returns a global unique identifier for your node.
* Contact the Aquilinus devs to retrieve a unique developers identifier 
* to be used as heigh param of your node identifier.
***/
UINT AQU_Nodus::GetNodeTypeId()
{
	// EXAMPLE : 
	// #define DEVELOPER_IDENTIFIER 345
	// #define MY_PLUGIN_IDENTIFIER 678
	// return ((DEVELOPER_IDENTIFIER << 16) + MY_PLUGIN_IDENTIFIER);
	return NULL; 
}

/**
* Returns the name of the category this node should be listed in 
* the Aquilinus working area.
* Use an existing common known category name or create your own.
* Note to NOT use any Direct3D interface name, >Vertex Shaders<, 
* >Pixel Shaders< or >Elementary< as category name.
***/
LPWSTR AQU_Nodus::GetCategory()
{
	// EXAMPLE :
	// return L"Matrix Modifications";
	return L""; 
}

/**
* Returns a logo to be used instead of the text name returned by
* GetNodeType().
***/
HBITMAP AQU_Nodus::GetLogo() 
{ 
	// EXAMPLE : (define IMG_LOGO01 as resource in your plugin project)
	// HBITMAP hBitmap = LoadBitmap(L"NodusSample.dll", MAKEINTRESOURCE(IMG_LOGO01));
	// return hBitmap;
	return nullptr; 
}

/**
* Returns a control image to be drawn on the node.
* Use the nodes WindowEvent() method to process events on that node control.
**/
HBITMAP AQU_Nodus::GetControl()
{ 
	// INFO : watch GetNodeType() example
	return nullptr; 
}

/**
* Returns the desired width of the node, in pixel space.
* To be updated by Aquilinus if the logo bitmaps width is heigher.
***/
DWORD AQU_Nodus::GetNodeWidth() 
{ 
	return 100; 
}

/**
* Returns the desired height of the node, in pixel space.
* To be updated by Aquilinus if all controls heights are heigher.
***/
DWORD AQU_Nodus::GetNodeHeight()
{ 
	return 100; 
}

/**
* Returns the type of Provoking/Invoking for that node.
* Both = 0            < Node has both : Provoker and Invoker 
* OnlyProvoker = 1    < Node has only Provoker, no Invoker
* OnlyInvoker = 2     < Node has no Provoker, only Invoker
* None = 3            < Node has no Provoker and no Invoker 
***/
int AQU_Nodus::GetProvokingType() 
{ 
	// EXAMPLE : Node has both, provoker and invoker.
	return 0; 
}

/**
* True if this node replaces the Direct3D interface method call,
* false if not.
***/
bool AQU_Nodus::GetMethodReplacement() 
{ 
	return false; 
}

/**
* Returns the size, in bytes, of the nodes data block when saved.
***/
DWORD AQU_Nodus::GetSaveDataSize()
{ 
	return 0; 
}

/**
* Returns a pointer to the save data block.
***/
char* AQU_Nodus::GetSaveData(UINT* pdwSizeOfData)
{
	return nullptr;
}

/**
* Inits the node data block when loaded.
***/
void AQU_Nodus::InitNodeData(char* pData, UINT dwSizeOfData)
{
	(pData);
	(dwSizeOfData);
}

/**
* Returns the number of commanders on that node.
***/
DWORD AQU_Nodus::GetCommandersNumber() 
{ 
	return 0; 
}

/**
* Returns the number of decommanders on that node.
***/
DWORD AQU_Nodus::GetDecommandersNumber() 
{ 
	return 0; 
}

/**
* Returns the name of the commander by index.
* To be used and displayed on the node.
***/
LPWSTR AQU_Nodus::GetCommanderName(DWORD dwCommanderIndex) 
{ 
	// EXAMPLE : 
	// return L"Color";
	return L""; 
}

/**
* Returns the name of the decommander by index.
* To be used and displayed on the node.
***/
LPWSTR AQU_Nodus::GetDecommanderName(DWORD dwDecommanderIndex) 
{ 
	return L""; 
}

/**
* Returns the type of the commander by index.
* Read the Aquilinus documentation for further info.
***/
DWORD AQU_Nodus::GetCommanderType(DWORD dwCommanderIndex) 
{ 
	return 0; 
}

/**
* Returns the type of the decommander by index.
* Read the Aquilinus documentation for further info.
***/
DWORD AQU_Nodus::GetDecommanderType(DWORD dwDecommanderIndex) 
{ 
	return 0; 
}

/**
* Returns the output pointer of the commander by index.
* That is the pointer to the data type returned by GetCommanderType()
***/
void* AQU_Nodus::GetOutputPointer(DWORD dwCommanderIndex) 
{ 
	// EXAMPLE :
	// static DWORD dwIndex;
	// return (void*)&dwIndex;
	return nullptr; 
}

/**
* Sets the input pointer for the decommander by index.
***/
void AQU_Nodus::SetInputPointer(DWORD dwDecommanderIndex, void* pData) 
{ 
	// EXAMPLE : 
	// DWORD* pdwColor = (DWORD*)pData;
	// DWORD dwColor = *pdwColor;
	UNREFERENCED_PARAMETER(dwDecommanderIndex); 
	UNREFERENCED_PARAMETER(pData); 
}

/**
* True if the node supports the Direct3D interface method refered.
* Read the Aquilinus documentation for all enumerations.
***/
bool AQU_Nodus::SupportsD3DMethod(int nD3DVersion, int nD3DInterface, int nD3DMethod)  
{ 
	// EXAMPLE : This plugin supports only ALL Direct3D Versions between 9.0 and 10.1
	//           (NO support for Direct3D 8 and Direct3D 11 Versions here ! )
	// if ((nD3DVersion >= (int)AQU_DirectXVersion::DirectX_9_0) &&
	// (nD3DVersion <= (int)AQU_DirectXVersion::DirectX_10_1))
	// return true;
	return false; 
}

/**
* Provokes the nodes functionality refering to the callers Direct3D interface method.
* Change nProvokerIndex to choose the connected provoker index to be triggered.
* nProvokerIndex = -2 (default)      < ALL connected invokers will be triggered
* nProvokerIndex = -1                < NO connected invoker will be triggered
* nProvokerIndex >= 0                < ONLY the connected invoker of the referred provoker index will be triggered
* @param dwNumberConnected The number of connected invokers to the nodes provoker. Use this to switch nProvokerIndex.
***/
void* AQU_Nodus::Provoke(void* pThis, int eD3D, int eD3DInterface, int eD3DMethod, DWORD dwNumberConnected, int& nProvokerIndex)	
{
	// EXAMPLE : (if eD3D refers to IDirect3DSwapChain9)
	// LPDIRECT3DSWAPCHAIN9 pSwapChain = (LPDIRECT3DSWAPCHAIN9)pThis;
	UNREFERENCED_PARAMETER(pThis); 
	UNREFERENCED_PARAMETER(eD3D); 
	UNREFERENCED_PARAMETER(eD3DInterface); 
	UNREFERENCED_PARAMETER(eD3DMethod); 
	UNREFERENCED_PARAMETER(dwNumberConnected); 
	UNREFERENCED_PARAMETER(nProvokerIndex); 
	return nullptr; 
}

/**
* Windows event handler for any window event on the nodes client area.
***/
void AQU_Nodus::WindowsEvent(UINT msg, WPARAM wParam, LPARAM lParam) 
{
	// EXAMPLE : 
	// switch(msg)
	// {
	//    case WM_LBUTTONDOWN:
	//    // ...handle left mouse button event
	//	  break;
	// }
}