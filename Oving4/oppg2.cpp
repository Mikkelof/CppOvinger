#include <gtkmm.h>

class Window : public Gtk::Window {
public:
  Gtk::VBox vbox;
  Gtk::Entry firstnameEntry;
  Gtk::Entry lastnameEntry;
  Gtk::Button button;
  Gtk::Label firstnameLabel;
  Gtk::Label lastnameLabel;
  Gtk::Label fullnameLabel;

  Window() {
    Gtk::Window::set_title("Oving 4");
    button.set_label("Combine names");

    vbox.pack_start(firstnameLabel);
    vbox.pack_start(firstnameEntry);
    vbox.pack_start(lastnameLabel);
    vbox.pack_start(lastnameEntry);
    vbox.pack_start(button);
    vbox.pack_start(fullnameLabel);

    add(vbox);
    show_all();

    firstnameLabel.set_text("First name");
    lastnameLabel.set_text("Last name");

    auto entry_update = [this]() {
      button.set_sensitive(!firstnameEntry.get_text().empty() && !lastnameEntry.get_text().empty());
    };

    firstnameEntry.signal_changed().connect(entry_update);
    lastnameEntry.signal_changed().connect(entry_update);

    button.signal_clicked().connect([this]() {
      fullnameLabel.set_text(firstnameEntry.get_text() + " " + lastnameEntry.get_text());
    });
  }
};

int main() {
  Gtk::Main gtk_main;
  Window window;
  gtk_main.run(window);
}
