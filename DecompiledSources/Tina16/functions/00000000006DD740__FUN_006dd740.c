/* Ghidra address: 006dd740 */
/* Ghidra symbol: FUN_006dd740 */


int FUN_006dd740(longlong param_1)

{
  int iVar1;
  
  iVar1 = -1;
  for (; param_1 != 0; param_1 = FUN_006dd430(param_1)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

