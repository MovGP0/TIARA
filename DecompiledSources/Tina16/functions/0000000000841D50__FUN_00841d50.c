/* Ghidra address: 00841d50 */
/* Ghidra symbol: FUN_00841d50 */


void FUN_00841d50(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  param_2[3] = param_3;
  param_2[2] = param_2[1];
  param_2[5] = param_2[1];
  param_2[4] = param_2[7];
  iVar2 = param_2[7];
  if (iVar2 <= param_2[8] + -1) {
    iVar3 = ((param_2[8] + -1) - iVar2) + 1;
    do {
      iVar1 = (**(code **)(param_2 + 10))(*(undefined8 *)(param_2 + 0xc),iVar2);
      param_2[2] = param_2[2] + iVar1 + *param_2;
      if (param_2[3] + *param_2 < param_2[2]) {
        param_2[2] = param_2[3];
        return;
      }
      param_2[4] = iVar2;
      param_2[5] = param_2[2];
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

