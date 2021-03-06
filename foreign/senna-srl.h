#ifndef SENNA_SRL_H
#define SENNA_SRL_H

typedef enum {
  SRL_O,
  SRL_S_V,
  SRL_S_A1,
  SRL_B_A0,
  SRL_E_A0,
  SRL_B_A1,
  SRL_E_A1,
  SRL_B_AM_LOC,
  SRL_I_AM_LOC,
  SRL_E_AM_LOC,
  SRL_I_A1,
  SRL_I_A0,
  SRL_S_AM_MNR,
  SRL_B_A2,
  SRL_I_A2,
  SRL_E_A2,
  SRL_S_A0,
  SRL_S_A3,
  SRL_B_AM_MNR,
  SRL_I_AM_MNR,
  SRL_E_AM_MNR,
  SRL_B_AM_TMP,
  SRL_E_AM_TMP,
  SRL_B_A4,
  SRL_I_A4,
  SRL_E_A4,
  SRL_B_A3,
  SRL_I_A3,
  SRL_E_A3,
  SRL_S_AM_NEG,
  SRL_S_AM_MOD,
  SRL_I_AM_TMP,
  SRL_S_R_A0,
  SRL_S_AM_DIS,
  SRL_S_AM_EXT,
  SRL_S_AM_TMP,
  SRL_S_AM_ADV,
  SRL_B_AM_ADV,
  SRL_I_AM_ADV,
  SRL_E_AM_ADV,
  SRL_B_AM_PNC,
  SRL_I_AM_PNC,
  SRL_E_AM_PNC,
  SRL_B_AM_DIS,
  SRL_E_AM_DIS,
  SRL_S_R_A1,
  SRL_B_C_A1,
  SRL_I_C_A1,
  SRL_E_C_A1,
  SRL_S_A2,
  SRL_S_R_AM_TMP,
  SRL_B_V,
  SRL_E_V,
  SRL_S_C_V,
  SRL_B_AM_DIR,
  SRL_I_AM_DIR,
  SRL_E_AM_DIR,
  SRL_S_R_A2,
  SRL_B_AM_PRD,
  SRL_I_AM_PRD,
  SRL_E_AM_PRD,
  SRL_B_R_A2,
  SRL_E_R_A2,
  SRL_S_R_AM_PNC,
  SRL_B_C_AM_MNR,
  SRL_I_C_AM_MNR,
  SRL_E_C_AM_MNR,
  SRL_B_R_AM_TMP,
  SRL_E_R_AM_TMP,
  SRL_S_AM_CAU,
  SRL_S_AM_LOC,
  SRL_S_C_A1,
  SRL_S_AM_DIR,
  SRL_S_R_A3,
  SRL_S_R_AM_MNR,
  SRL_B_AM_CAU,
  SRL_I_AM_CAU,
  SRL_E_AM_CAU,
  SRL_B_AM_EXT,
  SRL_I_AM_EXT,
  SRL_E_AM_EXT,
  SRL_S_A4,
  SRL_B_C_A4,
  SRL_I_C_A4,
  SRL_E_C_A4,
  SRL_I_AM_DIS,
  SRL_B_R_A1,
  SRL_I_R_A1,
  SRL_E_R_A1,
  SRL_S_R_AM_LOC,
  SRL_B_R_A0,
  SRL_I_R_A0,
  SRL_E_R_A0,
  SRL_B_C_A0,
  SRL_I_C_A0,
  SRL_E_C_A0,
  SRL_B_C_A2,
  SRL_I_C_A2,
  SRL_E_C_A2,
  SRL_S_C_A2,
  SRL_B_R_AM_EXT,
  SRL_E_R_AM_EXT,
  SRL_S_A5,
  SRL_B_R_AM_MNR,
  SRL_E_R_AM_MNR,
  SRL_I_R_A2,
  SRL_B_C_AM_LOC,
  SRL_E_C_AM_LOC,
  SRL_B_R_AM_LOC,
  SRL_E_R_AM_LOC,
  SRL_I_C_AM_LOC,
  SRL_B_C_A3,
  SRL_I_C_A3,
  SRL_E_C_A3,
  SRL_B_AM_NEG,
  SRL_E_AM_NEG,
  SRL_S_R_AM_CAU,
  SRL_S_AM_PRD,
  SRL_S_R_A4,
  SRL_I_R_AM_MNR,
  SRL_B_C_AM_ADV,
  SRL_I_C_AM_ADV,
  SRL_E_C_AM_ADV,
  SRL_B_R_AM_ADV,
  SRL_E_R_AM_ADV,
  SRL_B_R_A3,
  SRL_E_R_A3,
  SRL_S_AM_REC,
  SRL_B_AM_TM,
  SRL_I_AM_TM,
  SRL_E_AM_TM,
  SRL_B_AM,
  SRL_I_AM,
  SRL_E_AM,
  SRL_B_C_A5,
  SRL_I_C_A5,
  SRL_E_C_A5,
  SRL_B_C_AM_TMP,
  SRL_I_C_AM_TMP,
  SRL_E_C_AM_TMP,
  SRL_B_AA,
  SRL_I_AA,
  SRL_E_AA,
  SRL_S_C_A0,
  SRL_S_R_AA,
  SRL_I_R_AM_ADV,
  SRL_S_R_AM_EXT,
  SRL_S_AA,
  SRL_B_A5,
  SRL_E_A5,
  SRL_B_AM_MOD,
  SRL_I_AM_MOD,
  SRL_E_AM_MOD,
  SRL_S_AM_PNC,
  SRL_I_R_AM_TMP,
  SRL_S_C_AM_EXT,
  SRL_I_AM_NEG,
  SRL_B_AM_REC,
  SRL_E_AM_REC,
  SRL_S_C_AM_NEG,
  SRL_B_C_AM_EXT,
  SRL_I_C_AM_EXT,
  SRL_E_C_AM_EXT,
  SRL_I_A5,
  SRL_B_C_V,
  SRL_I_C_V,
  SRL_E_C_V,
  SRL_S_C_AM_DIS,
  SRL_B_C_AM_DIS,
  SRL_I_C_AM_DIS,
  SRL_E_C_AM_DIS,
  SRL_B_C_AM_CAU,
  SRL_I_C_AM_CAU,
  SRL_E_C_AM_CAU,
  SRL_B_R_AM_PNC,
  SRL_E_R_AM_PNC,
  SRL_B_R_AM_DIR,
  SRL_E_R_AM_DIR,
  SRL_I_V,
  SRL_B_C_AM_DIR,
  SRL_E_C_AM_DIR,
  SRL_B_C_AM_PNC,
  SRL_I_C_AM_PNC,
  SRL_E_C_AM_PNC,
  SRL_B_R_A4,
  SRL_E_R_A4,
  SRL_PADDING,
  SRL_UNAVAILABLE
} senna_srl_tag_t;

#endif
