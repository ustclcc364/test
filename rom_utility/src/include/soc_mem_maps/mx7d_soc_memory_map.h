#ifndef _MX7D_SOC_MEMORY_MAP_H
#define _MX7D_SOC_MEMORY_MAP_H

// CPU Memory Map
// Blocks connected via pl301fast
// s_a_N, s_d_N ports
#define MMDC0_ARB_BASE_ADDR_MX7D             0x80000000
#define MMDC0_ARB_END_ADDR              0xBFFFFFFF
#define MMDC1_ARB_BASE_ADDR_MX7D             0xC0000000
#define MMDC1_ARB_END_ADDR              0xFFFFFFFF
#define OCRAM_ARB_BASE_ADDR_MX7D             0x00900000
#define OCRAM_ARB_END_ADDR              0x009FFFFF
#define IRAM_BASE_ADDR_MX7D                  OCRAM_ARB_BASE_ADDR_MX7D
#define QSPI0_ARB_BASE_ADDR_MX7D             0x60000000
#define QSPI0_ARB_END_ADDR              0x6FFFFFFF
#define QSPI1_ARB_BASE_ADDR_MX7D             0x70000000
#define QSPI1_ARB_END_ADDR              0x7FFFFFFF
//#define QS0_BUFFER_BASE_ADDR_MX7D            0x0C000000
//#define QS0_BUFFER_END_ADDR             0x0DFFFFFF
//#define QS1_BUFFER_BASE_ADDR_MX7D            0x0E000000
//#define QS1_BUFFER_END_ADDR             0x0FFFFFFF
//#define PCIE_ARB_BASE_ADDR_MX7D              0x08000000
//#define PCIE_ARB_END_ADDR               0x08FFFFFF

// Blocks connected via pl301periph
// s_e_N ports
#define ROMCP_ARB_BASE_ADDR_MX7D             0x00000000
#define ROMCP_ARB_END_ADDR              0x00017FFF
#define BOOT_ROM_BASE_ADDR_MX7D              ROMCP_ARB_BASE_ADDR_MX7D
#define CAAM_ARB_BASE_ADDR_MX7D              0x30900000
#define CAAM_ARB_END_ADDR               0x00107FFF
//#define GPU_2D_ARB_BASE_ADDR_MX7D            0x01800000
//#define GPU_2D_ARB_END_ADDR             0x01803FFF

// apbh, gpmi, bch
#define APBH_DMA_BASE_ADDR_MX7D		0x33000000
#define GPMI_BASE_ADDR_MX7D			0x33002000
#define BCH_BASE_ADDR_MX7D			0x33004000

//#define OPENVG_ARB_BASE_ADDR_MX7D           0x02204000
//#define OPENVG_ARB_END_ADDR            0x02207FFF

// GPV - PL301 configuration ports
//#define GPV0_BASE_ADDR_MX7D                  0x00B00000
//#define GPV1_BASE_ADDR_MX7D                  0x00C00000
//#define GPV2_BASE_ADDR_MX7D                  0x00D00000
//#define GPV3_BASE_ADDR_MX7D                  0x00E00000
//#define GPV4_BASE_ADDR_MX7D                  0x00F00000
//#define GPV5_BASE_ADDR_MX7D                  0x01000000
//#define GPV6_BASE_ADDR_MX7D                  0x01100000
// s_g_N ports
#define AIPS1_ARB_BASE_ADDR_MX7D             0x30000000
#define AIPS1_ARB_END_ADDR              0x303FFFFF
#define AIPS2_ARB_BASE_ADDR_MX7D             0x30400000
#define AIPS2_ARB_END_ADDR              0x307FFFFF
#define AIPS3_ARB_BASE_ADDR_MX7D             0x30800000
#define AIPS3_ARB_END_ADDR              0x30BFFFFF


#define WEIM_ARB_BASE_ADDR_MX7D             0x28000000
#define WEIM_ARB_END_ADDR               	0x2FFFFFFF
#define WEIM_CS_BASE_ADDR_MX7D              WEIM_ARB_BASE_ADDR_MX7D

#define EPIT1_IPS_BASE_ADDR     0x20D0000
#define EPIT_BASE_ADDR          EPIT1_IPS_BASE_ADDR

// CoreSight (ARM Debug)
// ***** TO UPDATE *****
/*
#define DEBUG_ROM_BASE_ADDR_MX7D             0x02140000
#define ETB_BASE_ADDR_MX7D                   0x02141000
#define EXT_CTI_BASE_ADDR_MX7D               0x02142000
#define TPIU_BASE_ADDR_MX7D                  0x02143000
#define FUNNEL_BASE_ADDR_MX7D                0x02144000
#define CORTEX_ROM_TABLE                0x0214F000
#define CORTEX_DEBUG_UNIT               0x02150000
#define CORE0_DEBUG_UNIT                0x02150000
#define PMU0_BASE_ADDR_MX7D                  0x02151000
#define CORE1_DEBUG_UNIT                0x02152000
#define PMU1_BASE_ADDR_MX7D                  0x02153000
#define CORE2_DEBUG_UNIT                0x02154000
#define PMU2_BASE_ADDR_MX7D                  0x02155000
#define CORE3_DEBUG_UNIT                0x02156000
#define PMU3_BASE_ADDR_MX7D                  0x02157000
#define CTI0_BASE_ADDR_MX7D                  0x02158000
#define CTI1_BASE_ADDR_MX7D                  0x02159000
#define CTI2_BASE_ADDR_MX7D                  0x0215A000
#define CTI3_BASE_ADDR_MX7D                  0x0215B000
#define PTM0_BASE_ADDR_MX7D                  0x0215C000
#define PTM_BASE_ADDR_MX7D                   0x0215C000
#define PTM1_BASE_ADDR_MX7D                  0x0215D000
#define PTM2_BASE_ADDR_MX7D                  0x0215E000
#define PTM3_BASE_ADDR_MX7D                  0x0215F000
// *********************
// Legacy Defines
#define CSD0_DDR_BASE_ADDR_MX7D              MMDC0_ARB_BASE_ADDR_MX7D
#define CSD1_DDR_BASE_ADDR_MX7D              0xC0000000
#define CS0_BASE_ADDR_MX7D                   WEIM_ARB_BASE_ADDR_MX7D
*/

// Defines for Blocks connected via (AIPS (SkyBlue)
#define AIPS_TZ1_BASE_ADDR_MX7D              AIPS1_ARB_BASE_ADDR_MX7D
#define AIPS_TZ2_BASE_ADDR_MX7D              AIPS2_ARB_BASE_ADDR_MX7D
#define AIPS_TZ3_BASE_ADDR_MX7D              AIPS3_ARB_BASE_ADDR_MX7D

//slots 0,7,14 of SDMA reserved, therefore left unused in IPMUX3
//#define SPDIF_BASE_ADDR_MX7D             (AIPS_TZ1_BASE_ADDR_MX7D+0x04000) //slot 1
#define ECSPI1_BASE_ADDR_MX7D            0x30820000
#define ECSPI2_BASE_ADDR_MX7D            0x30830000
#define ECSPI3_BASE_ADDR_MX7D            0x30840000
#define ECSPI4_BASE_ADDR_MX7D            0x30630000
//#define ECSPI5_BASE_ADDR_MX7D            (AIPS_TZ1_BASE_ADDR_MX7D+0x18000 //slot 6
//#define UART1_BASE_ADDR_MX7D             (AIPS_TZ1_BASE_ADDR_MX7D+0x20000) //slot 8
//#define ESAI1_BASE_ADDR_MX7D             (AIPS_TZ1_BASE_ADDR_MX7D+0x24000) //slot 9
//#define SSI1_BASE_ADDR_MX7D              (AIPS_TZ1_BASE_ADDR_MX7D+0x28000) //slot 10
//#define SSI2_BASE_ADDR_MX7D              (AIPS_TZ1_BASE_ADDR_MX7D+0x2C000) //slot 11
//#define SSI3_BASE_ADDR_MX7D              (AIPS_TZ1_BASE_ADDR_MX7D+0x30000) //slot 12
//#define ASRC_BASE_ADDR_MX7D              (AIPS_TZ1_BASE_ADDR_MX7D+0x34000) //slot 13
//#define SPBA_BASE_ADDR_MX7D              (AIPS_TZ1_BASE_ADDR_MX7D+0x3C000) //slot 15

// (AIPS_TZ#1- On Platform
//#define AIPS1_ON_BASE_ADDR_MX7D              (AIPS_TZ1_BASE_ADDR_MX7D+0x7C000)

// (AIPS_TZ#1- Off Platform
//ex- #define (AIPS1_BASE_ADDR_MX7D                 (AIPS_TZ1_BASE_ADDR_MX7D+0x80000
#define AIPS1_OFF_BASE_ADDR_MX7D             (AIPS_TZ1_BASE_ADDR_MX7D)
//#define USBOH3_BASE_ADDR_MX7D              (AIPS1_BASE_ADDR_MX7D

#define GPT_BASE_ADDR_MX7D               (AIPS1_OFF_BASE_ADDR_MX7D+0x2D0000)
#define GPIO1_BASE_ADDR_MX7D             (AIPS1_OFF_BASE_ADDR_MX7D+0x200000)
#define GPIO2_BASE_ADDR_MX7D             (AIPS1_OFF_BASE_ADDR_MX7D+0x210000)
#define GPIO3_BASE_ADDR_MX7D             (AIPS1_OFF_BASE_ADDR_MX7D+0x220000)
#define GPIO4_BASE_ADDR_MX7D             (AIPS1_OFF_BASE_ADDR_MX7D+0x230000)
#define GPIO5_BASE_ADDR_MX7D             (AIPS1_OFF_BASE_ADDR_MX7D+0x240000)
#define GPIO6_BASE_ADDR_MX7D             (AIPS1_OFF_BASE_ADDR_MX7D+0x250000)
#define GPIO7_BASE_ADDR_MX7D             (AIPS1_OFF_BASE_ADDR_MX7D+0x260000)
#define KPP_BASE_ADDR_MX7D               (AIPS1_OFF_BASE_ADDR_MX7D+0x320000)
#define WDOG1_BASE_ADDR_MX7D             (AIPS1_OFF_BASE_ADDR_MX7D+0x280000)
#define WDOG2_BASE_ADDR_MX7D             (AIPS1_OFF_BASE_ADDR_MX7D+0x290000)
#define CCM_BASE_ADDR_MX7D               (AIPS1_OFF_BASE_ADDR_MX7D+0x380000)
#define ANATOP_BASE_ADDR_MX7D            (AIPS1_OFF_BASE_ADDR_MX7D+0x360000)
#define SNVS_BASE_ADDR_MX7D              (AIPS1_OFF_BASE_ADDR_MX7D+0x370000)
//#define EPIT1_BASE_ADDR_MX7D             (AIPS1_OFF_BASE_ADDR_MX7D+0x50000)
//#define EPIT2_BASE_ADDR_MX7D             (AIPS1_OFF_BASE_ADDR_MX7D+0x54000)
#define SRC_BASE_ADDR_MX7D               (AIPS1_OFF_BASE_ADDR_MX7D+0x390000)
#define GPC_BASE_ADDR_MX7D               (AIPS1_OFF_BASE_ADDR_MX7D+0x3A0000)
#define IOMUXC_BASE_ADDR_MX7D            (AIPS1_OFF_BASE_ADDR_MX7D+0x330000)
#define IOMUXC_GPR_BASE_ADDR_MX7D        (AIPS1_OFF_BASE_ADDR_MX7D+0x340000)
//#define CANFD1_BASE_ADDR_MX7D            (AIPS1_OFF_BASE_ADDR_MX7D+0x68000)
//#define SDMA_PORT_IPS_HOST_BASE_ADDR_MX7D    (AIPS1_OFF_BASE_ADDR_MX7D+0x6C000)
//#define CANFD2_BASE_ADDR_MX7D            (AIPS1_OFF_BASE_ADDR_MX7D+0x70000)
//#define SEMA41_BASE_ADDR_MX7D            (AIPS1_OFF_BASE_ADDR_MX7D+0x74000)
//#define SEMA42_BASE_ADDR_MX7D            (AIPS1_OFF_BASE_ADDR_MX7D+0x78000)
//#define RDC_BASE_ADDR_MX7D               (AIPS1_OFF_BASE_ADDR_MX7D+0x7C000)
#define ROMCP_BASE_ADDR_MX7D                 (AIPS1_OFF_BASE_ADDR_MX7D+0x310000)


// (AIPS_TZ#2- On Platform
//#define AIPS2_ON_BASE_ADDR_MX7D              (AIPS_TZ2_BASE_ADDR_MX7D+0x7C000)

// (AIPS_TZ#2- Off Platform
#define AIPS2_OFF_BASE_ADDR_MX7D             (AIPS_TZ2_BASE_ADDR_MX7D)

// (AIPS_TZ#2  - Global enable (0)
//#define CAAM_BASE_ADDR_MX7D              AIPS_TZ2_BASE_ADDR_MX7D
//#define ARM_BASE_ADDR_MX7D	        (AIPS_TZ2_BASE_ADDR_MX7D+0x40000)

#define PWM1_BASE_ADDR_MX7D              (AIPS2_OFF_BASE_ADDR_MX7D+0x260000)
#define PWM2_BASE_ADDR_MX7D              (AIPS2_OFF_BASE_ADDR_MX7D+0x270000)
#define PWM3_BASE_ADDR_MX7D              (AIPS2_OFF_BASE_ADDR_MX7D+0x280000)
#define PWM4_BASE_ADDR_MX7D              (AIPS2_OFF_BASE_ADDR_MX7D+0x290000)
//#define ENET_BASE_ADDR_MX7D                  (AIPS2_OFF_BASE_ADDR_MX7D+0x8000)
//#define MLB_BASE_ADDR_MX7D                   (AIPS2_OFF_BASE_ADDR_MX7D+0xC000)
//#define MMDC_P0_BASE_ADDR_MX7D               (AIPS2_OFF_BASE_ADDR_MX7D+0x30000)
//#define ENET2_BASE_ADDR_MX7D                 (AIPS2_OFF_BASE_ADDR_MX7D+0x34000)
#define WEIM_BASE_ADDR_MX7D                  (AIPS3_OFF_BASE_ADDR_MX7D+0x3C0000)
#define OCOTP_BASE_ADDR_MX7D                 (AIPS1_OFF_BASE_ADDR_MX7D+0x350000)
//#define CSU_BASE_ADDR_MX7D                   (AIPS2_OFF_BASE_ADDR_MX7D+0x40000)
//#define IP2APB_PERFMON1_BASE_ADDR_MX7D       (AIPS2_OFF_BASE_ADDR_MX7D+0x44000)
//#define IP2APB_PERFMON2_BASE_ADDR_MX7D       (AIPS2_OFF_BASE_ADDR_MX7D+0x48000)
//#define IP2APB_AXIMON_BASE_ADDR_MX7D         (AIPS2_OFF_BASE_ADDR_MX7D+0x4C000)
//#define IP2APB_TZASC1_BASE_ADDR_MX7D         (AIPS2_OFF_BASE_ADDR_MX7D+0x50000)
//#define SAI1_BASE_ADDR_MX7D                  (AIPS2_OFF_BASE_ADDR_MX7D+0x54000)
//#define AUDMUX_BASE_ADDR_MX7D                (AIPS2_OFF_BASE_ADDR_MX7D+0x58000)
//#define SAI2_BASE_ADDR_MX7D                  (AIPS2_OFF_BASE_ADDR_MX7D+0x5C000)
#define QSPI1_BASE_ADDR_MX7D                 (AIPS3_OFF_BASE_ADDR_MX7D+0x3B0000)
#define QSPI2_BASE_ADDR_MX7D                 (AIPS2_OFF_BASE_ADDR_MX7D+0x64000)  // QSPI2 not used in 7D
#define UART2_BASE_ADDR_MX7D                 (AIPS3_OFF_BASE_ADDR_MX7D+0x090000)
#define UART3_BASE_ADDR_MX7D                 (AIPS3_OFF_BASE_ADDR_MX7D+0x080000)
#define UART4_BASE_ADDR_MX7D                 (AIPS3_OFF_BASE_ADDR_MX7D+0x260000)
#define UART5_BASE_ADDR_MX7D                 (AIPS3_OFF_BASE_ADDR_MX7D+0x270000)
#define UART6_BASE_ADDR_MX7D             	 (AIPS3_OFF_BASE_ADDR_MX7D+0x280000)
//#define QOSC_BASE_ADDR_MX7D                  (AIPS2_OFF_BASE_ADDR_MX7D+0x7C000)
//#define IP2APB_USBPHY1_BASE_ADDR_MX7D        (AIPS2_OFF_BASE_ADDR_MX7D+0x780000
//#define IP2APB_USBPHY2_BASE_ADDR_MX7D        (AIPS2_OFF_BASE_ADDR_MX7D+0x7C000
#define ADC1_BASE_ADDR_MX7D              (AIPS2_OFF_BASE_ADDR_MX7D+0x210000)
#define ADC2_BASE_ADDR_MX7D              (AIPS2_OFF_BASE_ADDR_MX7D+0x220000)

// (AIPS_TZ#3- On Platform
#define AIPS3_ON_BASE_ADDR_MX7D              (AIPS_TZ3_BASE_ADDR_MX7D+0x7C000)

// (AIPS_TZ#3- Off Platform
#define AIPS3_OFF_BASE_ADDR_MX7D             (AIPS_TZ3_BASE_ADDR_MX7D)

//on-plat peripherals
//#define GIS_BASE_ADDR_MX7D               (AIPS_TZ3_BASE_ADDR_MX7D+0x4000 )
//#define DCIC1_BASE_ADDR_MX7D             (AIPS_TZ3_BASE_ADDR_MX7D+0xC000 )
//#define DCIC2_BASE_ADDR_MX7D             (AIPS_TZ3_BASE_ADDR_MX7D+0x10000)
//#define CSI1_BASE_ADDR_MX7D              (AIPS_TZ3_BASE_ADDR_MX7D+0x14000)
//#define EPXP_BASE_ADDR_MX7D              (AIPS_TZ3_BASE_ADDR_MX7D+0x18000)
//#define CSI2_BASE_ADDR_MX7D              (AIPS_TZ3_BASE_ADDR_MX7D+0x1C000)
//#define ELCDIF1_BASE_ADDR_MX7D           (AIPS_TZ3_BASE_ADDR_MX7D+0x20000)
//#define ELCDIF2_BASE_ADDR_MX7D           (AIPS_TZ3_BASE_ADDR_MX7D+0x24000)
//#define VADC_BASE_ADDR_MX7D              (AIPS_TZ3_BASE_ADDR_MX7D+0x28000)
//#define VDEC_BASE_ADDR_MX7D              (AIPS_TZ3_BASE_ADDR_MX7D+0x2C000)
//#define TZ3_SPBA_BASE_ADDR_MX7D          (AIPS_TZ3_BASE_ADDR_MX7D+0x3C000)

#define I2C1_BASE_ADDR_MX7D                  (AIPS3_OFF_BASE_ADDR_MX7D+0x220000)
#define I2C2_BASE_ADDR_MX7D                  (AIPS3_OFF_BASE_ADDR_MX7D+0x230000)
#define I2C3_BASE_ADDR_MX7D                  (AIPS3_OFF_BASE_ADDR_MX7D+0x240000)
#define I2C4_BASE_ADDR_MX7D                  (AIPS3_OFF_BASE_ADDR_MX7D+0x250000)
#define CAN1_BASE_ADDR_MX7D              (AIPS3_OFF_BASE_ADDR_MX7D+0x200000)
#define CAN2_BASE_ADDR_MX7D              (AIPS3_OFF_BASE_ADDR_MX7D+0x210000)
//#define USBO2H_PL301_BASE_ADDR_MX7D          (AIPS2_OFF_BASE_ADDR_MX7D+0x0000)
#define USB_BASE_ADDR_MX7D            (AIPS3_OFF_BASE_ADDR_MX7D+0x310000)
#define USDHC1_BASE_ADDR_MX7D                (AIPS3_OFF_BASE_ADDR_MX7D+0x340000)
#define USDHC2_BASE_ADDR_MX7D                (AIPS3_OFF_BASE_ADDR_MX7D+0x350000)
#define USDHC3_BASE_ADDR_MX7D                (AIPS3_OFF_BASE_ADDR_MX7D+0x360000)
#define USDHC4_BASE_ADDR_MX7D                (AIPS3_OFF_BASE_ADDR_MX7D+0x370000)
//#define WDOG3_BASE_ADDR_MX7D             (AIPS3_OFF_BASE_ADDR_MX7D+0x8000 )
//#define ECSPI5_BASE_ADDR_MX7D            (AIPS3_OFF_BASE_ADDR_MX7D+0xC000 )
//#define HS_BASE_ADDR_MX7D                (AIPS3_OFF_BASE_ADDR_MX7D+0x10000)
//#define MUCPU_BASE_ADDR_MX7D             (AIPS3_OFF_BASE_ADDR_MX7D+0x14000)
//#define CANFDCPU_BASE_ADDR_MX7D          (AIPS3_OFF_BASE_ADDR_MX7D+0x18000)
//#define MUDSP_BASE_ADDR_MX7D             (AIPS3_OFF_BASE_ADDR_MX7D+0x1C000)
//#define PWM5_BASE_ADDR_MX7D              (AIPS3_OFF_BASE_ADDR_MX7D+0x24000)
//#define PWM6_BASE_ADDR_MX7D              (AIPS3_OFF_BASE_ADDR_MX7D+0x28000)
//#define PWM7_BASE_ADDR_MX7D              (AIPS3_OFF_BASE_ADDR_MX7D+0x2C000)
//#define PWM8_BASE_ADDR_MX7D              (AIPS3_OFF_BASE_ADDR_MX7D+0x30000)



//#define AHBMAX_BASE_ADDR_MX7D			    0x63F94000
//#define MAX_BASE_ADDR_MX7D			        AHBMAX_BASE_ADDR_MX7D
//#define IIM_BASE_ADDR_MX7D			        0x63F98000
//#define FIRI_BASE_ADDR_MX7D			        0x63FA8000
#define SDMA_IPS_HOST_BASE_ADDR_MX7D	        SDMA_PORT_IPS_HOST_BASE_ADDR_MX7D
#define SDMA_IPS_HOST_BASE_ADDR_MX7D     SDMA_PORT_IPS_HOST_BASE_ADDR_MX7D
//#define SCC_BASE_ADDR_MX7D			        0x63FB4000
//#define RTICV3_BASE_ADDR_MX7D			    0x63FBC000
//#define RTIC_BASE_ADDR_MX7D			        RTICV3_BASE_ADDR_MX7D
//#define CSPI_BASE_ADDR_MX7D			        0x63FC0000
//#define RTC_BASE_ADDR_MX7D			        0x63FD4000
//#define M4IF_REGISTERS_BASE_ADDR_MX7D        0x63FD8000
//#define ESDCTL_REGISTERS_BASE_ADDR_MX7D      0x63FD9000
//#define WEIM_REGISTERS_BASE_ADDR_MX7D        0x63FDA000
//#define EIM_BASE_ADDR_MX7D                   WEIM_REGISTERS_BASE_ADDR_MX7D
//#define EMIV2_REGISTERS_BASE_ADDR_MX7D       0x63FDBF00
//#define PL301_2X2_BASE_ADDR_MX7D			    0x63FDC000
//#define PL301_4X1_BASE_ADDR_MX7D			    0x63FE0000
//#define FEC_BASE_ADDR_MX7D			        0x63FEC000
//#define TVE_BASE_ADDR_MX7D			        0x63FF0000
//#define SAHARA_BASE_ADDR_MX7D		    	0x63FF8000
//#define PTP_BASE_ADDR_MX7D    		    	0x63FFC000

// Cortex-A9 MPCore private memory region
/*
#define ARM_PERIPHBASE                  0x00A00000
#define SCU_BASE_ADDR_MX7D                   ARM_PERIPHBASE
#define IC_INTERFACES_BASE_ADDR_MX7D         (ARM_PERIPHBASE+0x0100)
#define GLOBAL_TIMER_BASE_ADDR_MX7D          (ARM_PERIPHBASE+0x0200)
#define PRIVATE_TIMERS_WD_BASE_ADDR_MX7D     (ARM_PERIPHBASE+0x0600)
#define IC_DISTRIBUTOR_BASE_ADDR_MX7D        (ARM_PERIPHBASE+0x1000)
*/

#endif  //PROD_MODE_GMEM

