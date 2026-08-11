/* Ghidra address: 01bb0040 */
/* Ghidra symbol: FUN_01bb0040 */


void FUN_01bb0040(longlong param_1,ushort param_2,int param_3)

{
  int iVar1;
  ushort local_res10 [4];
  int local_res18 [4];
  
  if (param_2 < 15000) {
    iVar1 = 4;
  }
  else {
    iVar1 = 1;
  }
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if ((iVar1 == 1) && (0xff < param_3)) {
    FUN_00413fb0();
  }
  FUN_01baffe0(param_1,iVar1 + 2);
  FUN_00409a70(local_res10,*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0x18),2);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 2;
  FUN_00409a70(local_res18,*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0x18),iVar1)
  ;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
  return;
}

