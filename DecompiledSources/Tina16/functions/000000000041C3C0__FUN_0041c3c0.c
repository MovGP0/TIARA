/* Ghidra address: 0041c3c0 */
/* Ghidra symbol: FUN_0041c3c0 */


ulonglong FUN_0041c3c0(longlong param_1)

{
  undefined8 unaff_RSI;
  longlong lVar1;
  int iVar2;
  
  if (param_1 != 0) {
    FUN_0041c290(param_1);
    iVar2 = 0x1f;
    lVar1 = param_1 + 0x10;
    do {
      FUN_0041c140(lVar1);
      lVar1 = lVar1 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 0x1f;
    lVar1 = param_1 + 0x108;
    do {
      FUN_0041c140(lVar1);
      lVar1 = lVar1 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    FUN_00411d90(*(undefined8 *)(param_1 + 8));
    FUN_00418590(param_1,&DAT_0041b998);
  }
  return CONCAT71((int7)((ulonglong)unaff_RSI >> 8),param_1 != 0) & 0xffffffff;
}

