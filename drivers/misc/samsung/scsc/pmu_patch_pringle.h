/****************************************************************************
 *
 * Copyright (c) 2014 - 2020 Samsung Electronics Co., Ltd. All rights reserved
 *
 ****************************************************************************/

#ifndef PMU_PATCH_H__
#define PMU_PATCH_H__

/* Attached array contains the replacement PMU boot code which should
 * be programmed using the CBUS during the config phase.
 */
uint32_t ka_patch[] = {
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x60008000,
	0x60000235,
	0x60000265,
	0x60000269,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x6000026d,
	0x00000000,
	0x00000000,
	0x60000271,
	0x60000275,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x60000100,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x47804802,
	0xffc2f000,
	0x4770e010,
	0x60000245,
	0x46012000,
	0x46034602,
	0x46054604,
	0x46074606,
	0x46814680,
	0x46834682,
	0x47704684,
	0xe7fdbf30,
	0x46c0e7fc,
	0x46c0e7fa,
	0x46c0e7f8,
	0x46c0e7f6,
	0x46c0e7f4,
	0x200923a0,
	0x009b4902,
	0x54c84a02,
	0x46c04770,
	0x50000000,
	0x50000280,
	0x4b074906,
	0xd0052800,
	0x7c404806,
	0xd0012800,
	0xe0002001,
	0x54c82000,
	0x46c04770,
	0x50000000,
	0x00000281,
	0x60000204,
	0x33fc4b04,
	0x31016e99,
	0x6e991808,
	0xd4fc1a09,
	0x46c04770,
	0x50000000,
	0x28003801,
	0x4770d1fc,
	0x2601b570,
	0x6a6b4d3b,
	0x002c6aa9,
	0x08db404b,
	0x42332101,
	0x2308d1f7,
	0xd0292800,
	0x42196a69,
	0x6a69d167,
	0x62694319,
	0x42196aa1,
	0x2023d0fc,
	0xffd6f7ff,
	0x20020023,
	0x68193388,
	0x60194381,
	0x18006819,
	0x60194301,
	0x7b194b2b,
	0x29014b2b,
	0x0020d104,
	0x6c8130fc,
	0x64814019,
	0x31fc0021,
	0x40036d88,
	0x21e0658b,
	0x438b6ba3,
	0xe04063a3,
	0x42186a68,
	0x002bd03d,
	0x6c1833fc,
	0x64184308,
	0x42086c58,
	0x2308d0fc,
	0x43996a61,
	0x6aa06261,
	0x42182108,
	0x4b18d1fb,
	0x2b017b1b,
	0x0023d020,
	0x33fc2580,
	0x016d6c98,
	0x64984328,
	0x43296d99,
	0x00216599,
	0x31882504,
	0x43a86808,
	0x68086008,
	0x43283d02,
	0x20e06008,
	0x43016ba1,
	0x6c1963a1,
	0x438138df,
	0x6c196419,
	0x43813007,
	0xe0086419,
	0x33fc0023,
	0x43086c18,
	0x6c586418,
	0xd0fc4208,
	0xbd70e7d5,
	0x50000000,
	0x60000204,
	0xffffefff,
	0x4b0d2100,
	0x681cb510,
	0x681c7021,
	0x681c7061,
	0x681c70a1,
	0x681c70e1,
	0x681c7121,
	0x681c7161,
	0x681c71a1,
	0x681c71e1,
	0x42887221,
	0x681bd002,
	0x72193101,
	0x46c0bd10,
	0x60000204,
	0x4b0d2100,
	0x681cb510,
	0x681c72a1,
	0x681c72e1,
	0x681c7321,
	0x681c7361,
	0x681c73a1,
	0x681c73e1,
	0x681c7421,
	0x681c7461,
	0x428874a1,
	0x681bd002,
	0x74993101,
	0x46c0bd10,
	0x60000204,
	0x4d1db5f8,
	0x002920c0,
	0x2610002c,
	0x68cb31fc,
	0x43030040,
	0x60cb34e4,
	0x387f6823,
	0x38ff4333,
	0xf7ff6023,
	0x2108ff2d,
	0x20a06823,
	0x6023430b,
	0x33f8002b,
	0x00406819,
	0x60194301,
	0x38a06819,
	0x20004301,
	0x21046019,
	0x4b0c2701,
	0x68237398,
	0x6023430b,
	0x39026823,
	0x6023433b,
	0x430b6823,
	0xf7ff6023,
	0x21c0ffaf,
	0x00494b05,
	0x6ceb505e,
	0x43b30038,
	0xbdf864eb,
	0x50000000,
	0x60000204,
	0xe000e000,
	0x7013230b,
	0x47184b00,
	0x600010c1,
	0x7013230b,
	0x47184b00,
	0x6000079d,
	0x7013230b,
	0x47184b00,
	0x60000ff9,
	0x7013230b,
	0x47184b00,
	0x60000bd1,
	0x2300b510,
	0x20034905,
	0xf0002240,
	0x23c0ff37,
	0x49032008,
	0x50c8005b,
	0x46c0bd10,
	0x60000ac5,
	0xe000e000,
	0x2300b510,
	0x22404904,
	0xf0002005,
	0x2120ff25,
	0x33fc4b02,
	0xbd106059,
	0x60000985,
	0xe000e000,
	0x4b51b5f7,
	0x93017ad9,
	0xd0002902,
	0x4b4fe09b,
	0xd0052800,
	0x24010018,
	0x6c0130fc,
	0x640143a1,
	0x20804c4b,
	0x001c46a4,
	0x01009901,
	0x34987c09,
	0xd1382901,
	0x2540001f,
	0x37cc6821,
	0x60214301,
	0x43296839,
	0x27806039,
	0x007f6821,
	0x001f4339,
	0x37a06021,
	0x000e6839,
	0x4031493e,
	0x00184301,
	0x27196039,
	0x680130a8,
	0x0a894e3b,
	0x43390289,
	0x00196001,
	0x6808319c,
	0x20c04006,
	0x43060380,
	0x0019600e,
	0x31d02000,
	0x00186008,
	0x30c42680,
	0x33b86801,
	0x60014331,
	0x48306819,
	0x46604001,
	0x60184308,
	0x6821e023,
	0x43082540,
	0x00186020,
	0x680130cc,
	0x43294e28,
	0x00196001,
	0x6808319c,
	0x20c04006,
	0x43060380,
	0x600e0018,
	0x30c42680,
	0x33b86801,
	0x600143b1,
	0x48206819,
	0x46604001,
	0x21804308,
	0x68236018,
	0x430b0049,
	0x68236023,
	0x43ab201e,
	0xf7ff6023,
	0x6823fe3b,
	0x431d200a,
	0xf7ff6025,
	0x4c11fe35,
	0x00212001,
	0x680b3188,
	0x43830025,
	0x210c600b,
	0x682b358c,
	0x3904438b,
	0x602b430b,
	0xfe24f7ff,
	0x682b2198,
	0x430b0049,
	0x6ba3602b,
	0x39ff392e,
	0x3901438b,
	0x63a3430b,
	0x99012300,
	0xbdf772cb,
	0x60000204,
	0x50000000,
	0x00001001,
	0xffffe7ff,
	0xff83ffff,
	0xffffef1e,
	0x4c34b5f7,
	0xb2c07d20,
	0xff4af7ff,
	0x94017d23,
	0xd0052b00,
	0xf7ff2001,
	0x2300fe0b,
	0x750b9901,
	0x4c2d2324,
	0x43196a61,
	0x21a96261,
	0x58610089,
	0xd1062901,
	0x6aa13b04,
	0xd0fc4219,
	0x00c020fa,
	0x6aa1e004,
	0x29244019,
	0x2023d1fb,
	0x26010025,
	0x35e42702,
	0xfddcf7ff,
	0xf7ff2001,
	0x682bfdc5,
	0x43b32004,
	0xf7ff602b,
	0x682bfddf,
	0x43bb2008,
	0xf7ff602b,
	0x0021fdd9,
	0x31f820b0,
	0x4383680b,
	0x2104600b,
	0x0030682b,
	0x0021438b,
	0x3190602b,
	0x34fc680b,
	0x600f431f,
	0xf7ff2710,
	0x2108fe67,
	0x00304b0e,
	0x605f33fc,
	0x438b682b,
	0xf7ff602b,
	0x682bfdaf,
	0x43bb0030,
	0xf7ff602b,
	0x2180fda9,
	0x438b68e3,
	0xf7ff60e3,
	0x9b01fedb,
	0x739e0030,
	0x46c0bdfe,
	0x60000204,
	0x50000000,
	0xe000e000,
	0x4b03b510,
	0x2b007b9b,
	0xf7ffd101,
	0xbd10fd71,
	0x60000204,
	0x2100230b,
	0xb5102001,
	0x4b067013,
	0x67594a06,
	0x43016b59,
	0x4b056359,
	0x2b007b1b,
	0xf7ffd101,
	0xbd10ffe5,
	0x50000000,
	0x50000280,
	0x60000204,
	0xb5f7230b,
	0x4b367013,
	0x7ca1681c,
	0xd1522902,
	0xb2c97aa1,
	0xd03a2907,
	0xd0402908,
	0xd1462901,
	0xb2c97b99,
	0xd1422901,
	0x7ae57b20,
	0x43280200,
	0x6a186218,
	0xd01e4208,
	0x6e684d2a,
	0x46847ba6,
	0x7c207be7,
	0x9000023f,
	0x90017c60,
	0x04009800,
	0x43064338,
	0x06079801,
	0x629e433e,
	0x420869d8,
	0x4660d006,
	0x6a9b6a59,
	0x1a1b1a09,
	0xd9024299,
	0x6a9b4b1b,
	0x4b1a66ab,
	0x6a1969d8,
	0x48194301,
	0x21016581,
	0x42087b60,
	0x7519d011,
	0x7ae0e00f,
	0x42433801,
	0xb2c04158,
	0xfd38f7ff,
	0x2001e007,
	0x40417c59,
	0x7c587459,
	0xf7ffb2c0,
	0x2300fd0b,
	0x330172a3,
	0x241074a3,
	0x4a0b480a,
	0x6cc36cc1,
	0x009b43a1,
	0x430b4023,
	0x4b0564c3,
	0x29007b19,
	0x7b9bd104,
	0xd1012b00,
	0xfce8f7ff,
	0x46c0bdf7,
	0x60000204,
	0x50000000,
	0x50000280,
	0x490423a9,
	0x58c8009b,
	0x42433801,
	0xb2c04158,
	0x46c04770,
	0x50000000,
	0x4b04212e,
	0x40016a58,
	0x62582000,
	0x42086a98,
	0x4770d1fc,
	0x50000000,
	0xb5702101,
	0x20084c11,
	0x25046ba3,
	0x63a3430b,
	0x33e00023,
	0x43016819,
	0x00216019,
	0x680831e4,
	0x60084328,
	0x20006819,
	0x60194329,
	0xfce0f7ff,
	0x4b072100,
	0xf7ff54e1,
	0x2140ffd7,
	0x68233498,
	0x6023430b,
	0x393e4b03,
	0xbd7072d9,
	0x50000000,
	0x00000281,
	0x60000204,
	0x4b0fb510,
	0x29007b19,
	0x3102d103,
	0x39017359,
	0x2100e001,
	0x7b987359,
	0xd1042800,
	0x73d83002,
	0xd1032900,
	0x2100e00a,
	0xe00773d9,
	0x29027ad9,
	0x7adbd004,
	0xd0012b02,
	0xffb6f7ff,
	0x46c0bd10,
	0x60000204,
	0xb510230b,
	0x4b0e7013,
	0x07496d19,
	0x2020d516,
	0x31fc490c,
	0x6d196048,
	0x4301381f,
	0x21026519,
	0x42086d18,
	0xf7ffd0fc,
	0xf7fffd51,
	0x4b06ffc7,
	0x7b1b4a06,
	0xd1012b00,
	0xfee4f7ff,
	0x46c0bd10,
	0x50000000,
	0xe000e000,
	0x60000204,
	0x50000280,
	0x33fc4b04,
	0x43016c19,
	0x6c596419,
	0x42884001,
	0x4770d1fb,
	0x50000000,
	0x4d30b5f8,
	0x002c2703,
	0x34fc2101,
	0x200168e3,
	0x430b43bb,
	0x60e30029,
	0x680b3194,
	0x43832620,
	0x600b300f,
	0xffe0f7ff,
	0x48276821,
	0x60214301,
	0x68630029,
	0x430331f0,
	0x60632008,
	0x4303680b,
	0x002b600b,
	0x681833e0,
	0x60184330,
	0x468468e0,
	0x481e4666,
	0x26804030,
	0x433000b6,
	0x20e060e0,
	0x612002c0,
	0x30f80028,
	0x3ef76804,
	0x43343eff,
	0x68046004,
	0x43343e05,
	0x24046004,
	0x43206808,
	0x68086008,
	0x60084338,
	0x68192010,
	0x60194301,
	0x38086819,
	0x60194301,
	0x20006819,
	0x60194321,
	0x430f6819,
	0xf7ff601f,
	0x2100fca1,
	0x20014b08,
	0x23c07319,
	0x005b4907,
	0x212050cc,
	0x438b6ceb,
	0xbdf864eb,
	0x50000000,
	0x00015555,
	0xfffffdf3,
	0x60000204,
	0xe000e000,
	0x200823c0,
	0x005b4906,
	0x50c8b510,
	0xff8cf7ff,
	0x4a054b04,
	0x2b007b1b,
	0xf7ffd101,
	0xbd10fe53,
	0xe000e000,
	0x60000204,
	0x50000280,
	0x4b34b5f7,
	0x681c2500,
	0x29027a21,
	0x7821d147,
	0x2901b2c9,
	0x2907d009,
	0x7860d13d,
	0x42433801,
	0xb2c04158,
	0xfbe0f7ff,
	0x7b19e035,
	0x2901b2c9,
	0x78a0d131,
	0x02007865,
	0x61d84328,
	0x420869d8,
	0x4d25d01e,
	0x79266e68,
	0x79674684,
	0x023f79a0,
	0x79e09000,
	0x98009001,
	0x43380400,
	0x98014306,
	0x433e0607,
	0x6a18625e,
	0xd0064208,
	0x6a994660,
	0x1a096a5b,
	0x42991a1b,
	0x4b16d902,
	0x66ab6a5b,
	0x4b142501,
	0x6a1969d8,
	0x48134301,
	0x78e16581,
	0xd0004229,
	0x230074dd,
	0x33017023,
	0x24207223,
	0x6cc1480d,
	0x43a16cc3,
	0x4023009b,
	0x64c3430b,
	0xd0012d00,
	0xff22f7ff,
	0xfecaf7ff,
	0x4a074b05,
	0x29007b19,
	0x7b9bd104,
	0xd1012b00,
	0xfb5cf7ff,
	0x46c0bdf7,
	0x60000204,
	0x50000000,
	0x50000280,
	0x4c19b570,
	0x07db6ae3,
	0x6a63d52d,
	0xd50d071b,
	0x21070023,
	0x69d833fc,
	0x61d84308,
	0x6a190008,
	0x29074001,
	0x69d8d1fb,
	0x61d94041,
	0xf7ff2007,
	0x0023fee9,
	0x33fc2080,
	0x00c06d99,
	0x20014301,
	0x6ddd6599,
	0x42052101,
	0x6d9dd1fb,
	0x40284807,
	0x6b236598,
	0x6323430b,
	0x420b6ae3,
	0x2101d1fc,
	0x438b6b23,
	0xbd706323,
	0x50000000,
	0xfffffbff,
	0x33fc4b04,
	0x43816c19,
	0x6c596419,
	0xd1fc4201,
	0x46c04770,
	0x50000000,
	0x4d7db5f8,
	0x002b2480,
	0x6c9833fc,
	0x43200164,
	0x6cd96498,
	0x43212001,
	0xf7ff64d9,
	0x2301fb21,
	0x002f4c76,
	0x00187ce1,
	0xd1012900,
	0xb2c07d20,
	0xf7ff4018,
	0x7ce3fc5d,
	0xd1022b00,
	0x2b007d23,
	0x2001d005,
	0xfb1cf7ff,
	0x74e32300,
	0x20107523,
	0xffcaf7ff,
	0x20010039,
	0x680b3190,
	0x600b4303,
	0x6a792326,
	0x62794319,
	0x008921a9,
	0x42815879,
	0x3b06d106,
	0x42196ab9,
	0x20fad0fc,
	0xe00400c0,
	0x40196ab9,
	0xd1fb2926,
	0x003c2023,
	0xfae8f7ff,
	0x34e02104,
	0x20016823,
	0x6023438b,
	0xfaccf7ff,
	0x003d2101,
	0x35e46823,
	0x6023438b,
	0x2004682b,
	0x602b438b,
	0xfae0f7ff,
	0x68232102,
	0x438b003e,
	0x682b6023,
	0x438b2008,
	0xf7ff602b,
	0x21b0fad5,
	0x683336f8,
	0x438b2004,
	0x68236033,
	0x438b39a8,
	0x682b6023,
	0x438b3904,
	0x6823602b,
	0x438b310c,
	0x4b436023,
	0x681b390f,
	0x4941438b,
	0xf7ff600b,
	0x2102fabb,
	0x20044b3e,
	0x438b681b,
	0x600b493c,
	0xfab2f7ff,
	0x4b3a2104,
	0x681b2004,
	0x4938438b,
	0x21b5600b,
	0x438b6833,
	0x003e6033,
	0xfaa4f7ff,
	0x3694213b,
	0x20026833,
	0x3920438b,
	0x6033430b,
	0xfa9af7ff,
	0x68332104,
	0x430b2002,
	0x60330039,
	0x680b3190,
	0x38014303,
	0xf7ff600b,
	0x2001fb11,
	0xfb2cf7ff,
	0x68332101,
	0x438b2002,
	0xf7ff6033,
	0x2120fa83,
	0x20026823,
	0x6023438b,
	0x4b20003c,
	0x681b3918,
	0x438b34fc,
	0x600b491d,
	0x4b1d6821,
	0x6023400b,
	0xfa70f7ff,
	0x4b1b2104,
	0x33fc2001,
	0x310c6059,
	0x6ca16059,
	0x40194b18,
	0x6ce164a1,
	0x64e3400b,
	0xfa54f7ff,
	0x68332101,
	0x6033430b,
	0x310268e3,
	0x60e3438b,
	0x3105682b,
	0x602b438b,
	0x3108682b,
	0x602b438b,
	0x317068e3,
	0x60e3438b,
	0xfb64f7ff,
	0xfb74f7ff,
	0x4b042101,
	0x73192001,
	0x73992101,
	0x46c0bdf8,
	0x50000000,
	0x60000204,
	0x500000f0,
	0xfffeaaaa,
	0xe000e000,
	0xffffefff,
	0x4c5eb5f8,
	0x00232580,
	0x6c9833fc,
	0x4328016d,
	0x6cd96498,
	0x43292001,
	0xf7ff64d9,
	0x4d58fa19,
	0xb2c07ce8,
	0xfb5cf7ff,
	0x2b007ceb,
	0x2001d004,
	0xfa1ef7ff,
	0x74eb2300,
	0xf7ff2010,
	0x0021fecd,
	0x31902001,
	0x4303680b,
	0x2322600b,
	0x43196a61,
	0x21a96261,
	0x58610089,
	0xd1064281,
	0x6aa13b02,
	0xd0fc4219,
	0x00c020fa,
	0x6aa1e004,
	0x29224019,
	0x2023d1fb,
	0xf7ff0025,
	0x2104f9eb,
	0x682b35e0,
	0x438b2001,
	0xf7ff602b,
	0x2101f9cf,
	0x2004682b,
	0x602b438b,
	0xf9e8f7ff,
	0x682b2102,
	0x438b2008,
	0xf7ff602b,
	0x2108f9e1,
	0x682b0027,
	0x438b37f0,
	0x682b602b,
	0x438b1849,
	0x683b602b,
	0x438b390f,
	0x603b2004,
	0xf9d0f7ff,
	0x683b2102,
	0x438b2004,
	0xf7ff603b,
	0x2104f9c9,
	0x2005683b,
	0x0021438b,
	0x31f8603b,
	0x0026680b,
	0x38014383,
	0xf7ff600b,
	0x213bf9bb,
	0x68333694,
	0x438b2002,
	0x430b3920,
	0xf7ff6033,
	0x2104f9b1,
	0x20016833,
	0x6033430b,
	0xfa2ef7ff,
	0x4b1b2104,
	0x33fc2002,
	0x68336059,
	0x438b3903,
	0xf7ff6033,
	0x2120f99f,
	0x34fc682b,
	0x602b438b,
	0x3918683b,
	0x603b438b,
	0x4b126821,
	0x400b2002,
	0xf7ff6023,
	0x6ca1f98f,
	0x20014b0f,
	0x64a14019,
	0x400b6ce1,
	0xf7ff64e3,
	0x2101f979,
	0x430b6833,
	0x68e36033,
	0x438b3102,
	0xf7ff60e3,
	0x2101fa95,
	0x20014b02,
	0xbdf87319,
	0x50000000,
	0x60000204,
	0xe000e000,
	0xfffeaaaa,
	0xffffefff,
	0x4d2eb570,
	0x33fc002b,
	0x23016ed8,
	0x28043801,
	0x4c2bd838,
	0xfa18f000,
	0x22110a03,
	0x7b21002b,
	0x29002301,
	0xf7ffd12e,
	0xe028ff23,
	0x23017ba1,
	0xd1272900,
	0xfb3cf7ff,
	0x7b23e021,
	0xd1052b00,
	0x2b007ba3,
	0xf7ffd102,
	0xe018fe0b,
	0x2b007b23,
	0x7ba3d0e9,
	0xd0ed2b00,
	0xe0132300,
	0x7b262301,
	0x429eb2f6,
	0xf7ffd10e,
	0x74e6fcc5,
	0x2301e007,
	0xb2f67ba6,
	0xd105429e,
	0xf9eef7ff,
	0x23017526,
	0xb2c34058,
	0x31fc0029,
	0x2310670b,
	0x43196a69,
	0x6aa96269,
	0xd0fc4219,
	0x6a6b2110,
	0x626b438b,
	0xfc52f7ff,
	0x4a074b06,
	0x29007b19,
	0x7b9bd104,
	0xd1012b00,
	0xf8e4f7ff,
	0x46c0bd70,
	0x50000000,
	0x60000204,
	0x50000280,
	0xb5f7230b,
	0x4d362701,
	0x6e2c7013,
	0x48356d6b,
	0x656b433b,
	0xb2e16803,
	0x68017599,
	0xb2db0a23,
	0x69c375cb,
	0x1e594023,
	0x6a01418b,
	0x4021b2db,
	0x41b11e4e,
	0xb2c99301,
	0xd027423c,
	0x69c36e6e,
	0xd00f2b00,
	0x1af36a43,
	0x69c3d404,
	0x403b4023,
	0xe0079301,
	0x2f006a07,
	0x6a87d004,
	0xd4011bf7,
	0x66a86a40,
	0x6a07481f,
	0xd00f2f00,
	0x1bf76a87,
	0x6a01d404,
	0x2101400c,
	0xe0074021,
	0x2c0069c4,
	0x6a44d004,
	0xd4011b36,
	0x66a86a40,
	0x4c159b01,
	0xd0102b00,
	0x29007b23,
	0x2b00d015,
	0x7ba3d105,
	0xd1022b00,
	0xfd78f7ff,
	0x7b23e00f,
	0xd1042b00,
	0xfe7af7ff,
	0x2900e009,
	0x7ba3d007,
	0xd1042b00,
	0xfa92f7ff,
	0x2b00e001,
	0x7b23d0f2,
	0x2b004a06,
	0x7ba3d104,
	0xd1012b00,
	0xf86ef7ff,
	0x46c0bdf7,
	0x50000000,
	0x60000204,
	0x50000280,
	0x2300b510,
	0x49022240,
	0xf0002006,
	0xbd10f8e3,
	0x600004ed,
	0xb672b5f7,
	0x210b23a0,
	0x009b4d46,
	0x4b4654e9,
	0x68194e46,
	0x4a474b46,
	0xf3bf50f1,
	0x24c28f4f,
	0x00a42300,
	0x94000018,
	0x220e4943,
	0xf8f6f000,
	0x23009400,
	0x20014941,
	0xf0002207,
	0x2398f8ef,
	0x9300015b,
	0x2300493e,
	0x221a2002,
	0xf8e6f000,
	0x493d4b3c,
	0x20039300,
	0x221a2300,
	0xf8def000,
	0xf0002001,
	0x23d9f895,
	0x4c382701,
	0x2100011b,
	0x0020222c,
	0xf00050f7,
	0x2100f90d,
	0x48342240,
	0xf908f000,
	0x60234b32,
	0x68212300,
	0x6821724b,
	0x74e774cb,
	0x74677527,
	0x7c237423,
	0xd10842bb,
	0x4b2c2108,
	0x6bab63eb,
	0x63ab438b,
	0x18496bab,
	0x2110e005,
	0x438b6bab,
	0x6bab63ab,
	0x430b3908,
	0xf7ff63ab,
	0x2300ff93,
	0x200d4923,
	0xf0002240,
	0x2300f877,
	0x00184921,
	0xf0002240,
	0x25c0f871,
	0x491f2301,
	0x22402002,
	0xf86af000,
	0x006d2004,
	0x491c2301,
	0x51702240,
	0xf862f000,
	0x22402310,
	0x49195173,
	0x200c2300,
	0xf85af000,
	0x2b027ae3,
	0xf7ffd001,
	0x4a07fb09,
	0xffcef7fe,
	0xbf30b662,
	0x46c0e7fd,
	0x50000000,
	0x60000200,
	0xe000e000,
	0x00000d08,
	0x50000280,
	0x60000000,
	0x60000000,
	0x50000000,
	0x00001305,
	0x58000000,
	0x60000204,
	0x60000000,
	0x03555555,
	0x600004f9,
	0x600004e1,
	0x60000af1,
	0x600007cd,
	0x600004d5,
	0xb5100003,
	0x4c053310,
	0x5119009b,
	0x18184b04,
	0x00db2380,
	0x700218c0,
	0x46c0bd10,
	0x60000100,
	0xe000e000,
	0x0004b513,
	0xf0002004,
	0x2c00f85d,
	0x4b05d101,
	0x4b05e000,
	0x22079300,
	0x49042300,
	0xf0002004,
	0xbd13f835,
	0x00001308,
	0x00001008,
	0x60000100,
	0x0004b5f8,
	0x000e2000,
	0x001d0017,
	0xffe0f7ff,
	0x49100023,
	0x009b3310,
	0x2180505e,
	0x00c94e0e,
	0x185b1933,
	0x701f2001,
	0xffd2f7ff,
	0x09630031,
	0xd0072d00,
	0x2501201f,
	0x40854020,
	0x30a00018,
	0x51850080,
	0x4004201f,
	0x40a0381e,
	0x009b3340,
	0xbdf850c8,
	0x60000100,
	0xe000e000,
	0x2410b510,
	0x43084321,
	0x49094c08,
	0xf3bf5060,
	0x20018f4f,
	0x021b9902,
	0x43010409,
	0x0051430b,
	0x4904430b,
	0xf3bf5063,
	0xbd108f6f,
	0xe000e000,
	0x00000d98,
	0x00000d9c,
	0x49074b06,
	0x21005058,
	0x50194806,
	0x8f4ff3bf,
	0x50194805,
	0x8f6ff3bf,
	0x46c04770,
	0xe000e000,
	0x00000d94,
	0x00000d98,
	0x00000d9c,
	0x4671b402,
	0x00490849,
	0x00495c09,
	0xbc02448e,
	0x46c04770,
	0x18820003,
	0xd0024293,
	0x33017019,
	0x4770e7fa
};
#endif /* PMU_PATCH */