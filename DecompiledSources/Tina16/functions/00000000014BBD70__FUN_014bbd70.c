/* Ghidra address: 014bbd70 */
/* Ghidra symbol: FUN_014bbd70 */


int FUN_014bbd70(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (-1 < param_2) {
    param_2 = param_2 + 1;
    do {
      if (param_3 == *param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar1;
}

