/* Ghidra address: 01972580 */
/* Ghidra symbol: FUN_01972580 */


undefined8 FUN_01972580(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_20;
  
  local_20 = 0;
  FUN_00414480(param_2);
  iVar1 = FUN_00414cb0(param_3);
  iVar2 = 1;
  if (0 < iVar1) {
    do {
      FUN_00416780(&local_20,*(ushort *)(param_3 + -2 + (longlong)iVar2 * 2) - 10);
      FUN_00416ad0(param_2,local_20);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(&local_20);
  return param_2;
}

