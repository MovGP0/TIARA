/* Ghidra address: 01c2c400 */
/* Ghidra symbol: FUN_01c2c400 */


undefined8 FUN_01c2c400(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_20;
  
  local_20 = 0;
  FUN_00414480(param_2);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_004169a0(&local_20,*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) + 8);
      FUN_00416ad0(param_2,local_20);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(&local_20);
  return param_2;
}

