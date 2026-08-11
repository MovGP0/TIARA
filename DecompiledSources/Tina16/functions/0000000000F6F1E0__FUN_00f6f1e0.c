/* Ghidra address: 00f6f1e0 */
/* Ghidra symbol: FUN_00f6f1e0 */


undefined8 FUN_00f6f1e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  FUN_00414b50(local_30,&DAT_00f6f358);
  iVar2 = *(int *)(param_1 + 0xe8);
  iVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_0043f750(local_40,*(undefined4 *)(param_1 + 0x98 + (longlong)iVar1 * 8));
      FUN_00416cd0(local_30,3,local_30[0],&DAT_00f6f368,local_40[0]);
      FUN_0043f750(&local_48,*(undefined4 *)(param_1 + 0x9c + (longlong)iVar1 * 8));
      FUN_00416cd0(local_30,3,local_30[0],L", i: ",local_48);
      if (iVar1 < *(int *)(param_1 + 0xe8) + -1) {
        FUN_00416ad0(local_30,&DAT_00f6f394);
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00416ad0(local_30,&LAB_00f6f3a8);
  FUN_00414ad0(param_2,local_30[0]);
  FUN_00414560(&local_48,2);
  FUN_00414480(local_30);
  return param_2;
}

