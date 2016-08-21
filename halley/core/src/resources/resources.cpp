#include "resources/resources.h"
#include "resources/resource_locator.h"

using namespace Halley;

Resources::Resources(std::unique_ptr<ResourceLocator> locator, HalleyAPI* api)
	: locator(std::move(locator))
	, api(api)
	, basePath("assets_src/")
{}

Resources::~Resources() = default;

void Resources::setBasePath(String path)
{
	basePath = path;
}

String Resources::getBasePath() const 
{
	return basePath;
}

void Resources::setDepth(int depth) 
{
	curDepth = depth;
}

time_t Resources::getFileWriteTime(String name) const
{
	return locator->getTimestamp(name);
}