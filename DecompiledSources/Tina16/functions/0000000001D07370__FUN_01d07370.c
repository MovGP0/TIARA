/* Ghidra address: 01d07370 */
/* Ghidra symbol: FUN_01d07370 */


void FUN_01d07370(longlong *param_1,char param_2)

{
  char cVar1;
  
  *(char *)(param_1 + 0x77) = param_2;
  cVar1 = (**(code **)(*param_1 + 0x2d8))(param_1);
  if (cVar1 != '\0') {
    FUN_0173d740(param_1[0x33],(longlong)param_2);
  }
  return;
}

