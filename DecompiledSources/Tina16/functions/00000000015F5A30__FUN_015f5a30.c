/* Ghidra address: 015f5a30 */
/* Ghidra symbol: FUN_015f5a30 */


void FUN_015f5a30(undefined8 param_1,undefined8 param_2,int *param_3,uint *param_4,int *param_5)

{
  int iVar1;
  undefined8 local_res8 [4];
  int local_c;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  *param_4 = 0;
  iVar1 = FUN_015f5740(local_res8[0],param_2,&local_c,param_5,param_4);
  if (iVar1 == 0x10) {
    param_3[0x10] = param_3[0x10] + 1;
    if (local_c == 0x20) {
      *param_4 = *param_4 | 1;
    }
    if (local_c == 0x800) {
      *param_4 = *param_4 | 4;
      *param_4 = *param_4 | 0x10;
    }
    if ((local_c == 0x2000) || (local_c == 0x4000)) {
      *param_4 = *param_4 | 0x10;
    }
    if ((*param_4 & 0x20) != 0) {
      *param_4 = *param_4 | 0x10;
    }
    if (*param_5 != -1) {
      *param_4 = *param_4 | 8;
    }
  }
  else if (iVar1 == 1) {
    *param_3 = *param_3 + 1;
  }
  else if (iVar1 == 2) {
    param_3[4] = param_3[4] + 1;
  }
  else if (iVar1 == 4) {
    param_3[8] = param_3[8] + 1;
  }
  else if (iVar1 == 8) {
    param_3[0xc] = param_3[0xc] + 1;
  }
  else if (iVar1 == 0x20) {
    param_3[0x14] = param_3[0x14] + 1;
  }
  else if (iVar1 == 0x40) {
    param_3[0x18] = param_3[0x18] + 1;
  }
  else if (iVar1 == 0x80) {
    param_3[0x1c] = param_3[0x1c] + 1;
  }
  else if (iVar1 == 0x200) {
    param_3[0x20] = param_3[0x20] + 1;
  }
  FUN_00414480(local_res8);
  return;
}

