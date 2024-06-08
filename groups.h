#ifndef GROUPS_H
#define GROUPS_H

#define MAX_GROUP_CNT 100
#define MAX_GROUP_SIZE 100

int get_groups();
void print_groups();
int make_group(char *, const int *, int);
group_t *find_group_by_name(char *);
int get_max_group_size();

#endif