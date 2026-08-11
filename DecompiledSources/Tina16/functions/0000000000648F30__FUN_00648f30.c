/* Ghidra address: 00648f30 */
/* Ghidra symbol: FUN_00648f30 */


void FUN_00648f30(longlong param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_20;
  int iStack_1c;
  int *local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  iVar1 = *param_2;
  if (iVar1 < 0x216) {
    if (iVar1 == 0x215) {
      local_30 = auStack_58;
      FUN_0064a7b0(0);
    }
    else if (iVar1 == 0x200) {
      local_18 = param_2 + 4;
      local_20 = (int)(short)*local_18;
      iStack_1c = (int)*(short *)((longlong)param_2 + 0x12);
      local_10 = CONCAT44(iStack_1c,local_20);
      local_30 = auStack_58;
      thunk_FUN_0415f9d2(DAT_02012310,&local_10);
      FUN_00649f90(&local_10);
    }
    else if (iVar1 == 0x202) {
      local_30 = auStack_58;
      FUN_0064a7b0(1);
    }
    else if (iVar1 == 0x205) {
      if (*(char *)(param_1 + 0x48) == '\0') {
        local_30 = auStack_58;
        FUN_0064a7b0(1);
      }
      else {
        local_30 = auStack_58;
        FUN_0064a7b0(0);
      }
    }
  }
  else if (iVar1 == 0xbd00) {
    if (param_2[2] == 0x11) {
      FUN_00649f90(DAT_02012300 + 0x18);
    }
    else if (param_2[2] == 0x1b) {
      param_2[6] = 1;
      param_2[7] = 0;
      local_30 = auStack_58;
      FUN_0064a7b0(0);
    }
  }
  else if ((iVar1 == 0xbd01) && (*(longlong *)(param_2 + 2) == 0x11)) {
    local_30 = auStack_58;
    FUN_00649f90(DAT_02012300 + 0x18);
  }
  return;
}

