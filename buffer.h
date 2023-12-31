#ifndef _BUFFER_H
#define _BUFFER_H

#define BUFFER_APPEND_DEFAULT (0)
#define BUFFER_APPEND_REALLOC (1)

typedef struct buffer *buffer_ref;

buffer_ref buffer_create(int size_hint, int *error);
void buffer_destroy(buffer_ref buffer);
long int buffer_length(buffer_ref buffer);
int buffer_append_with_options(buffer_ref buffer, void *data, long int length, int options);
int buffer_append(buffer_ref buffer, void *data, long int length);
void *buffer_data(buffer_ref buffer, long int *length);

#endif
