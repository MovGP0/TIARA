/* Ghidra address: 00c03730 */
/* Ghidra symbol: FUN_00c03730 */


void FUN_00c03730(longlong param_1,char param_2,char param_3)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_30 = auStack_58;
  FUN_0065b830(param_1);
  FUN_00bf3750(param_1);
  local_10 = FUN_00bfaa40(param_1);
  iVar1 = *(int *)(param_1 + 0x50c);
  if (local_10 < iVar1) {
    FUN_00bfb1b0(param_1,local_10);
  }
  else if (local_10 < *(int *)(param_1 + 0x4d0) + iVar1) {
    FUN_00bfb1b0(param_1,iVar1);
  }
  else {
    FUN_00bfb1b0(param_1,(local_10 - *(int *)(param_1 + 0x4d0)) + 1);
  }
  local_14 = FUN_00bfaa50(param_1);
  if (param_2 == '\0') {
    iVar1 = *(int *)(param_1 + 0x534);
    if (local_14 < iVar1) {
      FUN_00bfcc50(param_1,local_14);
    }
    else {
      local_18 = *(int *)(param_1 + 0x508);
      local_1c = local_18;
      if (local_18 < 1) {
        local_1c = 1;
      }
      if (iVar1 + local_1c + -1 < local_14) {
        FUN_00bfcc50(param_1,(local_14 - local_18) + 1);
      }
      else {
        FUN_00bfcc50(param_1,iVar1);
      }
    }
  }
  else if (local_14 < *(int *)(param_1 + 0x534) + -1) {
    local_c = *(int *)(param_1 + 0x508) / 2;
    if (local_14 - local_c < 0) {
      FUN_00bfcc50(param_1,1);
    }
    else {
      FUN_00bfcc50(param_1,(local_14 - local_c) + 1);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x508);
    if (*(int *)(param_1 + 0x534) + iVar1 + -2 < local_14) {
      local_c = iVar1 / 2;
      FUN_00bfcc50(param_1,(local_14 - iVar1) + local_c + 1);
    }
    else if (param_3 != '\0') {
      local_c = iVar1 / 2;
      FUN_00bfcc50(param_1,(local_14 - local_c) + 1);
    }
  }
  FUN_00bf28a0(param_1);
  return;
}

