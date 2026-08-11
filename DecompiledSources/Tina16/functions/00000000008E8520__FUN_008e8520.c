/* Ghidra address: 008e8520 */
/* Ghidra symbol: FUN_008e8520 */


undefined8 *
FUN_008e8520(undefined8 param_1,undefined8 *param_2,undefined2 *param_3,int param_4,int *param_5)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int iVar3;
  
  if (param_4 < 1) {
    *param_5 = 0;
    FUN_004144d0(param_2);
  }
  else {
    FUN_00415d10(param_2,param_4 * 2,0);
    puVar2 = (undefined2 *)*param_2;
    iVar3 = param_4;
    if (0 < param_4) {
      do {
        uVar1 = FUN_008e5980(*param_3);
        *puVar2 = uVar1;
        param_3 = param_3 + 1;
        puVar2 = puVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *param_5 = param_4;
  }
  return param_2;
}

