/* Ghidra address: 010e15d0 */
/* Ghidra symbol: FUN_010e15d0 */


ulonglong FUN_010e15d0(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(longlong *)(param_1 + 0x408) != *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x2788)) {
    uVar2 = 0;
    cVar1 = FUN_010e1470(param_1);
    if (cVar1 != '\0') {
      *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x2788);
    }
  }
  return uVar2 & 0xffffffff;
}

