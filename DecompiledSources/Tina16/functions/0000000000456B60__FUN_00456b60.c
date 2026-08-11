/* Ghidra address: 00456b60 */
/* Ghidra symbol: FUN_00456b60 */


int FUN_00456b60(undefined8 param_1,undefined8 *param_2,int param_3,undefined2 param_4,
                undefined2 param_5,int *param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  iVar2 = 0;
  if (-1 < param_3) {
    param_3 = param_3 + 1;
    do {
      iVar1 = FUN_00456bf0(param_1,*param_2,param_4,param_5,param_7);
      if ((-1 < iVar1) && ((iVar1 < iVar3 || (iVar3 == -1)))) {
        *param_6 = iVar2;
        iVar3 = iVar1;
      }
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return iVar3;
}

