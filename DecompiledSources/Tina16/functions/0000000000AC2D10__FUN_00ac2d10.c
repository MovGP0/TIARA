/* Ghidra address: 00ac2d10 */
/* Ghidra symbol: FUN_00ac2d10 */


void FUN_00ac2d10(longlong *param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  if ((int)param_1[0x12] == 999999999) {
    param_2 = param_2 - *(int *)((longlong)param_1 + 0xc4);
    param_3 = param_3 - (int)param_1[0x18];
    iVar3 = (**(code **)(*param_1 + 200))(param_1);
    iVar1 = *(int *)((longlong)param_1 + 0xf4);
    iVar4 = (**(code **)(*param_1 + 0xc0))(param_1);
    if ((((param_2 < 0) || (iVar3 + iVar1 * -2 <= param_2)) || (param_3 < 0)) ||
       (iVar4 + *(int *)((longlong)param_1 + 0xf4) * -2 <= param_3)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *param_4 = param_2;
      *param_5 = param_3;
    }
  }
  else {
    FUN_00ac3690(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

