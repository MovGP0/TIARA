/* Ghidra address: 015c9aa0 */
/* Ghidra symbol: FUN_015c9aa0 */


void FUN_015c9aa0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_1c;
  
  iVar1 = FUN_015c2df0();
  local_1c = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_015c2a60(*(undefined8 *)(param_1 + 0x28),local_1c);
      if ((*(uint *)(lVar2 + 0x26) & 0x10) == 0) {
        lVar2 = FUN_015c2a60(*(undefined8 *)(param_1 + 0x28),local_1c);
        *(int *)(lVar2 + 0x2a) = *(int *)(lVar2 + 0x2a) + *(int *)(param_1 + 0xa0);
      }
      local_1c = local_1c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

