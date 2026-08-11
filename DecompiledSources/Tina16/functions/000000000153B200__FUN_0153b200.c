/* Ghidra address: 0153b200 */
/* Ghidra symbol: FUN_0153b200 */


bool FUN_0153b200(longlong param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    param_1 = FUN_019a4600();
  }
  cVar1 = FUN_01329290(param_1);
  return cVar1 == '\0';
}

