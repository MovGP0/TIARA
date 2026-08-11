/* Ghidra address: 00874da0 */
/* Ghidra symbol: FUN_00874da0 */


longlong FUN_00874da0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  iVar3 = 0;
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + -4);
  }
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      FUN_00416780(&local_20,*(undefined2 *)(param_1 + -2 + (longlong)iVar2 * 2));
      iVar1 = FUN_00877cc0(local_20,0);
      local_28 = (longlong)iVar1 + local_28 * 8;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(&local_20);
  return local_28;
}

