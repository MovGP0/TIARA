/* Ghidra address: 0173ea00 */
/* Ghidra symbol: FUN_0173ea00 */


void FUN_0173ea00(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_0173d820(param_1);
  if (cVar1 != *(char *)(param_1 + 0x3a)) {
    FUN_0173d2c0(param_1,param_2);
  }
  FUN_0173e910(param_1,param_2);
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_017322f8);
  if (cVar1 == '\0') {
    FUN_004113d0(param_1,&PTR_FUN_01731d90);
  }
  return;
}

