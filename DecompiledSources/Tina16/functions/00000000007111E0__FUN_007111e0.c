/* Ghidra address: 007111e0 */
/* Ghidra symbol: FUN_007111e0 */


int * FUN_007111e0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1 * 2 + 4;
  piVar1 = (int *)FUN_004095c0(iVar2);
  *piVar1 = iVar2;
  return piVar1 + 1;
}

