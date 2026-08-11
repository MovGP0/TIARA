/* Ghidra address: 00442b20 */
/* Ghidra symbol: FUN_00442b20 */


int * FUN_00442b20(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004095c0(param_1 + 4);
  *piVar1 = param_1 + 4;
  return piVar1 + 1;
}

