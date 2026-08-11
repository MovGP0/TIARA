/* Ghidra address: 008e8460 */
/* Ghidra symbol: FUN_008e8460 */


void FUN_008e8460(undefined8 param_1,undefined2 *param_2,int param_3,undefined2 *param_4,int param_5
                 ,int *param_6,int *param_7)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_5 < param_3) {
    param_3 = param_5;
  }
  if (param_3 < 2) {
    *param_6 = 0;
    *param_7 = 0;
  }
  else {
    param_3 = param_3 - param_3 % 2;
    iVar2 = param_3 / 2;
    iVar3 = iVar2;
    if (0 < iVar2) {
      do {
        uVar1 = FUN_008e5980(*param_2);
        *param_4 = uVar1;
        param_2 = param_2 + 1;
        param_4 = param_4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *param_7 = iVar2;
    *param_6 = param_3;
  }
  return;
}

