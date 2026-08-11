/* Ghidra address: 013a7ce0 */
/* Ghidra symbol: FUN_013a7ce0 */


undefined8 FUN_013a7ce0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  iVar1 = FUN_004170c0(&LAB_013a7dc8,*(undefined8 *)(param_1 + 0xe8),1);
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0xe8) + -4);
  }
  FUN_00416dc0(&local_18,*(undefined8 *)(param_1 + 0xe8),iVar1 + 1,iVar2 - iVar1);
  FUN_0043ea00(&local_10,local_18);
  FUN_013a7bf0(param_1,param_2,local_10);
  FUN_00414560(&local_18,2);
  return param_2;
}

