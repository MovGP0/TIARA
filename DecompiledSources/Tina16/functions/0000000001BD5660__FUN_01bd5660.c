/* Ghidra address: 01bd5660 */
/* Ghidra symbol: FUN_01bd5660 */


void FUN_01bd5660(longlong *param_1,longlong param_2,undefined4 *param_3,int *param_4,
                 undefined4 *param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar8;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_40 = *param_8;
  local_38 = param_8[1];
  uStack_30 = param_8[2];
  cVar2 = FUN_01bd5f20(param_1);
  if (cVar2 == '\0') {
    FUN_01c00070(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&local_40);
    return;
  }
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_01bf4f40);
  if (cVar2 != '\0') {
    if ((int)local_38 == 0) {
      iVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,0);
      iVar4 = FUN_0064d0b0(param_1);
      iVar5 = (**(code **)(*param_1 + 0x2b0))(param_1,1);
      iVar6 = FUN_0064d120(param_1);
      FUN_004238d0(&local_58,(int)param_1[0xa1] + iVar3,*(undefined4 *)((longlong)param_1 + 0x504),
                   (iVar4 - *(int *)((longlong)param_1 + 0x504)) - iVar5,
                   CONCAT44(uVar8,iVar6 - *(int *)((longlong)param_1 + 0x504)));
      *param_7 = local_58;
      param_7[1] = uStack_50;
      if (0 < (int)param_1[0xaa]) {
        *(int *)((longlong)param_7 + 4) =
             *(int *)((longlong)param_7 + 4) +
             *(int *)(param_1[0xad] + 0x9c) + *(int *)((longlong)param_1 + 0x4c4);
      }
    }
    if ((int)param_1[0xaa] <= (int)local_38) {
      *param_4 = *(int *)((longlong)param_7 + 4);
      iVar3 = FUN_0064d120(param_1);
      if (iVar3 - *(int *)((longlong)param_1 + 0x504) < *param_4 + *(int *)(param_2 + 0x9c)) {
        bVar1 = true;
      }
      else {
        lVar7 = FUN_01c019a0(param_1);
        if (((int)local_38 == *(int *)(*(longlong *)(lVar7 + 0x10) + 0x10) + -1) ||
           (iVar3 = FUN_0064d120(param_1),
           *param_4 + *(int *)(param_2 + 0x9c) <=
           (iVar3 - *(int *)((longlong)param_1 + 0x504)) - *(int *)(param_1[0xac] + 0x9c))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      if (bVar1) {
        *param_4 = -99999;
      }
      else {
        lVar7 = FUN_01c019a0(param_1);
        *(bool *)(param_1 + 0xa9) =
             (int)local_38 == *(int *)(*(longlong *)(lVar7 + 0x10) + 0x10) + -1;
      }
      *param_3 = *(undefined4 *)param_7;
      *param_5 = *(undefined4 *)(param_7 + 1);
      *(int *)((longlong)param_7 + 4) =
           *(int *)((longlong)param_7 + 4) +
           *(int *)(param_2 + 0x9c) + *(int *)((longlong)param_1 + 0x4c4);
      return;
    }
    *param_4 = -99999;
    return;
  }
  return;
}

