
#define VCNL40x0_ADDRESS 0x26 // 8bit address
// registers
#define REGISTER_COMMAND (0x80)
#define REGISTER_ID (0x81)
#define REGISTER_PROX_RATE (0x82)
#define REGISTER_PROX_CURRENT (0x83)
#define REGISTER_AMBI_PARAMETER (0x84)
#define REGISTER_AMBI_VALUE (0x85)
#define REGISTER_PROX_VALUE (0x87)
#define REGISTER_INTERRUPT_CONTROL (0x89)
#define REGISTER_INTERRUPT_LOW_THRES (0x8a)
#define REGISTER_INTERRUPT_HIGH_THRES (0x8c)
#define REGISTER_INTERRUPT_STATUS (0x8e)
#define REGISTER_PROX_TIMING (0xf9)
#define REGISTER_AMBI_IR_LIGHT_LEVEL (0x90) // This register is not intended to be use by customer
// Bits in Command register (0x80)
#define COMMAND_ALL_DISABLE (0x00)
#define COMMAND_SELFTIMED_MODE_ENABLE (0x01)
#define COMMAND_PROX_ENABLE (0x02)
#define COMMAND_AMBI_ENABLE (0x04)
#define COMMAND_PROX_ON_DEMAND (0x08)
#define COMMAND_AMBI_ON_DEMAND (0x10)
#define COMMAND_MASK_PROX_DATA_READY (0x20)
#define COMMAND_MASK_AMBI_DATA_READY (0x40)
#define COMMAND_MASK_LOCK (0x80)

// Bits in Product ID Revision Register (0x81)
#define PRODUCT_MASK_REVISION_ID (0x0f)
#define PRODUCT_MASK_PRODUCT_ID (0xf0)
// Bits in Prox Measurement Rate register (0x82)
#define PROX_MEASUREMENT_RATE_2 (0x00) // DEFAULT
#define PROX_MEASUREMENT_RATE_4 (0x01)
#define PROX_MEASUREMENT_RATE_8 (0x02)
#define PROX_MEASUREMENT_RATE_16 (0x03)
#define PROX_MEASUREMENT_RATE_31 (0x04)
#define PROX_MEASUREMENT_RATE_62 (0x05)
#define PROX_MEASUREMENT_RATE_125 (0x06)
#define PROX_MEASUREMENT_RATE_250 (0x07)
#define PROX_MASK_MEASUREMENT_RATE (0x07)
// Bits in Proximity LED current setting (0x83)
#define PROX_MASK_LED_CURRENT (0x3f) // DEFAULT = 2
#define PROX_MASK_FUSE_PROG_ID (0xc0)
// Bits in Ambient Light Parameter register (0x84)
#define AMBI_PARA_AVERAGE_1 (0x00)
#define AMBI_PARA_AVERAGE_2 (0x01)
#define AMBI_PARA_AVERAGE_4 (0x02)
#define AMBI_PARA_AVERAGE_8 (0x03)
#define AMBI_PARA_AVERAGE_16 (0x04)
#define AMBI_PARA_AVERAGE_32 (0x05) // DEFAULT
#define AMBI_PARA_AVERAGE_64 (0x06)
#define AMBI_PARA_AVERAGE_128 (0x07)
#define AMBI_MASK_PARA_AVERAGE (0x07)
#define AMBI_PARA_AUTO_OFFSET_ENABLE (0x08) // DEFAULT enable
#define AMBI_MASK_PARA_AUTO_OFFSET (0x08)
#define AMBI_PARA_MEAS_RATE_1 (0x00)
#define AMBI_PARA_MEAS_RATE_2 (0x10) // DEFAULT
#define AMBI_PARA_MEAS_RATE_3 (0x20)
#define AMBI_PARA_MEAS_RATE_4 (0x30)
#define AMBI_PARA_MEAS_RATE_5 (0x40)
#define AMBI_PARA_MEAS_RATE_6 (0x50)
#define AMBI_PARA_MEAS_RATE_8 (0x60)
#define AMBI_PARA_MEAS_RATE_10 (0x70)
#define AMBI_MASK_PARA_MEAS_RATE (0x70)
#define AMBI_PARA_CONT_CONV_ENABLE (0x80)
#define AMBI_MASK_PARA_CONT_CONV (0x80) // DEFAULT disable
// Bits in Interrupt Control Register (x89)
#define INTERRUPT_THRES_SEL_PROX (0x00)
#define INTERRUPT_THRES_SEL_ALS (0x01)
#define INTERRUPT_THRES_ENABLE (0x02)
#define INTERRUPT_ALS_READY_ENABLE (0x04)
#define INTERRUPT_PROX_READY_ENABLE (0x08)
#define INTERRUPT_COUNT_EXCEED_1 (0x00) // DEFAULT
#define INTERRUPT_COUNT_EXCEED_2 (0x20)
#define INTERRUPT_COUNT_EXCEED_4 (0x40)
#define INTERRUPT_COUNT_EXCEED_8 (0x60)
#define INTERRUPT_COUNT_EXCEED_16 (0x80)
#define INTERRUPT_COUNT_EXCEED_32 (0xa0)
#define INTERRUPT_COUNT_EXCEED_64 (0xc0)
#define INTERRUPT_COUNT_EXCEED_128 (0xe0)
#define INTERRUPT_MASK_COUNT_EXCEED (0xe0)
// Bits in Interrupt Status Register (x8e)
#define INTERRUPT_STATUS_THRES_HI (0x01)
#define INTERRUPT_STATUS_THRES_LO (0x02)
#define INTERRUPT_STATUS_ALS_READY (0x04)
#define INTERRUPT_STATUS_PROX_READY (0x08)
#define INTERRUPT_MASK_STATUS_THRES_HI (0x01)
#define INTERRUPT_MASK_THRES_LO (0x02)
#define INTERRUPT_MASK_ALS_READY (0x04)
#define INTERRUPT_MASK_PROX_READY (0x08)

extern unsigned short data_[16];
extern unsigned short rcvData[16];

extern void VCNL_WrSingle(unsigned short wAddr, unsigned short wData);
extern unsigned short VCNL_RdSingle(unsigned short rAddr);
extern void VCNL_RdSeq(unsigned short rAddr, unsigned char *rcvData, unsigned long rLen);
extern void void VCNL_WrSeq(unsigned short wAddr, unsigned char *wrData, unsigned long rLen);