/* Ghidra address: 01169ba0 */
/* Ghidra symbol: FUN_01169ba0 */


void FUN_01169ba0(int *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  iVar6 = 0;
  FUN_00414480(&DAT_0203d978);
  param_1[0x18] = 1;
  piVar1 = *(int **)(param_1 + 0x12);
  iVar3 = 0;
  iVar4 = 0;
  iVar5 = 0;
  if ((piVar1 != (int *)0x0) &&
     (iVar3 = 0, iVar4 = 0, iVar5 = 0, *(longlong *)(param_1 + 0x14) != 0)) {
    iVar3 = *piVar1;
    iVar4 = piVar1[1];
    iVar5 = **(int **)(param_1 + 0x14);
    iVar6 = (*(int **)(param_1 + 0x14))[1];
  }
  FUN_004169a0(&local_30,&DAT_0203a509);
  FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x918),&local_38);
  iVar2 = FUN_00416db0(local_30,local_38);
  if (iVar2 == 0) {
LAB_01169ca7:
    FUN_004169a0(&local_50,&DAT_0203a509);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x918),&local_58);
    iVar2 = FUN_00416db0(local_50,local_58);
    if (iVar2 == 0) {
      iVar3 = *param_1 - param_1[0x19];
      iVar4 = param_1[1] - param_1[0x1a];
    }
    else {
      iVar5 = *param_1 - param_1[0x19];
      iVar6 = param_1[1] + param_1[0x1a];
    }
  }
  else {
    FUN_004169a0(&local_40,&DAT_0203a509);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x928),&local_48);
    iVar2 = FUN_00416db0(local_40,local_48);
    if (iVar2 == 0) goto LAB_01169ca7;
  }
  if ((*(longlong *)(param_1 + 0x12) == 0) || (*(longlong *)(param_1 + 0x14) == 0))
  goto LAB_0116a112;
  iVar2 = param_1[10];
  if (iVar2 == 0) {
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
    goto LAB_0116a112;
  }
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      FUN_01166e80(param_2,iVar3,iVar4);
      FUN_01166f10(param_2,iVar3,param_1[1]);
      FUN_01166f10(param_2,*param_1 + param_1[0xb] / param_1[0x18],param_1[1]);
      FUN_01166e80(param_2,iVar5,iVar6);
      FUN_01166f10(param_2,iVar5,param_1[1]);
      FUN_01166f10(param_2,*param_1 - param_1[0xb] / param_1[0x18],param_1[1]);
    }
    else if (iVar2 == 3) {
      FUN_01166e80(param_2,iVar3,iVar4);
      FUN_01166f10(param_2,*param_1,iVar4);
      FUN_01166f10(param_2,*param_1,param_1[1] + param_1[0xb] / param_1[0x18]);
      FUN_01166e80(param_2,iVar5,iVar6);
      FUN_01166f10(param_2,*param_1,iVar6);
      FUN_01166f10(param_2,*param_1,param_1[1] - param_1[0xb] / param_1[0x18]);
    }
    goto LAB_0116a112;
  }
  if (*PTR_DAT_02001a98 == '\0') {
LAB_01169e73:
    FUN_01166e80(param_2,iVar3,iVar4);
    FUN_01166f10(param_2,*param_1,iVar4);
    if (iVar6 < iVar4) {
      FUN_01166f10(param_2,*param_1,param_1[1] + param_1[0xb] / param_1[0x18]);
    }
    else {
      FUN_01166f10(param_2,*param_1,param_1[1] - param_1[0xb] / param_1[0x18]);
    }
  }
  else {
    iVar2 = FUN_00416db0(DAT_0203d960,L"GENERATOR");
    if (((iVar2 != 0) || (DAT_0203d968 != iVar3)) || (DAT_0203d96c != iVar4)) goto LAB_01169e73;
  }
  if (*PTR_DAT_02001a98 != '\0') {
    iVar3 = FUN_00416db0(DAT_0203d960,L"GENERATOR");
    if (((iVar3 == 0) && (DAT_0203d968 == iVar5)) && (DAT_0203d96c == iVar6)) goto LAB_0116a112;
  }
  FUN_01166e80(param_2,iVar5,iVar6);
  FUN_01166f10(param_2,*param_1,iVar6);
  if (iVar6 < iVar4) {
    FUN_01166f10(param_2,*param_1,param_1[1] - param_1[0xb] / param_1[0x18]);
  }
  else {
    FUN_01166f10(param_2,*param_1,param_1[1] + param_1[0xb] / param_1[0x18]);
  }
LAB_0116a112:
  iVar3 = 0;
  if (DAT_0203d978 != 0) {
    iVar3 = *(int *)(DAT_0203d978 + -4);
  }
  FUN_00416dc0(&DAT_0203d980,DAT_0203d978,1,iVar3 + -1);
  FUN_00414ad0(&DAT_0203d978,DAT_0203d980);
  FUN_01165eb0(&DAT_0203d978);
  FUN_00414480(&local_58);
  FUN_00414480(&local_50);
  FUN_00414480(&local_48);
  FUN_00414480(&local_40);
  FUN_00414480(&local_38);
  FUN_00414480(&local_30);
  return;
}

