/*
-----------------------------------------------------------------------
Copyright: 2010-2015, iMinds-Vision Lab, University of Antwerp
           2014-2015, CWI, Amsterdam

Contact: astra@uantwerpen.be
Website: http://sf.net/projects/astra-toolbox

This file is part of the ASTRA Toolbox.


The ASTRA Toolbox is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

The ASTRA Toolbox is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with the ASTRA Toolbox. If not, see <http://www.gnu.org/licenses/>.

-----------------------------------------------------------------------
$Id$
*/

#ifndef _INC_ASTRA_ASTRAOBJECTFACTORY
#define _INC_ASTRA_ASTRAOBJECTFACTORY

#include "Globals.h"
#include "Config.h"
#include "Singleton.h"
#include "Utilities.h"
#include "TypeList.h"

#include "ProjectorTypelist.h"


#include "AlgorithmTypelist.h"


namespace astra {

/**
 * This class contains functionality to create data objects based on their type or on a configuration object.
 */
template <typename T, typename TypeList>
class CAstraObjectFactory : public Singleton<CAstraObjectFactory<T, TypeList> > {

public:

	/** A default constructor that contains not a single line of code.
	 */
	CAstraObjectFactory();

	/** Destructor.  
	 */
	~CAstraObjectFactory();

	/** Create, but don't initialize, a new projector object.
	 *
	 * @param _sType Type of the new projector.
	 * @return Pointer to a new, unitialized projector.
	 */
	T* create(std::string _sType);

	/** Create and initialize a new projector object.
	 *
	 * @param _cfg Configuration object to create and initialize a new projector.
	 * @return Pointer to a new, initialized projector.
	 */
	T* create(const Config& _cfg);


};


//----------------------------------------------------------------------------------------
// Constructor
template <typename T, typename TypeList>
CAstraObjectFactory<T, TypeList>::CAstraObjectFactory()
{

}

//----------------------------------------------------------------------------------------
// Destructor
template <typename T, typename TypeList>
CAstraObjectFactory<T, TypeList>::~CAstraObjectFactory()
{

}

//----------------------------------------------------------------------------------------
// Create 
template <typename T, typename TypeList>
T* CAstraObjectFactory<T, TypeList>::create(std::string _sType) 
{
	functor_find<T> finder = functor_find<T>();
	finder.tofind = _sType;
	CreateObject<TypeList>::find(finder);
	return finder.res;
}

//----------------------------------------------------------------------------------------
// Create with XML
template <typename T, typename TypeList>
T* CAstraObjectFactory<T, TypeList>::create(const Config& _cfg)
{
	T* object = create(_cfg.self.getAttribute("type"));
	if (object == NULL) return NULL;
	if (object->initialize(_cfg))
		return object;
	delete object;
	return NULL;
}
//----------------------------------------------------------------------------------------




//----------------------------------------------------------------------------------------
// Create the necessary Object Managers
/**
 * Class used to create algorithms from a string or a config object
*/
class _AstraExport CAlgorithmFactory : public CAstraObjectFactory<CAlgorithm, AlgorithmTypeList> {};

/**
 * Class used to create 2D projectors from a string or a config object
*/
class _AstraExport CProjector2DFactory : public CAstraObjectFactory<CProjector2D, Projector2DTypeList> {};

/**
 * Class used to create 3D projectors from a string or a config object
*/
class _AstraExport CProjector3DFactory : public CAstraObjectFactory<CProjector3D, Projector3DTypeList> {};




} // end namespace

#endif
