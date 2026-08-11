/* Ghidra address: 01168370 */
/* Ghidra symbol: FUN_01168370 */


void FUN_01168370(int *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  FUN_00414480(&DAT_0203d978);
  piVar1 = *(int **)(param_1 + 0x12);
  iVar2 = 0;
  iVar3 = 0;
  if ((piVar1 != (int *)0x0) && (iVar2 = 0, iVar3 = 0, *(longlong *)(param_1 + 0x14) != 0)) {
    iVar2 = *piVar1;
    iVar3 = piVar1[1];
    iVar4 = **(int **)(param_1 + 0x14);
    iVar5 = (*(int **)(param_1 + 0x14))[1];
  }
  if (param_1[0x16] != 0) {
    iVar2 = FUN_01167b10(param_1[2] +
                         DAT_0203a524 * *(int *)(&DAT_0203a900 + (longlong)param_1[0x16] * 4));
    iVar3 = FUN_01167b10(param_1[3] +
                         DAT_0203a524 * *(int *)(&DAT_0203a950 + (longlong)param_1[0x16] * 4));
  }
  if (param_1[0x17] != 0) {
    iVar4 = FUN_01167b10(param_1[2] +
                         DAT_0203a524 * *(int *)(&DAT_0203a900 + (longlong)param_1[0x17] * 4));
    iVar5 = FUN_01167b10(param_1[3] +
                         DAT_0203a524 * *(int *)(&DAT_0203a950 + (longlong)param_1[0x17] * 4));
  }
  if ((*(longlong *)(param_1 + 0x12) != 0) && (*(longlong *)(param_1 + 0x14) != 0)) {
    if (param_1[10] == 0) {
      if (iVar4 < iVar2) {
        FUN_01166e80(param_2,*param_1 + param_1[0xb],param_1[1]);
      }
      else {
        FUN_01166e80(param_2,*param_1 - param_1[0xb],param_1[1]);
      }
      FUN_01166f10(param_2,iVar2,param_1[1]);
      FUN_01166f10(param_2,iVar2,iVar3);
      if (iVar4 < iVar2) {
        FUN_01166e80(param_2,*param_1 - param_1[0xb],param_1[1]);
      }
      else {
        FUN_01166e80(param_2,*param_1 + param_1[0xb],param_1[1]);
      }
      FUN_01166f10(param_2,iVar4,param_1[1]);
      FUN_01166f10(param_2,iVar4,iVar5);
    }
    else {
      if (iVar5 < iVar3) {
        FUN_01166e80(param_2,*param_1,param_1[1] + param_1[0xb]);
      }
      else {
        FUN_01166e80(param_2,*param_1,param_1[1] - param_1[0xb]);
      }
      FUN_01166f10(param_2,*param_1,iVar3);
      FUN_01166f10(param_2,iVar2,iVar3);
      if (iVar5 < iVar3) {
        FUN_01166e80(param_2,*param_1,param_1[1] - param_1[0xb]);
      }
      else {
        FUN_01166e80(param_2,*param_1,param_1[1] + param_1[0xb]);
      }
      FUN_01166f10(param_2,*param_1,iVar5);
      FUN_01166f10(param_2,iVar4,iVar5);
    }
  }
  iVar2 = 0;
  if (DAT_0203d978 != 0) {
    iVar2 = *(int *)(DAT_0203d978 + -4);
  }
  FUN_00416dc0(&DAT_0203d980,DAT_0203d978,1,iVar2 + -1);
  FUN_00414ad0(&DAT_0203d978,DAT_0203d980);
  FUN_01165eb0(&DAT_0203d978);
  return;
}

