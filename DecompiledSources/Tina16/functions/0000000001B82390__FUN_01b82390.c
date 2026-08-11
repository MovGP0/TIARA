/* Ghidra address: 01b82390 */
/* Ghidra symbol: FUN_01b82390 */


undefined8 FUN_01b82390(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x348) - 2U < 0x80000000) {
    iVar2 = *(int *)(param_1 + 0x348) + -1;
    do {
      if ((*(int *)(param_1 + 0x20 + (longlong)iVar1 * 8) !=
           *(int *)(param_1 + 0x20 + (longlong)(iVar1 + 1) * 8)) &&
         (*(int *)(param_1 + 0x24 + (longlong)iVar1 * 8) !=
          *(int *)(param_1 + 0x24 + (longlong)(iVar1 + 1) * 8))) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

