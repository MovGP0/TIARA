/* Ghidra address: 0082b040 */
/* Ghidra symbol: FUN_0082b040 */


void FUN_0082b040(longlong *param_1)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar1 == '\0') {
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  FUN_006558e0(param_1);
  FUN_00827a10(param_1[0xa4],uVar2 & 0xffffffff);
  return;
}

