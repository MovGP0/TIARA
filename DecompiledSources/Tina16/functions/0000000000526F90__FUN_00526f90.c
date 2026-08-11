/* Ghidra address: 00526f90 */
/* Ghidra symbol: FUN_00526f90 */


void FUN_00526f90(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (0 < param_2) {
    do {
      param_1 = param_1 + 1;
      if (*param_1 < iVar1) {
        iVar1 = *param_1;
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

