/* Ghidra address: 013bccb0 */
/* Ghidra symbol: FUN_013bccb0 */


void FUN_013bccb0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160 [256];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_24 [4];
  char local_20 [4];
  int local_1c [3];
  
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_60 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  FUN_004b84c0(param_2,local_1c,4);
  iVar1 = local_1c[0];
  if (-1 < local_1c[0] + -1) {
    do {
      FUN_004b84c0(param_2,local_20,4);
      if (local_20[0] == '\x01') {
        FUN_004b84c0(param_2,param_3 + 0xd0,8);
      }
      else if (local_20[0] == '\x02') {
        FUN_004b84c0(param_2,param_3 + 0xd8,8);
      }
      else if (local_20[0] == '\x03') {
        FUN_004b84c0(param_2,param_3 + 0xe0,4);
      }
      else if (local_20[0] == '\f') {
        FUN_004b84c0(param_2,param_3 + 0xe4,4);
      }
      else if (local_20[0] == '\b') {
        FUN_004b84c0(param_2,param_3 + 0xe8,4);
      }
      else if (local_20[0] == '\t') {
        FUN_004b84c0(param_2,param_3 + 0xec,4);
      }
      else if (local_20[0] == '\0') {
        FUN_004b84c0(param_2,local_24,4);
        *param_3 = local_24[0];
      }
      else if (local_20[0] == '\x04') {
        FUN_01b20f00(&local_60,param_2);
        FUN_004168b0(&local_50,local_60);
        FUN_00416910(local_160,local_50,0xff);
        FUN_00415020(param_3 + 1,local_160,0x28);
      }
      else if (local_20[0] == '\x05') {
        FUN_01b20f00(&local_168,param_2);
        FUN_004168b0(&local_50,local_168);
        FUN_00416910(local_160,local_50,0xff);
        FUN_00415020(param_3 + 0x2a,local_160,0x28);
      }
      else if (local_20[0] == '\x06') {
        FUN_01b20f00(&local_170,param_2);
        FUN_004168b0(&local_50,local_170);
        FUN_00416910(local_160,local_50,0xff);
        FUN_00415020(param_3 + 0x53,local_160,0x28);
      }
      else if (local_20[0] == '\a') {
        FUN_01b20f00(&local_178,param_2);
        FUN_004168b0(&local_50,local_178);
        FUN_00416910(local_160,local_50,0xff);
        FUN_00415020(param_3 + 0x7c,local_160,0x28);
      }
      else if (local_20[0] == '\n') {
        FUN_01b20f00(&local_180,param_2);
        FUN_004168b0(&local_50,local_180);
        FUN_00416910(local_160,local_50,0xff);
        FUN_00415020(param_3 + 0xf4,local_160,0x28);
      }
      else if (local_20[0] == '\v') {
        FUN_01b20f00(&local_188,param_2);
        FUN_004168b0(&local_50,local_188);
        FUN_00416910(local_160,local_50,0xff);
        FUN_00415020(param_3 + 0xa5,local_160,0x28);
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_004145c0(&local_188,5);
  FUN_00414520(&local_60);
  FUN_004144d0(&local_58);
  FUN_00414560(&local_50,5);
  return;
}

