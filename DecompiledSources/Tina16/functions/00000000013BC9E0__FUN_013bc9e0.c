/* Ghidra address: 013bc9e0 */
/* Ghidra symbol: FUN_013bc9e0 */


undefined8 FUN_013bc9e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 local_20;
  
  local_20 = 0;
  FUN_00414480(&local_20);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x58) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x58),iVar2);
      FUN_00416ad0(&local_20,*(undefined8 *)(lVar1 + 0x10));
      if (iVar2 < *(int *)(*(longlong *)(param_1 + 0x58) + 0x10) + -1) {
        FUN_00416ad0(&local_20,&DAT_013bcab4);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414ad0(param_2,local_20);
  FUN_00414480(&local_20);
  return param_2;
}

