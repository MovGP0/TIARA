/* Ghidra address: 00c7d960 */
/* Ghidra symbol: FUN_00c7d960 */


ulonglong FUN_00c7d960(longlong param_1)

{
  undefined8 unaff_RSI;
  int iVar1;
  
  if (*(char *)(param_1 + 0x1b) != '\0') {
    iVar1 = 1;
    do {
      if (*(int *)(param_1 + 0x1c + (longlong)iVar1 * 4) != 0) {
        FUN_00c7d670(param_1,0,0,iVar1,0x7f);
        if (0x3b < iVar1) {
          FUN_00c7d670(param_1,0,0,0x5a,0x7f);
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x80);
  }
  return CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1) & 0xffffffff;
}

