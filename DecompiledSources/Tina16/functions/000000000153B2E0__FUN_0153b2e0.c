/* Ghidra address: 0153b2e0 */
/* Ghidra symbol: FUN_0153b2e0 */


bool FUN_0153b2e0(longlong param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    param_1 = FUN_019a4600();
  }
  cVar1 = FUN_01396990(param_1);
  return cVar1 == '\0';
}

