/* Ghidra address: 00f8bd10 */
/* Ghidra symbol: FUN_00f8bd10 */


ulonglong FUN_00f8bd10(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((*(int *)(param_1 + 0x3488) == 0) && (*(char *)(param_1 + 0x3450) == '\0')) {
    cVar1 = FUN_00f8c160(param_1,1);
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0x34a0) = 0xffffffff;
      uVar2 = 0;
    }
  }
  return uVar2 & 0xffffffff;
}

