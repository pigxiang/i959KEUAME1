#ifndef __S6E8FA0_PARAM_H__
#define __S6E8FA0_PARAM_H__

#define GAMMA_PARAM_SIZE	34
#define ACL_PARAM_SIZE	ARRAY_SIZE(acl_cutoff_40)
#define ELVSS_PARAM_SIZE	ARRAY_SIZE(elvss_control_set_10_105)
#define AID_PARAM_SIZE	ARRAY_SIZE(SEQ_AOR_CONTROL)

enum {
	GAMMA_10CD,
	GAMMA_11CD,
	GAMMA_12CD,
	GAMMA_13CD,
	GAMMA_14CD,
	GAMMA_15CD,
	GAMMA_16CD,
	GAMMA_17CD,
	GAMMA_19CD,
	GAMMA_20CD,
	GAMMA_21CD,
	GAMMA_22CD,
	GAMMA_24CD,
	GAMMA_25CD,
	GAMMA_27CD,
	GAMMA_29CD,
	GAMMA_30CD,
	GAMMA_32CD,
	GAMMA_34CD,
	GAMMA_37CD,
	GAMMA_39CD,
	GAMMA_41CD,
	GAMMA_44CD,
	GAMMA_47CD,
	GAMMA_50CD,
	GAMMA_53CD,
	GAMMA_56CD,
	GAMMA_60CD,
	GAMMA_64CD,
	GAMMA_68CD,
	GAMMA_72CD,
	GAMMA_77CD,
	GAMMA_82CD,
	GAMMA_87CD,
	GAMMA_93CD,
	GAMMA_98CD,
	GAMMA_105CD,
	GAMMA_111CD,
	GAMMA_119CD,
	GAMMA_126CD,
	GAMMA_134CD,
	GAMMA_143CD,
	GAMMA_152CD,
	GAMMA_162CD,
	GAMMA_172CD,
	GAMMA_183CD,
	GAMMA_195CD,
	GAMMA_207CD,
	GAMMA_220CD,
	GAMMA_234CD,
	GAMMA_249CD,
	GAMMA_265CD,
	GAMMA_282CD,
	GAMMA_300CD,
	GAMMA_MAX
};

static const unsigned char SEQ_TEST_KEY_ON_F0[] = {
	0xF0,
	0x5A, 0x5A,
};

static const unsigned char SEQ_TEST_KEY_ON_F1[] = {
	0xF1,
	0x5A, 0x5A,
};

static const unsigned char SEQ_TEST_KEY_ON_FC[] = {
	0xFC,
	0x5A, 0x5A,
};

static const unsigned char SEQ_SCAN_TIMMING_1_FE[] = {
	0xFE,
	0x03, 0x03, 0x00, 0x08, 0x00, 0x00, 0x04, 0x33, 0x52,
	0x00, 0x8E, 0x80, 0x72, 0x6C, 0x65, 0x5E, 0x57, 0x50,
	0x00, 0xB1, 0x9D, 0x00, 0x11, 0x3B, 0xE0, 0x37, 0x20,
	0x00, 0x00, 0x9B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xE7, 0x64, 0x00, 0x00, 0x01, 0x12, 0x22, 0x8C,
	0xA2, 0x00, 0x80, 0x0A, 0x01,
};

static const unsigned char SEQ_SCAN_TIMMING_2_FD[] = {
	0xFD,
	0x14, 0x09,
};

static const unsigned char SEQ_SCAN_TIMMING_2_C0[] = {
	0xC0,
	0x00, 0x02, 0x03, 0x32, 0xC0,
	0x44, 0x44, 0xC0, 0x00, 0x08, 0x20, 0xC0,
};

static const unsigned char SEQ_SCAN_TIMMING_2_F4[] = {
	0xF4,
	0xAB, 0x8D, 0x19, 0x02, 0x0D, 0x8C, 0x77, 0x01, 0x01
};

static const unsigned char SEQ_SCAN_TIMMING_2_F6[] = {
	0xF6,
	0x00, 0x30, 0x04, 0x03, 0x00, 0x00, 0x00, 0x0D,
};


static const unsigned char SEQ_ERROR_FLAG_ON[] = {
	0xE7,
	0xED, 0xC7, 0x23, 0x63 /* 63 is only SoT Error */
};


static const unsigned char SEQ_AOR_CONTROL[] = {
	0xB2,
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06
};

static const unsigned char SEQ_GAMMA_UPDATE[] = {
	0xF7,
	0x03, 0x00
};

static const unsigned char SEQ_ELVSS_CONDITION_SET[] = {
	0xB6,
	0x28, 0x09
};

static const unsigned char SEQ_ACL_OFF[] = {
	0x55, 0x00,
	0x00
};

static const unsigned char SEQ_SLEEP_OUT[] = {
	0x11,
	0x00, 0x00
};

static const unsigned char SEQ_SLEEP_IN[] = {
	0x10,
	0x00, 0x00
};

static const unsigned char SEQ_DISPLAY_ON[] = {
	0x29,
	0x00,  0x00
};

static const unsigned char SEQ_DISPLAY_OFF[] = {
	0x28,
	0x00,  0x00
};

static const unsigned char SEQ_PSRE_MODE_ON[] = {
	0xB5,
	0x01, 0x67
};

static const unsigned char SEQ_PSRE_MODE_OFF[] = {
	0xB5,
	0x03, 0x67
};

static const unsigned char SEQ_PSRE_MODE_SET2[] = {
	0xE3,
	0xFF, 0xFF, 0xFF, 0xFF
};

static const unsigned char SEQ_PSRE_MODE_SET3[] = {
	0xBC,
	0x43,	0x12,	0x64,	0x64,	0x00,	0x03,	0xE8,	0x00,
	0x00,	0xB2,	0xC2,	0xC2,	0xAC,	0xAE,	0xC1,	0xB5,
	0x00,	0x78,	0xB1,	0x6C,	0x00,	0x00,	0x00,	0x00,
	0x00,	0xB8,	0xB8,	0xA8,	0x90,	0x90,	0xA8,	0xA0,
	0x00,	0x88,	0x90,	0x90,	0x08,	0x00,	0x00,	0x00,
	0x00,	0x55,	0x55,	0x55,	0x5A,	0x3A,	0x28,	0x28,
	0x2A,	0x48,	0x24,	0x2A,	0x05,	0x05,	0x05,	0x05,
	0x05,	0x04
};

static const unsigned char SEQ_LTPS_F2[] = {
	0xF2,
	0x00, 0x04, 0x0C
};

static const unsigned char SEQ_LTPS_B0[] = {
	0xB0,
	0x20, 0x00
};

static const unsigned char SEQ_LTPS_CB[] = {
	0xCB,
	0x02, 0x00
};

static const unsigned char SEQ_LTPS_F7[] = {
	0xF7,
	0x03, 0x00
};

enum {
	ELVSS_STATUS_105,
	ELVSS_STATUS_111,
	ELVSS_STATUS_119,
	ELVSS_STATUS_126,
	ELVSS_STATUS_134,
	ELVSS_STATUS_143,
	ELVSS_STATUS_152,
	ELVSS_STATUS_162,
	ELVSS_STATUS_172,
	ELVSS_STATUS_183,
	ELVSS_STATUS_195,
	ELVSS_STATUS_207,
	ELVSS_STATUS_220,
	ELVSS_STATUS_234,
	ELVSS_STATUS_249,
	ELVSS_STATUS_265,
	ELVSS_STATUS_282,
	ELVSS_STATUS_300,
	ELVSS_STATUS_MAX
};

static const unsigned char elvss_control_set_10_105[] = {
	0xB6, 0x28,
	0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char elvss_control_set_111[] = {
	0xB6, 0x28,
	0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char elvss_control_set_119[] = {
	0xB6, 0x28,
	0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char elvss_control_set_126[] = {
	0xB6, 0x28,
	0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char elvss_control_set_134[] = {
	0xB6, 0x28,
	0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char elvss_control_set_143[] = {
	0xB6, 0x28,
	0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char elvss_control_set_152[] = {
	0xB6, 0x28,
	0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char elvss_control_set_162[] = {
	0xB6, 0x28,
	0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char elvss_control_set_172[] = {
	0xB6, 0x28,
	0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char elvss_control_set_183[] = {
	0xB6, 0x28,
	0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char elvss_control_set_195[] = {
	0xB6, 0x28,
	0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char elvss_control_set_207[] = {
	0xB6, 0x28,
	0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char elvss_control_set_220[] = {
	0xB6, 0x28,
	0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char elvss_control_set_234[] = {
	0xB6, 0x28,
	0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char elvss_control_set_249[] = {
	0xB6, 0x08,
	0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char elvss_control_set_265[] = {
	0xB6, 0x28,
	0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char elvss_control_set_282[] = {
	0xB6, 0x28,
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char elvss_control_set_300[] = {
	0xB6, 0x28,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char *ELVSS_CONTROL_TABLE[ELVSS_STATUS_MAX] = {
	elvss_control_set_10_105,
	elvss_control_set_111,
	elvss_control_set_119,
	elvss_control_set_126,
	elvss_control_set_134,
	elvss_control_set_143,
	elvss_control_set_152,
	elvss_control_set_162,
	elvss_control_set_172,
	elvss_control_set_183,
	elvss_control_set_195,
	elvss_control_set_207,
	elvss_control_set_220,
	elvss_control_set_234,
	elvss_control_set_249,
	elvss_control_set_265,
	elvss_control_set_282,
	elvss_control_set_300
};

enum {
	ACL_STATUS_0P = 0,
	ACL_STATUS_40P,
	ACL_STATUS_40P_RE_MID,
	ACL_STATUS_MAX
};

static const unsigned char acl_cutoff_40[] = {
	0x55, 0x02,
	0x00
};

static const unsigned char acl_cutoff_40_RE_MID[] = {
	0x55, 0x52,
	0x00
};

static const unsigned char *ACL_CUTOFF_TABLE[ACL_STATUS_MAX] = {
	SEQ_ACL_OFF,
	acl_cutoff_40,
	acl_cutoff_40_RE_MID,
};
#endif /* __S6E8FA0_PARAM_H__ */
