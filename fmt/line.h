/*  */

#ifndef LINE_H
#define LINE_H

/****
 * clear_line: Clears the current line.
 * */
 
void clear_line(void);

void add_word(const char *word);

int space_remaining(void);

void write_line(void);

void flush_line(void);

#endif


