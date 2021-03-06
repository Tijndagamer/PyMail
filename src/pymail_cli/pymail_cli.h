// Made by Tijndagamer
// Released under the MIT license

#ifndef PYMAIL_CLI_H
#define PYMAIL_CLI_H

int main(int argc, char *argv[]);
void terminate(char *errormsg);

void print_choice_menu(WINDOW *choice_menu, int highlight);
int get_choice(int startx, int starty);

void print_send_menu(WINDOW *send_menu);
void send(int startx, int starty);

char* read_tmp_email_file();
void show_email(WINDOW *email_window, char *email);
void print_recv_choice_menu(WINDOW *recv_choice_menu, int highlight);
int recv_get_choice(int starty, int startx);
void recv_list_view(WINDOW *recv_menu);
void recv_latest(WINDOW *recv_menu);
void recv_nth(WINDOW *recv_menu, int starty, int startx);
void recv(int startx, int starty);

void print_help();

//void print_config_menu(WINDOW *conf_menu);
//void config(int startx, int starty)

#endif // PYMAIL_CLI_H