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
#include "Link.hpp"

using namespace ci;
using namespace ci::app;
using namespace std;

class AbletonLinkApp : public App {
public:
 	void setup();
	void update();
	void draw();
    void mouseDown(MouseEvent event);
    void shutdown();

private:
 
};

void AbletonLinkApp::setup()
{
 

}

void AbletonLinkApp::update()
{
   
}

void AbletonLinkApp::draw()
{
   
}
void AbletonLinkApp::mouseDown(MouseEvent event)
{
    
}

void AbletonLinkApp::shutdown()
{
    
}

CINDER_APP( AbletonLinkApp, RendererGl )
