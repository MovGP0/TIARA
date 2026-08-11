/* Ghidra address: 0040f220 */
/* Ghidra symbol: FUN_0040f220 */


undefined8 FUN_0040f220(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (param_2 == 0) {
    local_30 = FUN_0040eb60(param_1,param_3);
  }
  else {
    if (*(short *)(param_1 + 0x2e8) == 0) {
      FUN_0040ea40(param_1);
    }
    if (*(short *)(param_1 + 0x2e8) == 0x4b0) {
      iVar1 = FUN_00414cb0(param_2);
      FUN_0040eb60(param_1,param_3 - iVar1);
      uVar2 = FUN_00416740(param_2);
      local_30 = FUN_0040eaa0(param_1,uVar2,iVar1 * 2);
    }
    else if (DAT_01db9088 == (code *)0x0) {
      FUN_00415dd0(local_20,param_2,*(short *)(param_1 + 0x2e8));
      iVar1 = FUN_00414cd0(local_20[0]);
      FUN_0040eb60(param_1,param_3 - iVar1);
      uVar2 = FUN_00414df0(local_20);
      local_30 = FUN_0040eaa0(param_1,uVar2,iVar1);
    }
    else {
      local_30 = (*DAT_01db9088)(param_1,param_2);
    }
  }
  FUN_004144d0(local_20);
  return local_30;
}

