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
* @param pVoid Cast pVoid to the desired data type for this node.
***/
/*AQU_Nodus::AQU_Nodus(void* pVoid)
{
	// NOTE : For blank nodes like this, pVoid can be ignored, 
	//        otherwise cast to desired type.
}*/

/**
* Destructor.
***/
/*AQU_Nodus::~AQU_Nodus()
{
}*/

/**
* Get the Node Type name.
* @returns The type name of this Node, for simplicity you can return typeid(this).name() 
* or you select another name than the class name.
***/
/*const char* AQU_Nodus::GetNodeType()
{
	return typeid(this).name();
}*/

/**
* Callback function for DirectX Version support called by the driver.
* @param nD3DVersion The currently selected D3D Version in the driver, 
* read the definitions in the Aquilinus documentation.
* @returns True if this plugin supports the desired DirectX Version.
***/
/*bool AQU_Nodus::SupportsD3DMethod(int nD3DVersion, int nD3DInterface, int nD3DMethod)
{
	// EXAMPLE : This plugin supports only ALL DirectX Versions between 9.0 and 10.1
	//           (NO support for DirectX 8 and DirectX 11 Versions here ! )
	if ((nD3DVersion >= (int)AQU_DirectXVersion::DirectX_9_0) &&
		(nD3DVersion <= (int)AQU_DirectXVersion::DirectX_10_1))
		return true;

	return false;

	// NOTE : Pure modification nodes do not use the DirectX device, in these cases
	//        you can always return >true<.
}*/
