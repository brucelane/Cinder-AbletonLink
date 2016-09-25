/*

Ableton Link 

*/

#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"
#include "cinder/gl/Batch.h"
#include "cinder/gl/GlslProg.h"
#include "cinder/ImageIo.h"
#include "cinder/gl/Texture.h"
#include <vector>

using namespace ci;
using namespace ci::app;
using namespace std;

class _TBOX_PREFIX_App : public App {
public:
 	void setup();
	void update();
	void draw();
    void mouseDown(MouseEvent event);
    void shutdown();

private:
 
};

void _TBOX_PREFIX_App::setup()
{
 

}

void _TBOX_PREFIX_App::update()
{
   
}

void _TBOX_PREFIX_App::draw()
{
   
}
void _TBOX_PREFIX_App::mouseDown(MouseEvent event)
{
    
}

void _TBOX_PREFIX_App::shutdown()
{
    
}

CINDER_APP( _TBOX_PREFIX_App, RendererGl )
