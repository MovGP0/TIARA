/* Ghidra address: 01575650 */
/* Ghidra symbol: FUN_01575650 */


undefined8 FUN_01575650(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  FUN_00414480(&local_20);
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 0x10);
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(param_1,iVar2);
      if (1 < *(int *)(*(longlong *)(lVar1 + 0x30) + 0x10)) {
        FUN_0043f750(local_30,*(undefined4 *)(lVar1 + 8));
        FUN_00416cd0(&local_20,3,local_20,local_30[0],&LAB_01575764);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = 0;
  if (local_20 != 0) {
    iVar3 = *(int *)(local_20 + -4);
  }
  if (0 < iVar3) {
    FUN_00416e20(&local_20,iVar3,1);
  }
  FUN_00414ad0(param_2,local_20);
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return param_2;
}

