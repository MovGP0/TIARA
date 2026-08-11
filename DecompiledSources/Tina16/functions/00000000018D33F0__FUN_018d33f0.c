/* Ghidra address: 018d33f0 */
/* Ghidra symbol: FUN_018d33f0 */


undefined1 FUN_018d33f0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0;
  local_21 = 0;
  iVar1 = FUN_00414cc0(param_2);
  if (1 < iVar1) {
    iVar1 = FUN_00414cc0(param_2);
    iVar3 = 1;
    if (0 < iVar1) {
      do {
        FUN_00416780(&local_20,*(undefined2 *)(param_2 + -2 + (longlong)iVar3 * 2));
        iVar2 = FUN_004170c0(local_20,PTR_DAT_01fb68c8,1);
        if (iVar2 != 0) {
          local_21 = 1;
          break;
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00414480(&local_20);
  return local_21;
}

