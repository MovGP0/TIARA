/* Ghidra address: 01c00070 */
/* Ghidra symbol: FUN_01c00070 */


void FUN_01c00070(longlong *param_1,longlong param_2,int *param_3,int *param_4,int *param_5,
                 undefined4 *param_6,int *param_7,longlong *param_8)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_40;
  longlong local_38;
  longlong lStack_30;
  
  local_40 = *param_8;
  local_38 = param_8[1];
  lStack_30 = param_8[2];
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_01bf4f40);
  if (cVar2 == '\0') {
    return;
  }
  if (*(int *)(local_40 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x98);
    *(undefined4 *)((longlong)param_1 + 0x51c) = *(undefined4 *)(param_2 + 0x9c);
  }
  if ((int)local_38 == 0) {
    iVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,0);
    iVar4 = FUN_0064d0b0(param_1);
    iVar5 = (**(code **)(*param_1 + 0x2b0))(param_1,1);
    iVar6 = FUN_0064d120(param_1);
    FUN_004238d0(&local_58,(int)param_1[0xa1] + iVar3,*(undefined4 *)((longlong)param_1 + 0x504),
                 (iVar4 - *(int *)((longlong)param_1 + 0x504)) - iVar5,
                 iVar6 - *(int *)((longlong)param_1 + 0x504));
    *(undefined8 *)param_7 = local_58;
    *(undefined8 *)(param_7 + 2) = uStack_50;
  }
  cVar2 = *(char *)((longlong)param_1 + 0x4c3);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
    if ((((cVar2 != '\0') || (cVar2 = FUN_01c02d10(param_1), cVar2 != '\0')) && ((int)local_38 != 0)
        ) && (param_7[2] - *param_7 < *(int *)(param_2 + 0x98) + (int)param_1[0xa1])) {
      iVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,0);
      iVar4 = FUN_0064d0b0(param_1);
      iVar5 = (**(code **)(*param_1 + 0x2b0))(param_1,1);
      iVar6 = FUN_0064d120(param_1);
      FUN_004238d0(&local_58,(int)param_1[0xa1] + iVar3,
                   param_7[1] + *(int *)((longlong)param_1 + 0x51c) +
                   *(int *)((longlong)param_1 + 0x504) * 2 +
                   *(int *)(&DAT_01fe2224 + (ulonglong)*(byte *)((longlong)param_1 + 0x50c) * 4),
                   (iVar4 - (int)param_1[0xa1]) - iVar5,
                   (iVar6 - param_7[1]) - *(int *)((longlong)param_1 + 0x504));
      *(undefined8 *)param_7 = local_58;
      *(undefined8 *)(param_7 + 2) = uStack_50;
      *(int *)(param_1 + 0xa0) = (int)param_1[0xa0] + 1;
    }
    *param_4 = param_7[1];
    *param_3 = *param_7;
    *param_6 = *(undefined4 *)((longlong)param_1 + 0x51c);
    *param_7 = *param_7 + *(int *)(param_2 + 0x98) + *(int *)((longlong)param_1 + 0x4c4);
    return;
  }
  if (cVar2 == '\x01') {
    cVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
    if (((cVar2 != '\0') || (cVar2 = FUN_01c02d10(param_1), cVar2 != '\0')) &&
       (((int)local_38 != 0 && (param_7[2] - *param_7 < *(int *)(param_2 + 0x98))))) {
      iVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,0);
      iVar4 = FUN_0064d0b0(param_1);
      iVar5 = (**(code **)(*param_1 + 0x2b0))(param_1,1);
      iVar6 = FUN_0064d120(param_1);
      FUN_004238d0(&local_58,(int)param_1[0xa1] + iVar3,
                   param_7[1] + *(int *)((longlong)param_1 + 0x51c) +
                   *(int *)((longlong)param_1 + 0x504) * 2 +
                   *(int *)(&DAT_01fe2224 + (ulonglong)*(byte *)((longlong)param_1 + 0x50c) * 4),
                   (iVar4 - (int)param_1[0xa1]) - iVar5,
                   (iVar6 - param_7[1]) - *(int *)((longlong)param_1 + 0x504));
      *(undefined8 *)param_7 = local_58;
      *(undefined8 *)(param_7 + 2) = uStack_50;
      *(int *)(param_1 + 0xa0) = (int)param_1[0xa0] + 1;
    }
    *param_4 = param_7[1];
    if ((int)local_38 == 0) {
      iVar3 = *(int *)(param_2 + 0x98);
      *param_3 = (param_7[2] - iVar3) - (int)param_1[0xa1];
      param_7[2] = param_7[2] -
                   (*(int *)((longlong)param_1 + 0x504) + iVar3 +
                   *(int *)((longlong)param_1 + 0x4c4));
    }
    else {
      iVar3 = *(int *)(param_2 + 0x98);
      *param_3 = param_7[2] - iVar3;
      if ((int)local_38 == *(int *)(local_40 + 0x10) + -1) {
        param_7[2] = param_7[2] - iVar3;
      }
      else {
        param_7[2] = param_7[2] - (iVar3 + *(int *)((longlong)param_1 + 0x4c4));
      }
    }
    *param_6 = *(undefined4 *)((longlong)param_1 + 0x51c);
    return;
  }
  if (cVar2 == '\x02') {
    cVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
    if (((cVar2 != '\0') || (cVar2 = FUN_01c02d10(param_1), cVar2 != '\0')) &&
       (((int)local_38 != 0 && (param_7[3] - param_7[1] < *(int *)(param_2 + 0x9c))))) {
      iVar3 = FUN_0064d0b0(param_1);
      iVar4 = (**(code **)(*param_1 + 0x2b0))(param_1,1);
      iVar5 = FUN_0064d120(param_1);
      FUN_004238d0(&local_58,
                   *param_7 + (int)param_1[0xa4] + (int)param_1[0xa1] * 2 +
                   *(int *)(&DAT_01fe2224 + (ulonglong)*(byte *)((longlong)param_1 + 0x50c) * 4),
                   *(undefined4 *)((longlong)param_1 + 0x504),(iVar3 - (int)param_1[0xa1]) - iVar4,
                   iVar5 - *(int *)((longlong)param_1 + 0x504));
      *(undefined8 *)param_7 = local_58;
      *(undefined8 *)(param_7 + 2) = uStack_50;
      *(int *)((longlong)param_1 + 0x4fc) = *(int *)((longlong)param_1 + 0x4fc) + 1;
    }
    if ((int)local_38 == 0) {
      *param_4 = *(int *)((longlong)param_1 + 0x504);
    }
    else {
      *param_4 = param_7[1];
    }
    iVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,2);
    param_7[2] = (int)param_1[0xa4] + iVar3;
    *param_3 = *param_7;
    *param_5 = (int)param_1[0xa4];
    param_7[1] = param_7[1] + *(int *)(param_2 + 0x9c) + *(int *)((longlong)param_1 + 0x4c4);
    return;
  }
  if (cVar2 == '\x03') {
    cVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
    if ((((cVar2 != '\0') || (cVar2 = FUN_01c02d10(param_1), cVar2 != '\0')) && ((int)local_38 != 0)
        ) && (param_7[3] - param_7[1] < *(int *)(param_2 + 0x9c))) {
      iVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,0);
      iVar4 = FUN_0064d120(param_1);
      FUN_004238d0(&local_58,(int)param_1[0xa1] + iVar3,*(undefined4 *)((longlong)param_1 + 0x504),
                   ((param_7[2] - (int)param_1[0xa4]) + (int)param_1[0xa1] * -2) -
                   *(int *)(&DAT_01fe2224 + (ulonglong)*(byte *)((longlong)param_1 + 0x50c) * 4),
                   iVar4 - *(int *)((longlong)param_1 + 0x504));
      *(undefined8 *)param_7 = local_58;
      *(undefined8 *)(param_7 + 2) = uStack_50;
      *(int *)((longlong)param_1 + 0x4fc) = *(int *)((longlong)param_1 + 0x4fc) + 1;
    }
    if ((int)local_38 == 0) {
      iVar3 = FUN_0064d120(param_1);
      *param_4 = (iVar3 - *(int *)(param_2 + 0x9c)) - (int)param_1[0xa1];
    }
    else {
      *param_4 = (param_7[3] - *(int *)(param_2 + 0x9c)) - *(int *)((longlong)param_1 + 0x4c4);
    }
    lVar1 = param_1[0xa4];
    *param_3 = param_7[2] - (int)lVar1;
    *param_5 = (int)lVar1;
    param_7[3] = param_7[3] - (*(int *)(param_2 + 0x9c) + *(int *)((longlong)param_1 + 0x4c4));
    return;
  }
  return;
}

