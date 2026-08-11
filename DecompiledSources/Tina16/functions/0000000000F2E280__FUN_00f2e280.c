/* Ghidra address: 00f2e280 */
/* Ghidra symbol: FUN_00f2e280 */


byte FUN_00f2e280(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    bVar1 = **(byte **)(param_1 + 8);
  }
  else if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
    uVar2 = (ulonglong)*(int *)(param_1 + 0x30);
    lVar3 = *(longlong *)(param_1 + 0x28);
    if ((lVar3 == 0) || (*(ulonglong *)(lVar3 + -8) <= uVar2)) {
      uVar2 = FUN_00410a90();
    }
    bVar1 = *(byte *)(lVar3 + uVar2);
  }
  else {
    bVar1 = **(byte **)(param_1 + 8);
  }
  if ((bVar1 & 0x80) != 0) {
    FUN_00f2d6c0(param_1);
    uVar2 = (ulonglong)*(int *)(param_1 + 0x30);
    lVar3 = *(longlong *)(param_1 + 0x28);
    if ((lVar3 == 0) || (*(ulonglong *)(lVar3 + -8) <= uVar2)) {
      uVar2 = FUN_00410a90();
    }
    bVar1 = *(byte *)(lVar3 + uVar2);
  }
  return bVar1;
}

