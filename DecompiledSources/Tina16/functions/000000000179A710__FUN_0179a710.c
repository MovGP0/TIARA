/* Ghidra address: 0179a710 */
/* Ghidra symbol: FUN_0179a710 */


void FUN_0179a710(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x9a8);
  if (param_2 == lVar1) {
    uVar2 = (ulonglong)*(byte *)(lVar1 + 0x328);
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),*(char *)(lVar1 + 0x328) == '\0');
  }
  FUN_007e2d20(*(undefined8 *)(param_1 + 0xab0),uVar2 & 0xffffffff);
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x9a8),uVar2 & 0xffffffff);
  FUN_0064e770(*(undefined8 *)(param_1 + 0x948));
  return;
}

