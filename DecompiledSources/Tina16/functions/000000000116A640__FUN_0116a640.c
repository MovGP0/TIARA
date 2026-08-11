/* Ghidra address: 0116a640 */
/* Ghidra symbol: FUN_0116a640 */


void FUN_0116a640(int *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar4 = 0;
  uVar5 = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x12);
  uVar2 = 0;
  uVar3 = 0;
  if ((puVar1 != (undefined4 *)0x0) && (uVar2 = 0, uVar3 = 0, *(longlong *)(param_1 + 0x14) != 0)) {
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = **(undefined4 **)(param_1 + 0x14);
    uVar5 = (*(undefined4 **)(param_1 + 0x14))[1];
  }
  if (param_1[0x16] != 0) {
    uVar2 = FUN_01167b10(param_1[2] +
                         DAT_0203a524 * *(int *)(&DAT_0203a900 + (longlong)param_1[0x16] * 4));
    uVar3 = FUN_01167b10(param_1[3] +
                         DAT_0203a524 * *(int *)(&DAT_0203a950 + (longlong)param_1[0x16] * 4));
  }
  if (param_1[0x17] != 0) {
    uVar4 = FUN_01167b10(param_1[2] +
                         DAT_0203a524 * *(int *)(&DAT_0203a900 + (longlong)param_1[0x17] * 4));
    uVar5 = FUN_01167b10(param_1[3] +
                         DAT_0203a524 * *(int *)(&DAT_0203a950 + (longlong)param_1[0x17] * 4));
  }
  if ((*(longlong *)(param_1 + 0x12) != 0) && (*(longlong *)(param_1 + 0x14) != 0)) {
    iVar6 = param_1[10];
    if (iVar6 == 0) {
      FUN_01166e80(param_2,uVar2,uVar3);
      FUN_01166f10(param_2,uVar2,param_1[1]);
      FUN_01166f10(param_2,*param_1 - param_1[0xb],param_1[1]);
      FUN_01166e80(param_2,uVar2,uVar3);
      FUN_01166f10(param_2,**(undefined4 **)(param_1 + 0x12),(*(undefined4 **)(param_1 + 0x12))[1]);
      FUN_01166e80(param_2,uVar4,uVar5);
      FUN_01166f10(param_2,uVar4,param_1[1]);
      FUN_01166f10(param_2,*param_1 + param_1[0xb],param_1[1]);
      FUN_01166e80(param_2,uVar4,uVar5);
      FUN_01166f10(param_2,uVar4,uVar5);
    }
    else if (iVar6 == 1) {
      FUN_01166e80(param_2,uVar2,uVar3);
      FUN_01166f10(param_2,*param_1,uVar3);
      FUN_01166f10(param_2,*param_1,param_1[1] - param_1[0xb]);
      FUN_01166e80(param_2,uVar2,uVar3);
      FUN_01166f10(param_2,**(undefined4 **)(param_1 + 0x12),(*(undefined4 **)(param_1 + 0x12))[1]);
      FUN_01166e80(param_2,uVar4,uVar5);
      FUN_01166f10(param_2,*param_1,uVar5);
      FUN_01166f10(param_2,*param_1,param_1[1] + param_1[0xb]);
      FUN_01166e80(param_2,uVar4,uVar5);
      FUN_01166f10(param_2,uVar4,uVar5);
    }
    else if (iVar6 == 2) {
      FUN_01166e80(param_2,uVar2,uVar3);
      FUN_01166f10(param_2,uVar2,param_1[1]);
      FUN_01166f10(param_2,*param_1 + param_1[0xb],param_1[1]);
      FUN_01166e80(param_2,uVar4,uVar5);
      FUN_01166f10(param_2,uVar4,param_1[1]);
      FUN_01166f10(param_2,*param_1 - param_1[0xb],param_1[1]);
    }
    else if (iVar6 == 3) {
      FUN_01166e80(param_2,uVar2,uVar3);
      FUN_01166f10(param_2,*param_1,uVar3);
      FUN_01166f10(param_2,*param_1,param_1[1] + param_1[0xb]);
      FUN_01166e80(param_2,uVar4,uVar5);
      FUN_01166f10(param_2,*param_1,uVar5);
      FUN_01166f10(param_2,*param_1,param_1[1] - param_1[0xb]);
    }
  }
  iVar6 = 0;
  if (DAT_0203d978 != 0) {
    iVar6 = *(int *)(DAT_0203d978 + -4);
  }
  FUN_00416dc0(&DAT_0203d980,DAT_0203d978,1,iVar6 + -1);
  FUN_00414ad0(&DAT_0203d978,DAT_0203d980);
  FUN_01165eb0(&DAT_0203d978);
  return;
}

