/* Ghidra address: 01c06fe0 */
/* Ghidra symbol: FUN_01c06fe0 */


ulonglong FUN_01c06fe0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  undefined7 uVar4;
  ulonglong uVar3;
  
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (*(longlong *)(param_1 + 800) != 0) {
    lVar2 = FUN_01bfd960(*(longlong *)(param_1 + 800));
    cVar1 = *(char *)(lVar2 + 0x48);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else if (cVar1 == '\x01') {
      uVar3 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 800) + 0x95);
    }
    else if (cVar1 == '\x02') {
      uVar3 = CONCAT71(uVar4,1);
    }
  }
  return uVar3 & 0xffffffff;
}

