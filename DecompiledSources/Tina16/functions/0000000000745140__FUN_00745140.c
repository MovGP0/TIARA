/* Ghidra address: 00745140 */
/* Ghidra symbol: FUN_00745140 */


int * FUN_00745140(longlong param_1,int *param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar3 = 0;
  iVar4 = param_3;
  if (-1 < param_3 + -1) {
    do {
      lVar1 = FUN_00746290(*(undefined8 *)(param_1 + 0x4b8),iVar3);
      *param_2 = *param_2 + *(int *)(lVar1 + 0x28);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar3 = 0;
  iVar4 = param_4;
  if (-1 < param_4 + -1) {
    do {
      lVar1 = FUN_00746290(*(undefined8 *)(param_1 + 0x4b0),iVar3);
      param_2[1] = param_2[1] + *(int *)(lVar1 + 0x28);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar2 = FUN_00745220(param_1,param_3,param_4);
  *(undefined8 *)(param_2 + 2) = uVar2;
  param_2[3] = param_2[3] + param_2[1];
  param_2[2] = param_2[2] + *param_2;
  return param_2;
}

