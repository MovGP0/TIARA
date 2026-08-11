/* Ghidra address: 00841fb0 */
/* Ghidra symbol: FUN_00841fb0 */


int FUN_00841fb0(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = param_2[3] + *param_2;
  iVar3 = param_3;
  if (param_2[6] <= param_3) {
    iVar6 = (param_2[6] - param_3) + -1;
    iVar5 = param_3;
    do {
      iVar2 = (**(code **)(param_2 + 10))(*(undefined8 *)(param_2 + 0xc),iVar5);
      iVar1 = iVar3;
      if ((0 < iVar2) && (iVar4 = (iVar4 - iVar2) - *param_2, iVar1 = iVar5, iVar4 < param_2[1])) {
        if (iVar3 != param_3) {
          return iVar3;
        }
        iVar4 = (**(code **)(param_2 + 10))(*(undefined8 *)(param_2 + 0xc),param_3);
        if (0 < iVar4) {
          return iVar3;
        }
        return iVar5;
      }
      iVar3 = iVar1;
      iVar5 = iVar5 + -1;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0);
  }
  return iVar3;
}

