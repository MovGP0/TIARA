/* Ghidra address: 01c16ba0 */
/* Ghidra symbol: FUN_01c16ba0 */


void FUN_01c16ba0(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  char local_29;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = *param_2;
  cVar1 = FUN_01c06f30(param_1);
  if (cVar1 == '\0') {
    uVar3 = (**(code **)(*param_1 + 0xd0))(param_1);
    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0061c2b8);
    if ((cVar1 != '\0') &&
       (lVar4 = (**(code **)(*param_1 + 0xd0))(param_1), *(char *)(lVar4 + 0xd8) != '\0')) {
      FUN_01c16580(param_1);
      return;
    }
  }
  lVar4 = (**(code **)(*param_1 + 0x220))(param_1,1,&local_29,*(undefined4 *)(param_1[100] + 0xa0));
  if (lVar4 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x210))(param_1);
    local_28._0_4_ = (int)uVar3;
    if (*(int *)(lVar4 + 0x94) == (int)local_28) {
      local_28._0_4_ = ((int)param_1[0x73] - (int)param_1[0x72]) - (int)local_28;
    }
    else {
      local_28._0_4_ =
           ((*(int *)((longlong)param_1 + 0x34c) - *(int *)(lVar4 + 0x94)) -
           *(int *)((longlong)param_1 + 0x334)) - *(int *)((longlong)param_1 + 0x33c);
    }
    local_28._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
    if (*(int *)(lVar4 + 0x90) == local_28._4_4_) {
      iVar5 = (*(int *)((longlong)param_1 + 0x39c) - *(int *)((longlong)param_1 + 0x394)) -
              local_28._4_4_;
    }
    else {
      iVar5 = ((*(int *)((longlong)param_1 + 0x9c) - *(int *)(lVar4 + 0x90)) - (int)param_1[0x67]) -
              (int)param_1[0x68];
    }
    local_20 = CONCAT44(iVar5 / 2,(int)local_28 / 2);
    local_28 = uVar3;
    if ((local_29 == '\0') &&
       (((cVar1 = (**(code **)(*param_1 + 0xf0))(param_1,(longlong)iVar5 % 2 & 0xffffffff),
         cVar1 == '\0' || (*(int *)(param_1[100] + 0xa0) == -1)) &&
        ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0)))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    FUN_007d6cc0(lVar4,param_1[0x62],local_20 & 0xffffffff,local_20._4_4_,
                 *(undefined4 *)(param_1[100] + 0xa0),3,0,uVar2);
    return;
  }
  return;
}

