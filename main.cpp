#include <FAST/Importers/ImageFileImporter.hpp>
#include <FAST/Visualization/ImageRenderer/ImageRenderer.hpp>
#include <FAST/Visualization/SimpleWindow.hpp>

using namespace fast;

int main(int argc, char** argv) {
    // Output info messages etc.
    //Reporter::setGlobalReportMethod(Reporter::COUT);

    // Import FAST logo image
    auto importer = ImageFileImporter::create(Config::getDocumentationPath() + "images/FAST_logo_square.png");

    // Set up renderer
    auto renderer = ImageRenderer::create()
	    ->connect(importer);

    // Set up window and start pipeline
    SimpleWindow2D::create(Color::Black())
	    ->connect(renderer)
	    ->run();
}
