
#ifndef __MX6SX_IOMUX_H__
#define __MX6SX_IOMUX_H__

#include "iomux_def.h"
#include "iomux_setting.h"


/*=========== USDHC pin mux and pad settings ===========*/
#define USDHC_PAD_CTRL	(PAD_CTL_HYS | PAD_CTL_PUS_22K_UP | PAD_CTL_PUE \
						 | PAD_CTL_PKE | PAD_CTL_SPEED_LOW \
						 | PAD_CTL_DSE_40ohm | PAD_CTL_SRE_FAST )

#define MX6SX_PAD_SD2_CLK   IOMUX_PAD_CFG(0x0580, USDHC_PAD_CTRL, 0x0238, 0, 0x0000, 0)
#define MX6SX_PAD_SD2_CMD   IOMUX_PAD_CFG(0x0584, USDHC_PAD_CTRL, 0x023C, 0, 0x0000, 0)
#define MX6SX_PAD_SD2_DAT0  IOMUX_PAD_CFG(0x0588, USDHC_PAD_CTRL, 0x0240, 0, 0x0000, 0)
#define MX6SX_PAD_SD2_DAT2  IOMUX_PAD_CFG(0x058C, USDHC_PAD_CTRL, 0x0244, 0, 0x0000, 0)
#define MX6SX_PAD_SD2_DAT1  IOMUX_PAD_CFG(0x0590, USDHC_PAD_CTRL, 0x0248, 0, 0x0000, 0)
#define MX6SX_PAD_SD2_DAT3  IOMUX_PAD_CFG(0x0594, USDHC_PAD_CTRL, 0x024C, 0, 0x0000, 0)

#define MX6SX_PAD_SD3_CLK   IOMUX_PAD_CFG(0x0598, USDHC_PAD_CTRL, 0x0250, 0, 0x0000, 0)
#define MX6SX_PAD_SD3_CMD   IOMUX_PAD_CFG(0x059C, USDHC_PAD_CTRL, 0x0254, 0, 0x0000, 0)
#define MX6SX_PAD_SD3_DAT0  IOMUX_PAD_CFG(0x05A0, USDHC_PAD_CTRL, 0x0258, 0, 0x0000, 0)
#define MX6SX_PAD_SD3_DAT2  IOMUX_PAD_CFG(0x05A4, USDHC_PAD_CTRL, 0x025C, 0, 0x0000, 0)
#define MX6SX_PAD_SD3_DAT1  IOMUX_PAD_CFG(0x05A8, USDHC_PAD_CTRL, 0x0260, 0, 0x0000, 0)
#define MX6SX_PAD_SD3_DAT3  IOMUX_PAD_CFG(0x05AC, USDHC_PAD_CTRL, 0x0264, 0, 0x0000, 0)

#define MX6SX_PAD_SD4_CLK   IOMUX_PAD_CFG(0x05C0, USDHC_PAD_CTRL, 0x0278, 0, 0x0000, 0)
#define MX6SX_PAD_SD4_CMD   IOMUX_PAD_CFG(0x05C4, USDHC_PAD_CTRL, 0x027C, 0, 0x0000, 0)
#define MX6SX_PAD_SD4_DAT0  IOMUX_PAD_CFG(0x05C8, USDHC_PAD_CTRL, 0x0280, 0, 0x0000, 0)
#define MX6SX_PAD_SD4_DAT2  IOMUX_PAD_CFG(0x05CC, USDHC_PAD_CTRL, 0x0284, 0, 0x0000, 0)
#define MX6SX_PAD_SD4_DAT1  IOMUX_PAD_CFG(0x05D0, USDHC_PAD_CTRL, 0x0288, 0, 0x0000, 0)
#define MX6SX_PAD_SD4_DAT3  IOMUX_PAD_CFG(0x05D4, USDHC_PAD_CTRL, 0x028C, 0, 0x0000, 0)


/*=========== QSPI pin mux and pad settings ===========*/
/*======= QSPI pad settings =======*/
#define QSPI_PAD_CTRL	(PAD_CTL_HYS | PAD_CTL_PUS_47K_UP | PAD_CTL_PUE \
						 | PAD_CTL_PKE | PAD_CTL_SPEED_HIGH \
						 | PAD_CTL_DSE_40ohm | PAD_CTL_SRE_FAST )


/*======= QSPI1 =======*/
#define MX6SX_PAD_QSPI1A_DAT0   IOMUX_PAD_CFG(0x04C8, QSPI_PAD_CTRL, 0x0180, 0, 0x0000, 0)
#define MX6SX_PAD_QSPI1A_DAT1   IOMUX_PAD_CFG(0x04CC, QSPI_PAD_CTRL, 0x0184, 0, 0x0000, 0)
#define MX6SX_PAD_QSPI1A_DAT2   IOMUX_PAD_CFG(0x04D0, QSPI_PAD_CTRL, 0x0188, 0, 0x0000, 0)
#define MX6SX_PAD_QSPI1A_DAT3   IOMUX_PAD_CFG(0x04D4, QSPI_PAD_CTRL, 0x018C, 0, 0x0000, 0)
#define MX6SX_PAD_QSPI1A_DQS    IOMUX_PAD_CFG(0x04D8, QSPI_PAD_CTRL, 0x0190, 0, 0x0000, 0)
#define MX6SX_PAD_QSPI1A_CLK    IOMUX_PAD_CFG(0x04DC, QSPI_PAD_CTRL, 0x0194, 0, 0x0000, 0)
#define MX6SX_PAD_QSPI1A_CS0    IOMUX_PAD_CFG(0x04E0, QSPI_PAD_CTRL, 0x0198, 0, 0x0000, 0)
#define MX6SX_PAD_QSPI1A_CS1    IOMUX_PAD_CFG(0x04E4, QSPI_PAD_CTRL, 0x019c, 0, 0x0000, 0)

#define MX6SX_PAD_QSPI1B_DAT0   IOMUX_PAD_CFG(0x04E8, QSPI_PAD_CTRL, 0x01A0, 0, 0x0000, 0)
#define MX6SX_PAD_QSPI1B_DAT1   IOMUX_PAD_CFG(0x04EC, QSPI_PAD_CTRL, 0x01A4, 0, 0x0000, 0)
#define MX6SX_PAD_QSPI1B_DAT2   IOMUX_PAD_CFG(0x04F0, QSPI_PAD_CTRL, 0x01A8, 0, 0x0000, 0)
#define MX6SX_PAD_QSPI1B_DAT3   IOMUX_PAD_CFG(0x04F4, QSPI_PAD_CTRL, 0x01AC, 0, 0x0000, 0)
#define MX6SX_PAD_QSPI1B_DQS    IOMUX_PAD_CFG(0x04F8, QSPI_PAD_CTRL, 0x01B0, 0, 0x0000, 0)
#define MX6SX_PAD_QSPI1B_CLK    IOMUX_PAD_CFG(0x04FC, QSPI_PAD_CTRL, 0x01B4, 0, 0x0000, 0)
#define MX6SX_PAD_QSPI1B_CS0    IOMUX_PAD_CFG(0x0500, QSPI_PAD_CTRL, 0x01B8, 0, 0x0000, 0)
#define MX6SX_PAD_QSPI1B_CS1    IOMUX_PAD_CFG(0x0504, QSPI_PAD_CTRL, 0x01BC, 0, 0x0000, 0)

/*======= QSPI2 =======*/
#define MX6SX_PAD_QSPI2A_DAT0   IOMUX_PAD_CFG(0x04C4, QSPI_PAD_CTRL, 0x017C, 2, 0x0000, 0)
#define MX6SX_PAD_QSPI2A_DAT1   IOMUX_PAD_CFG(0x04BC, QSPI_PAD_CTRL, 0x0174, 2, 0x0000, 0)
#define MX6SX_PAD_QSPI2A_DAT2   IOMUX_PAD_CFG(0x048C, QSPI_PAD_CTRL, 0x0144, 2, 0x0000, 0)
#define MX6SX_PAD_QSPI2A_DAT3   IOMUX_PAD_CFG(0x0490, QSPI_PAD_CTRL, 0x0148, 2, 0x0000, 0)
#define MX6SX_PAD_QSPI2A_DQS    IOMUX_PAD_CFG(0x04B4, QSPI_PAD_CTRL, 0x016C, 18, 0x0000, 0)
#define MX6SX_PAD_QSPI2A_CLK    IOMUX_PAD_CFG(0x0494, QSPI_PAD_CTRL, 0x014C, 2, 0x0000, 0)
#define MX6SX_PAD_QSPI2A_CS0    IOMUX_PAD_CFG(0x0488, QSPI_PAD_CTRL, 0x0140, 2, 0x0000, 0)
#define MX6SX_PAD_QSPI2A_CS1    IOMUX_PAD_CFG(0x04B0, QSPI_PAD_CTRL, 0x0168, 2, 0x0000, 0)

#define MX6SX_PAD_QSPI2B_DAT0   IOMUX_PAD_CFG(0x049C, QSPI_PAD_CTRL, 0x0154, 2, 0x0000, 0)
#define MX6SX_PAD_QSPI2B_DAT1   IOMUX_PAD_CFG(0x0498, QSPI_PAD_CTRL, 0x0150, 2, 0x0000, 0)
#define MX6SX_PAD_QSPI2B_DAT2   IOMUX_PAD_CFG(0x04C0, QSPI_PAD_CTRL, 0x0178, 2, 0x0000, 0)
#define MX6SX_PAD_QSPI2B_DAT3   IOMUX_PAD_CFG(0x04B8, QSPI_PAD_CTRL, 0x0170, 2, 0x0000, 0)
#define MX6SX_PAD_QSPI2B_DQS    IOMUX_PAD_CFG(0x04AC, QSPI_PAD_CTRL, 0x0164, 18, 0x0000, 0)
#define MX6SX_PAD_QSPI2B_CLK    IOMUX_PAD_CFG(0x04A0, QSPI_PAD_CTRL, 0x0158, 2, 0x0000, 0)
#define MX6SX_PAD_QSPI2B_CS0    IOMUX_PAD_CFG(0x05A4, QSPI_PAD_CTRL, 0x015C, 2, 0x0000, 0)
#define MX6SX_PAD_QSPI2B_CS1    IOMUX_PAD_CFG(0x04A8, QSPI_PAD_CTRL, 0x0160, 2, 0x0000, 0)

/*======= NAND =======*/
#define NAND_PAD_CTRL	(PAD_CTL_HYS | PAD_CTL_SPEED_MED | PAD_CTL_DSE_60ohm | PAD_CTL_SRE_FAST )

#define MX6SX_PAD_CE0_B 		IOMUX_PAD_CFG(0x048c, NAND_PAD_CTRL, 0x0144, 0, 0x0000, 0)
#define MX6SX_PAD_CE1_B 		IOMUX_PAD_CFG(0x0490, NAND_PAD_CTRL, 0x0148, 0, 0x0000, 0)

#endif
