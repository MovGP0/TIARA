/* Ghidra address: 016b1b00 */
/* Ghidra symbol: FUN_016b1b00 */


void FUN_016b1b00(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x10);
  if (-1 < iVar3 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38));
      iVar1 = 0;
      iVar4 = *(int *)(lVar2 + 0x20);
      if (-1 < iVar4 + -1) {
        do {
          local_20 = *(undefined8 *)(lVar2 + 0x24 + (longlong)iVar1 * 8);
          iVar1 = iVar1 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(&local_28);
  return;
}

