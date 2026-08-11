/* Ghidra address: 007e7bb0 */
/* Ghidra symbol: FUN_007e7bb0 */


undefined8 FUN_007e7bb0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    iVar3 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x10) + -8);
  }
  iVar2 = 0;
  if (iVar3 - 1U < 0x80000000) {
    do {
      if ((uint)*(byte *)(param_2 + 0x87) ==
          *(uint *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 4)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + (ulonglong)*(byte *)(param_2 + 0x87) * 4);
        *piVar1 = *piVar1 + 1;
        FUN_007dd620(param_2,*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x20));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

