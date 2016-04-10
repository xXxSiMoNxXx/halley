#pragma once

namespace Halley
{
	class ResourceLoader;

	class Texture : public Resource
	{
	public:
		virtual void bind(int textureUnit) = 0;

		static std::unique_ptr<Texture> loadResource(ResourceLoader& loader);
		unsigned int getNativeId() const { return privateImpl; }

		Vector2i getSize() const { return size; }

	protected:
		unsigned int privateImpl;
		Vector2i size;
	};
}
