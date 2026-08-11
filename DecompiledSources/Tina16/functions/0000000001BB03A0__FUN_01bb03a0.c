/* Ghidra address: 01bb03a0 */
/* Ghidra symbol: FUN_01bb03a0 */


void FUN_01bb03a0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_res18 [4];
  
  if (param_3 < 0x100) {
    iVar1 = 1;
  }
  else if (param_3 < 0x10000) {
    iVar1 = 2;
  }
  else if (param_3 < 0x1000000) {
    iVar1 = 3;
  }
  else {
    iVar1 = 4;
  }
  local_res18[0] = param_3;
  FUN_01bb0040(param_1,param_2,iVar1);
  FUN_01baffe0(param_1,iVar1);
  FUN_00409a70(local_res18,*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0x18),iVar1)
  ;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
  return;
}

