/* Ghidra address: 013a6cb0 */
/* Ghidra symbol: FUN_013a6cb0 */


undefined8 FUN_013a6cb0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_10;
  
  local_10 = 0;
  iVar1 = FUN_004170c0(&LAB_013a6d74,*(undefined8 *)(param_1 + 200),1);
  iVar2 = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 200) + -4);
  }
  FUN_00416dc0(&local_10,*(undefined8 *)(param_1 + 200),iVar1 + 1,iVar2 - iVar1);
  FUN_0043ea00(param_2,local_10);
  FUN_00414480(&local_10);
  return param_2;
}

