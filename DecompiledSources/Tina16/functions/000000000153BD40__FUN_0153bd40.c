/* Ghidra address: 0153bd40 */
/* Ghidra symbol: FUN_0153bd40 */


ulonglong FUN_0153bd40(undefined4 param_1,longlong param_2)

{
  char cVar1;
  undefined8 unaff_RSI;
  
  if (param_2 == 0) {
    param_2 = FUN_019a4600();
  }
  cVar1 = FUN_01537800(1,param_2,0,0,0);
  FUN_0153af00(param_1,0);
  return CONCAT71((int7)((ulonglong)unaff_RSI >> 8),cVar1 == '\0') & 0xffffffff;
}

