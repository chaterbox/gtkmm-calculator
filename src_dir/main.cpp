#include "main_window.h"
#include <gtkmm/application.h>

int main(int argc,char* argv[]) {


    auto app = Gtk::Application::create(argc, argv,"org.gtkmm.examples.base");

    Main_window window;

    return app->run(window);
}
