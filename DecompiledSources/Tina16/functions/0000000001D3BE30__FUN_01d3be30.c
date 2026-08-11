/* Ghidra address: 01d3be30 */
/* Ghidra symbol: FUN_01d3be30 */


ulonglong FUN_01d3be30(longlong param_1)

{
  undefined8 uVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  bool bVar3;
  
  if (*PTR_DAT_020023b0 == '\0') {
LAB_01d3be77:
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  }
  else {
    if (param_1 != 0) {
      uVar1 = FUN_0198a580(param_1);
      if ((byte)uVar1 < 8) {
        bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar1 >> 8),1) << ((byte)uVar1 & 0x1f) & 0x5cU) !=
                0;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) goto LAB_01d3be77;
    }
    uVar2 = 0;
  }
  uVar1 = FUN_0198a580(param_1);
  if ((byte)uVar1 < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar1 >> 8),1) << ((byte)uVar1 & 0x1f) & 0x5cU) != 0;
  }
  else {
    bVar3 = false;
  }
  if (((bVar3) && (*(char *)(param_1 + 0x3b9) != '\0')) && (*PTR_DAT_020052b8 != '\0')) {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}

