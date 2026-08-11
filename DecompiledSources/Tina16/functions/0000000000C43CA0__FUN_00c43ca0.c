/* Ghidra address: 00c43ca0 */
/* Ghidra symbol: FUN_00c43ca0 */


int FUN_00c43ca0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 == param_2) || (param_2 == 0)) {
    iVar1 = 1;
  }
  else {
    iVar1 = 1;
    iVar2 = 1;
    iVar3 = (param_1 - param_2) + 1;
    if (iVar3 <= param_1) {
      iVar4 = (param_1 - iVar3) + 1;
      do {
        iVar1 = iVar1 * iVar3;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar3 = 2;
    if (1 < param_2) {
      param_2 = param_2 + -1;
      do {
        iVar2 = iVar2 * iVar3;
        iVar3 = iVar3 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    iVar1 = iVar1 / iVar2;
  }
  return iVar1;
}

