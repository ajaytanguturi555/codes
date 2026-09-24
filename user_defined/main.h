typedef struct st
{
    int temp;
    int humidity;
    int pressure;
}typ_st;

struct adc
{
    int channel;
    int resolution;
    int sampling_time;
};

typedef unsigned int uint32_t;
typedef unsigned short int uint16_t;
typedef unsigned char uint8_t;

union  un
{
    uint32_t inp_val1;
    uint16_t inp_val2;
    uint8_t inp_val3;
};

typedef union unn
{
    int mode;
}ty_var;

enum {OFF,ON,FAULT}fan;

enum {INIT,IDLE,RUNNING,ERROR}system;
