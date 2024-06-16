#ifndef TYPING_H
#include "typing.h"
#endif

#ifndef EFFECTS_H
#define EFFECTS_H

void effect_init();
char *intro();
char *student_menu(account_t *);
char *teacher_menu(account_t *);
char *admin_menu(account_t *); 

#endif