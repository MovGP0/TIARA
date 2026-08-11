/* Ghidra address: 00900490 */
/* Ghidra symbol: FUN_00900490 */


ulonglong FUN_00900490(longlong param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  int iVar4;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + -4) >> 1;
  }
  iVar4 = 1;
  do {
    if (uVar2 == 0) {
LAB_009004eb:
      return uVar3 & 0xffffffff;
    }
    cVar1 = FUN_008ff4b0(*(undefined2 *)(param_1 + -2 + (longlong)iVar4 * 2));
    if (cVar1 == '\0') {
      uVar3 = 0;
      goto LAB_009004eb;
    }
    iVar4 = iVar4 + 1;
    uVar2 = uVar2 - 1;
  } while( true );
}

