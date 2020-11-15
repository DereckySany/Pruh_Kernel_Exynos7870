#ifndef FIMC_IS_FROM_REAR_C3_IMX260_V001_H
#define FIMC_IS_FROM_REAR_C3_IMX260_V001_H

/* Header referenced section */
#define FROM_HEADER_VERSION_START_ADDR           0x40
#define FROM_HEADER_MODULE_ID_START_ADDR         0x0
#define FROM_HEADER_MODULE_ID_SIZE               0x2
#define FROM_HEADER_CAL_MAP_VER_START_ADDR       0x60
#define FROM_HEADER_ISP_SETFILE_VER_START_ADDR   0x64
#define FROM_HEADER_PROJECT_NAME_START_ADDR      0x6E
#define FROM_HEADER_CONCORD_HEADER_VER_START_ADDR    0x50
#define FROM_HEADER_ISP_BINARY_START_ADDR        0x0
#define FROM_HEADER_ISP_BINARY_END_ADDR          0x4
#define FROM_HEADER_ISP_SETFILE_START_ADDR       0x8
#define FROM_HEADER_ISP_SETFILE_END_ADDR         0xC
#define FROM_HEADER_CONCORD_BINARY_START_ADDR    0x10
#define FROM_HEADER_CONCORD_BINARY_END_ADDR      0x14
#define FROM_HEADER_SHADING_START_ADDR           0x18
#define FROM_HEADER_SHADING_END_ADDR             0x1C
#define FROM_HEADER_PDAF_CAL_START_ADDR          0x20
#define FROM_HEADER_PDAF_CAL_END_ADDR            0x24

#define FROM_HEADER_CAL_DATA_START_ADDR          0x1000

/* Shading referenced section */
#define FROM_SHADING_LSC_I0_GAIN_ADDR            0x2702
#define FROM_SHADING_LSC_J0_GAIN_ADDR            0x270A
#define FROM_SHADING_LSC_A_GAIN_ADDR             0x2712
#define FROM_SHADING_LSC_K4_GAIN_ADDR            0x2722
#define FROM_SHADING_LSC_SCALE_GAIN_ADDR         0x2732
#define FROM_SHADING_GRASTUNING_AWB_ASH_CORD_ADDR        0x273A
#define FROM_SHADING_GRASTUNING_AWB_ASH_CORD_INDEX_ADDR  0x2748
#define FROM_SHADING_GRASTUNING_GAS_ALPHA_ADDR           0x2756
#define FROM_SHADING_GRASTUNING_GAS_BETA_ADDR            0x278E
#define FROM_SHADING_GRASTUNING_GAS_OUTDOOR_ALPHA_ADDR   0x27C6
#define FROM_SHADING_GRASTUNING_GAS_OUTDOOR_BETA_ADDR    0x27CE
#define FROM_SHADING_GRASTUNING_GAS_INDOOR_ALPHA_ADDR    0x27D6
#define FROM_SHADING_GRASTUNING_GAS_INDOOR_BETA_ADDR     0x27DE
#define FROM_SHADING_LSC_GAIN_START_ADDR         0x1006
#define FROM_SHADING_LSC_GAIN_END_ADDR           0x26FD
#define FROM_CONCORD_CAL_PDAF_SHADING_START_ADDR 0x37F4
#define FROM_CONCORD_CAL_PDAF_SHADING_END_ADDR   0x3C13

/* Companion Checksum referenced section */
#define FROM_SHADING_LSC_GAIN_CRC_ADDR           0x26FE
#define FROM_CONCORD_PDAF_CRC_ADDR               0x37F0
#define FROM_CONCORD_PDAF_SHAD_CRC_ADDR          0x3C14
#define FROM_SHADING_LSC_PARAMETER_CRC_ARRD      0x27E6

/* ISP binary referenced section */
#define FROM_ISP_BINARY_SETFILE_START_ADDR       0x8000
#define FROM_ISP_BINARY_SETFILE_END_ADDR         0x3FFFFF

/* Checksum referenced section */
#define FROM_CHECKSUM_HEADER_ADDR                0xFFC
#define FROM_CHECKSUM_CAL_DATA_ADDR              0x3FFC
#define FROM_CAL_DATA_START_ADDR                 0x1000
#define FROM_CAL_DATA_END_ADDR                   0x3C9F

/* etc section */
#define FIMC_IS_MAX_CAL_SIZE                (64 * 1024)
#define FIMC_IS_MAX_COMPANION_FW_SIZE	    (200 * 1024)
#define FIMC_IS_FROM_ERASE_SIZE             (64 * 1024)
#define FIMC_IS_MAX_FW_SIZE                 (2750 * 1024)
#define FIMC_IS_MAX_SETFILE_SIZE_IMX240	    (1120 * 1024)
#define FIMC_IS_MAX_SETFILE_SIZE_2P2_PLUS   (1500 * 1024)
#define HEADER_CRC32_LEN                    (480)
#define FROM_AF_CAL_PAN_ADDR                0x3C20
#define FROM_AF_CAL_MACRO_ADDR              0x3C28

#define CHECKSUM_SEED_ISP_FW_2P2_PLUS		0x271FFC
#define CHECKSUM_SEED_SETF_2P2_PLUS		0x14BFFC
#define CHECKSUM_SEED_COMP_FW_2P2_PLUS		0x31FFC
#define FROM_WRITE_CHECKSUM_SETF_2P2_PLUS	0x18DFFF
#define FROM_WRITE_CHECKSUM_COMP_2P2_PLUS	0x41FFF
#define CHECKSUM_SEED_ISP_FW_IMX240		0x2A8FFC
#define CHECKSUM_SEED_SETF_IMX240		0x1167FC
#define CHECKSUM_SEED_COMP_FW_IMX240		0x307FC
#define FROM_WRITE_CHECKSUM_SETF_IMX240		0x156FFF
#define FROM_WRITE_CHECKSUM_COMP_IMX240		0x407FF

#endif /* FIMC_IS_FROM_REAR_C3_IMX260_V001_H */