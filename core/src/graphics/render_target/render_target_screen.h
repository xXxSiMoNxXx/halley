/*****************************************************************\
           __
          / /
		 / /                     __  __
		/ /______    _______    / / / / ________   __       __
	   / ______  \  /_____  \  / / / / / _____  | / /      / /
	  / /      | / _______| / / / / / / /____/ / / /      / /
	 / /      / / / _____  / / / / / / _______/ / /      / /
	/ /      / / / /____/ / / / / / / |______  / |______/ /
   /_/      /_/ |________/ / / / /  \_______/  \_______  /
                          /_/ /_/                     / /
			                                         / /
		       High Level Game Framework            /_/

  ---------------------------------------------------------------

  Copyright (c) 2007-2011 - Rodrigo Braz Monteiro.
  This file is subject to the terms of halley_license.txt.

\*****************************************************************/

#pragma once

#include "render_target.h"

namespace Halley {
	class ScreenRenderTarget : public RenderTarget {
	public:
		ScreenRenderTarget(Vector2f size, Rect4f viewPort);

		Vector2f getSize() const override { return size; }
		Rect4f getViewPort() const override { return viewPort; }

	protected:
		void bind() override;
		void unbind() override;

		Vector2f size;
		Rect4f viewPort;
	};
}
