/* Ghidra address: 01a45760 */
/* Ghidra symbol: FUN_01a45760 */


undefined8 FUN_01a45760(longlong param_1,short param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x80) + -4);
  }
  iVar1 = 1;
  if (0 < iVar2) {
    do {
      if (param_2 == *(short *)(*(longlong *)(param_1 + 0x80) + -2 + (longlong)iVar1 * 2)) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

