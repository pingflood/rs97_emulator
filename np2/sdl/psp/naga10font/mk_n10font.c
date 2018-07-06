#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
typedef struct _knj10_blank_id {
    int start;
    int end;
} knj10_bid_t;

typedef struct _ank10 {
    unsigned char bmp[10];
} ank10_t;

typedef struct _knj10 {
    unsigned int bmp[10];
} knj10_t;
*/

#define FONT_FILE1 "5x10a.bdf"
#define FONT_FILE2 "knj10.bdf"

/* �����̉��s�R�[�h���폜 */
static void chomp(char *s)
{
    char *p;

    p = &s[strlen(s) - 1];
    if (*p == '\n') {
        *p = '\0';
    }
}

/* 16�i�ꕶ��->10�i���l�ϊ� */
static int hctoi(char c)
{
    if (c >= '0' && c <= '9') {
        return c - '0';
    }

    if (c >= 'a' && c <= 'f') {
        return c - 'a' + 10;
    }

    if (c >= 'A' && c <= 'F') {
        return c - 'A' + 10;
    }

    puts("error in hctoi()");
    exit(1);
}

/* 16�i�����񁨐��l�ϊ� (0x�͂��Ȃ�����) */
static int htoi(char *s)
{
    int i;
    int r = 0;

    for (i = 0; i < strlen(s); i++) {
        r *= 16;
        r += hctoi(s[i]);
    }

    return r;
}

/* JIS�R�[�h����0 origin��index�ɕϊ����� */
static int jis2idx(int jc) {
    jc -= 0x2121;
    jc = jc % 256 + (jc / 256) * 0x5e;

    return jc;
}

static void mk_ascii()
{
    FILE *fd;
    char s[256];
    int i;
    int id = -1;

    fd = fopen(FONT_FILE1, "r");
    if (fd == NULL) {
        puts(FONT_FILE1" open error");
        exit(1);
    }

    puts("ank10_t ank10[] = {");
    while (fgets(s, 256, fd) != NULL) {
        chomp(s);
        if (strcmp(s, "BITMAP") == 0) {
            id++;
            if (id < 32) {
                continue;
            } else if (id > 127) {
                break;
            }

            for (i = 0; i < 10; i++) {
                fgets(s, 256, fd);
                chomp(s);
                printf("0x%s,", s);
            }
            puts("");
        }
    }
    printf("};\n\n");

    fclose(fd);
}

static void mk_knj()
{
    FILE *fd;
    char s[256];
    char sc[10];
    int pre_scn = 0x2120, scn;
    int i;

    fd = fopen(FONT_FILE2, "r");
    if (fd == NULL) {
        puts(FONT_FILE2" open error");
        exit(1);
    }

    /* STARTCHAR�Ŕԍ������ł�����̂��`�F�b�N */
    puts("knj10_bid_t knj10_bid[] = {");
    while (fgets(s, 256, fd)) {
        chomp(s);
        if (strncmp(s, "STARTCHAR", strlen("STARTCHAR")) == 0) {
            strcpy(sc, &s[strlen("STARTCHAR ")]);
            scn = htoi(sc);

            if (scn != pre_scn + 1) {
                 printf("%d, %d,\n", jis2idx(pre_scn), jis2idx(scn));
            }
            pre_scn = scn;
        }
    }
    puts("-1, -1");
    printf("};\n\n");

    rewind(fd);

    /* �t�H���g�f�[�^�����o�� */
    puts("knj10_t knj10[] = {");
    while (fgets(s, 256, fd) != NULL) {
        chomp(s);
        if (strcmp(s, "BITMAP") == 0) {
            for (i = 0; i < 10; i++) {
                fgets(s, 256, fd);
                chomp(s);
                printf("0x%s,", s);
            }
            puts("");
        }
    }
    puts("};");

    fclose(fd);
}

int main(void)
{
    printf("/* Automatically generated by mk_n10font.c from 5x10a.bdf/knj10.bdf */\n\n");

    mk_ascii();
    mk_knj();

    return 0;
}