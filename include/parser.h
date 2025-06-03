#ifndef PARSER_H
#define PARSER_H

typedef enum {
    CMD_SET,
    CMD_GET,
    CMD_UNKNOWN
} CommandType;

typedef struct {
    CommandType type;
    char key[128];
    char value[256]; // 仅在 SET 使用
} KvCommand;

int parse_input(const char* input, KvCommand* cmd);

#endif