/* Ghidra address: 017c2b80 */
/* Ghidra symbol: FUN_017c2b80 */


undefined8 FUN_017c2b80(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 == -1) {
    iVar1 = FUN_017c2b70(param_1);
    *param_2 = iVar1 + -1;
  }
  if ((-1 < *param_2) && (iVar1 = FUN_017c2b70(param_1), *param_2 < iVar1)) {
    return 1;
  }
  return 0;
}

