/* Ghidra address: 01168ab0 */
/* Ghidra symbol: FUN_01168ab0 */


void FUN_01168ab0(int *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar6 = 0;
  FUN_00414480(&DAT_0203d978);
  piVar2 = *(int **)(param_1 + 0x12);
  iVar3 = 0;
  iVar4 = 0;
  if ((piVar2 != (int *)0x0) && (iVar3 = 0, iVar4 = 0, *(longlong *)(param_1 + 0x14) != 0)) {
    iVar3 = *piVar2;
    iVar4 = piVar2[1];
    iVar5 = **(int **)(param_1 + 0x14);
    iVar6 = (*(int **)(param_1 + 0x14))[1];
  }
  if (param_1[0x16] != 0) {
    iVar3 = FUN_01167b10(param_1[2] +
                         DAT_0203a524 * *(int *)(&DAT_0203a900 + (longlong)param_1[0x16] * 4));
    iVar4 = FUN_01167b10(param_1[3] +
                         DAT_0203a524 * *(int *)(&DAT_0203a950 + (longlong)param_1[0x16] * 4));
  }
  if (param_1[0x17] != 0) {
    iVar5 = FUN_01167b10(param_1[2] +
                         DAT_0203a524 * *(int *)(&DAT_0203a900 + (longlong)param_1[0x17] * 4));
    iVar6 = FUN_01167b10(param_1[3] +
                         DAT_0203a524 * *(int *)(&DAT_0203a950 + (longlong)param_1[0x17] * 4));
  }
  if ((*(longlong *)(param_1 + 0x12) != 0) && (*(longlong *)(param_1 + 0x14) != 0)) {
    iVar1 = param_1[10];
    if (iVar1 == 0) {
      FUN_01166e80(param_2,iVar3,iVar4);
      FUN_01166f10(param_2,iVar3,param_1[1]);
      if (iVar5 < iVar3) {
        FUN_01166f10(param_2,*param_1 + param_1[0xb] / param_1[0x18],param_1[1]);
      }
      else {
        FUN_01166f10(param_2,*param_1 - param_1[0xb] / param_1[0x18],param_1[1]);
      }
      FUN_01166e80(param_2,iVar5,iVar6);
      FUN_01166f10(param_2,iVar5,param_1[1]);
      if (iVar5 < iVar3) {
        FUN_01166f10(param_2,*param_1 - param_1[0xb] / param_1[0x18],param_1[1]);
      }
      else {
        FUN_01166f10(param_2,*param_1 + param_1[0xb] / param_1[0x18],param_1[1]);
      }
    }
    else if (iVar1 == 1) {
      FUN_01166e80(param_2,iVar3,iVar4);
      FUN_01166f10(param_2,*param_1,iVar4);
      if (iVar6 < iVar4) {
        FUN_01166f10(param_2,*param_1,param_1[1] + param_1[0xb] / param_1[0x18]);
      }
      else {
        FUN_01166f10(param_2,*param_1,param_1[1] - param_1[0xb] / param_1[0x18]);
      }
      FUN_01166e80(param_2,iVar5,iVar6);
      FUN_01166f10(param_2,*param_1,iVar6);
      if (iVar6 < iVar4) {
        FUN_01166f10(param_2,*param_1,param_1[1] - param_1[0xb] / param_1[0x18]);
      }
      else {
        FUN_01166f10(param_2,*param_1,param_1[1] + param_1[0xb] / param_1[0x18]);
      }
    }
    else if (iVar1 == 2) {
      FUN_01166e80(param_2,iVar3,iVar4);
      FUN_01166f10(param_2,iVar3,param_1[1]);
      FUN_01166f10(param_2,*param_1 + param_1[0xb] / param_1[0x18],param_1[1]);
      FUN_01166e80(param_2,iVar5,iVar6);
      FUN_01166f10(param_2,iVar5,param_1[1]);
      FUN_01166f10(param_2,*param_1 - param_1[0xb] / param_1[0x18],param_1[1]);
    }
    else if (iVar1 == 3) {
      FUN_01166e80(param_2,iVar3,iVar4);
      FUN_01166f10(param_2,*param_1,iVar4);
      FUN_01166f10(param_2,*param_1,param_1[1] + param_1[0xb] / param_1[0x18]);
      FUN_01166e80(param_2,iVar5,iVar6);
      FUN_01166f10(param_2,*param_1,iVar6);
      FUN_01166f10(param_2,*param_1,param_1[1] - param_1[0xb] / param_1[0x18]);
    }
  }
  iVar3 = 0;
  if (DAT_0203d978 != 0) {
    iVar3 = *(int *)(DAT_0203d978 + -4);
  }
  FUN_00416dc0(&DAT_0203d980,DAT_0203d978,1,iVar3 + -1);
  FUN_00414ad0(&DAT_0203d978,DAT_0203d980);
  FUN_01165eb0(&DAT_0203d978);
  return;
}

