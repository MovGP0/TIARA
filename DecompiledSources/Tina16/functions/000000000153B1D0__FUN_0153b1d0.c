/* Ghidra address: 0153b1d0 */
/* Ghidra symbol: FUN_0153b1d0 */


bool FUN_0153b1d0(longlong param_1)

{
  char cVar1;
  
  FUN_0153a8e0(0);
  if (param_1 == 0) {
    param_1 = FUN_019a4600();
  }
  cVar1 = FUN_01328fc0(param_1);
  return cVar1 == '\0';
}

