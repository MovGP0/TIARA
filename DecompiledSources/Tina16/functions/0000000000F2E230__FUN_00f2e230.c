/* Ghidra address: 00f2e230 */
/* Ghidra symbol: FUN_00f2e230 */


undefined1 FUN_00f2e230(longlong param_1)

{
  undefined1 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = **(undefined1 **)(param_1 + 8);
  }
  else if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
    uVar2 = (ulonglong)*(int *)(param_1 + 0x30);
    lVar3 = *(longlong *)(param_1 + 0x28);
    if ((lVar3 == 0) || (*(ulonglong *)(lVar3 + -8) <= uVar2)) {
      uVar2 = FUN_00410a90();
    }
    uVar1 = *(undefined1 *)(lVar3 + uVar2);
  }
  else {
    uVar1 = **(undefined1 **)(param_1 + 8);
  }
  return uVar1;
}

