/* Ghidra address: 008f0640 */
/* Ghidra symbol: FUN_008f0640 */


undefined8 FUN_008f0640(undefined8 param_1,byte *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != (byte *)0x0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  if (0 < iVar1) {
    do {
      if (0x7f < *param_2) {
        return 0;
      }
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 1;
}

