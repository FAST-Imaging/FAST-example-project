#include <FAST/Importers/ImageFileImporter.hpp>
#include <FAST/Visualization/ImageRenderer/ImageRenderer.hpp>
#include <FAST/Visualization/SimpleWindow.hpp>

using namespace fast;

int main(int argc, char** argv) {
    // Output info messages etc.
    Reporter::setGlobalReportMethod(Reporter::COUT);

    // Import FAST logo image
    ImageFileImporter::pointer importer = ImageFileImporter::New();
    importer->setFilename(Config::getDocumentationPath() + "images/FAST_logo_square.png");

    // Set up renderer
    ImageRenderer::pointer renderer = ImageRenderer::New();
    renderer->addInputConnection(importer->getOutputPort());

    // Set up window and start pipeline
    SimpleWindow::pointer window = SimpleWindow::New();
    window->addRenderer(renderer);
    window->set2DMode();
    window->start();
}
