/* Ghidra address: 00f6f450 */
/* Ghidra symbol: FUN_00f6f450 */


undefined8 FUN_00f6f450(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x94);
  iVar1 = 0;
  if (iVar2 - 1U < 0x80000000) {
    do {
      if (*(int *)(param_1 + 0x44 + (longlong)iVar1 * 8) == param_2) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

