/**
 * @file		Include\group_object.h
 *
 * @brief	Declares the group structure.
 */

#pragma once

#include <vector>
#include <renderable_object.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		struct Group
		{
			std::vector<RRenderableObject> renderables;

			Group & addRenderable(RRenderableObject * renderable);
		};
	}
}
