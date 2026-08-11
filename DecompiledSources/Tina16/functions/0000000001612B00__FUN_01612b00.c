/* Ghidra address: 01612b00 */
/* Ghidra symbol: FUN_01612b00 */


undefined8 FUN_01612b00(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xd8);
  iVar1 = 0;
  if (iVar2 - 1U < 0x80000000) {
    do {
      if (*(int *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar1 * 4) == param_2) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

