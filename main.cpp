#include <FAST/SimpleWindow.hpp>

using namespace fast;

int main(int argc, char** argv) {
    SimpleWindow::pointer window = SimpleWindow::New();
    window->start();
}
