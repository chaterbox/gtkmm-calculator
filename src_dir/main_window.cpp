//
// Created by jacob on 1/29/19.
//
#include <iostream>
#include "main_window.h"
#include <stdlib.h>

Main_window::Main_window()
{
//window
//sets window title
    set_title("Calculator");
//sets window size
    set_default_size(400,400);
    set_resizable(false);
//sets window position on launch
    set_position(Gtk::WIN_POS_CENTER);
//textbox
//sets textbox size
    textbox.set_size_request(400,50);
//button
//creates button labels
    one_button.add_label("1");
    one_button.set_size_request(BUTTON_WIDTH,BUTTON_HEIGHT);
    two_button.add_label("2");
    two_button.set_size_request(BUTTON_WIDTH,BUTTON_HEIGHT);
    three_button.add_label("3");
    three_button.set_size_request(BUTTON_WIDTH,BUTTON_HEIGHT);
    four_button.add_label("4");
    four_button.set_size_request(BUTTON_WIDTH,BUTTON_HEIGHT);
    five_button.add_label("5");
    five_button.set_size_request(BUTTON_WIDTH,BUTTON_HEIGHT);
    six_button.add_label("6");
    six_button.set_size_request(BUTTON_WIDTH,BUTTON_HEIGHT);
    seven_button.add_label("7");
    seven_button.set_size_request(BUTTON_WIDTH,BUTTON_HEIGHT);
    eight_button.add_label("8");
    eight_button.set_size_request(BUTTON_WIDTH,BUTTON_HEIGHT);
    nine_button.add_label("9");
    nine_button.set_size_request(BUTTON_WIDTH,BUTTON_HEIGHT);
    zero_button.add_label("0");
    zero_button.set_size_request(BUTTON_WIDTH,BUTTON_HEIGHT);
    plus_button.add_label("+");
    plus_button.set_size_request(BUTTON_WIDTH,BUTTON_HEIGHT);
    minus_button.add_label("-");
    minus_button.set_size_request(BUTTON_WIDTH,BUTTON_HEIGHT);
    multiply_button.add_label("*");
    multiply_button.set_size_request(BUTTON_WIDTH,BUTTON_HEIGHT);
    devide_button.add_label("/");
    devide_button.set_size_request(BUTTON_WIDTH,BUTTON_HEIGHT);
    clear_button.add_label("C");
    clear_button.set_size_request(BUTTON_WIDTH,BUTTON_HEIGHT);
    equal_buttton.add_label("=");
    equal_buttton.set_size_request(BUTTON_WIDTH,BUTTON_HEIGHT);
//click event
    one_button.signal_clicked().connect(sigc::mem_fun(*this,&Main_window::on_one_button_click));
    two_button.signal_clicked().connect(sigc::mem_fun(*this,&Main_window::on_two_button_click));
    three_button.signal_clicked().connect(sigc::mem_fun(*this,&Main_window::on_three_button_click));
    four_button.signal_clicked().connect(sigc::mem_fun(*this,&Main_window::on_four_button_click));
    five_button.signal_clicked().connect(sigc::mem_fun(*this,&Main_window::on_five_button_click));
    six_button.signal_clicked().connect(sigc::mem_fun(*this,&Main_window::on_six_button_click));
    seven_button.signal_clicked().connect(sigc::mem_fun(*this,&Main_window::on_seven_button_click));
    eight_button.signal_clicked().connect(sigc::mem_fun(*this,&Main_window::on_eight_button_click));
    nine_button.signal_clicked().connect(sigc::mem_fun(*this,&Main_window::on_nine_button_click));
    zero_button.signal_clicked().connect(sigc::mem_fun(*this,&Main_window::on_zero_button_click));
    plus_button.signal_clicked().connect(sigc::mem_fun(*this,&Main_window::on_plus_button_click));
    minus_button.signal_clicked().connect(sigc::mem_fun(*this,&Main_window::on_minus_button_click));
    multiply_button.signal_clicked().connect(sigc::mem_fun(*this,&Main_window::on_multiply_button_click));
    devide_button.signal_clicked().connect(sigc::mem_fun(*this,&Main_window::on_devide_button_click));
    clear_button.signal_clicked().connect(sigc::mem_fun(*this,&Main_window::on_clear_button_click));
    equal_buttton.signal_clicked().connect(sigc::mem_fun(*this,&Main_window::on_equal_button_click));
//attaches the buttons to the grid
    grid.add(one_button);
    grid.add(two_button);
    grid.add(three_button);
    grid.attach_next_to(four_button,one_button,Gtk::POS_BOTTOM,1,1);
    grid.attach_next_to(five_button,four_button,Gtk::POS_RIGHT,1,1);
    grid.attach_next_to(six_button,five_button,Gtk::POS_RIGHT,1,1);
    grid.attach_next_to(seven_button,four_button,Gtk::POS_BOTTOM,1,1);
    grid.attach_next_to(eight_button,seven_button,Gtk::POS_RIGHT,1,1);
    grid.attach_next_to(nine_button,eight_button,Gtk::POS_RIGHT,1,1);
    grid.attach_next_to(clear_button,seven_button,Gtk::POS_BOTTOM,1,1);
    grid.attach_next_to(zero_button,eight_button,Gtk::POS_BOTTOM,1,1);
    grid.attach_next_to(equal_buttton,zero_button,Gtk::POS_RIGHT,1,1);
    grid.attach_next_to(plus_button,three_button,Gtk::POS_RIGHT);
    grid.attach_next_to(minus_button,plus_button,Gtk::POS_BOTTOM,1,1);
    grid.attach_next_to(multiply_button,minus_button,Gtk::POS_BOTTOM,1,1);
    grid.attach_next_to(devide_button,multiply_button,Gtk::POS_BOTTOM,1,1);
    grid.attach_next_to(textbox,one_button,Gtk::POS_TOP,400,100);

    add(grid);
//adds all items to widow
    show_all_children();
}

Main_window::~Main_window()
{
}
void Main_window::on_one_button_click()
{
    x += "1";
    textbox.set_text(x);
}

void Main_window::on_two_button_click()
{
    x += "2";
    textbox.set_text(x);
}

void Main_window::on_three_button_click() {
    x += "3";
    textbox.set_text(x);
}

void Main_window::on_four_button_click() {
    x += "4";
    textbox.set_text(x);
}

void Main_window::on_five_button_click() {
    x += "5";
    textbox.set_text(x);
}

void Main_window::on_six_button_click() {
    x += "6";
    textbox.set_text(x);
}

void Main_window::on_seven_button_click() {
    x += "7";
    textbox.set_text(x);
}

void Main_window::on_eight_button_click() {
    x += "8";
    textbox.set_text(x);
}

void Main_window::on_nine_button_click() {
    x += "9";
    textbox.set_text(x);
}

void Main_window::on_zero_button_click() {
    x += "0";
    textbox.set_text(x);
}

void Main_window::on_plus_button_click() {
    op = '+';
    opc = '+';
    textbox.set_text(op);
    y = x;
    x = "";
}

void Main_window::on_minus_button_click() {
    op = '-';
    opc = '-';
    textbox.set_text(op);
    y = x;
    x = "";
}

void Main_window::on_multiply_button_click() {
    op = '*';
    opc = '*';
    textbox.set_text(op);
    y = x;
    x = "";
}

void Main_window::on_devide_button_click() {
    op = '/';
    opc = '/';
    textbox.set_text(op);
    y = x;
    x = "";
}

void Main_window::on_clear_button_click() {
    x = "",y = "";
    op = ' ';
    textbox.set_text("");
}

void Main_window::on_equal_button_click() {
    switch(opc)
    {
        case '+':
            strx = strtof(x.c_str(),NULL);
            stry = std::strtof(y.c_str(),NULL);
            z = stry + strx;
            textbox.set_text(std::to_string(z));
        break;
        case '-':
            strx = strtof(x.c_str(),NULL);
            stry = std::strtof(y.c_str(),NULL);
            z =  stry - strx;
            textbox.set_text(std::to_string(z));
        break;
        case '*':
            strx = strtof(x.c_str(),NULL);
            stry = std::strtof(y.c_str(),NULL);
            z =  stry * strx;
            textbox.set_text(std::to_string(z));
        break;
        case '/':
            strx = strtof(x.c_str(),NULL);
            stry = std::strtof(y.c_str(),NULL);
            z =  stry / strx;
            textbox.set_text(std::to_string(z));
            break;
        default:textbox.set_text("ERROR");
        break;
    }
}


