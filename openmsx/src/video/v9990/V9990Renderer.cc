// $Id: V9990Renderer.cc 8352 2008-11-12 18:39:08Z m9710797 $

#include "V9990Renderer.hh"

namespace openmsx {

/** Dummy Default Renderer. Any real renderer should override all
  * methods mentioned here...
  */
V9990Renderer::V9990Renderer()
{
}

V9990Renderer::~V9990Renderer()
{
}

void V9990Renderer::reset(EmuTime::param /*time*/)
{
}

void V9990Renderer::frameEnd(EmuTime::param /*time*/)
{
}

void V9990Renderer::renderUntil(EmuTime::param /*time*/)
{
}

} // namespace openmsx
