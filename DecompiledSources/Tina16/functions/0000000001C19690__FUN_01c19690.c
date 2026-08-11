/* Ghidra address: 01c19690 */
/* Ghidra symbol: FUN_01c19690 */


void FUN_01c19690(longlong *param_1,ulonglong *param_2)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  char local_21;
  undefined8 local_20;
  
  local_20 = *param_2;
  cVar2 = FUN_01c06f30(param_1);
  if (cVar2 == '\0') {
    return;
  }
  lVar5 = (**(code **)(*param_1 + 0x220))(param_1,1,&local_21,*(undefined4 *)(param_1[100] + 0xa0));
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x94) + *(int *)((longlong)param_1 + 0x334) +
        *(int *)((longlong)param_1 + 0x33c) < *(int *)((longlong)param_1 + 0x34c)) {
      local_20 = CONCAT44(local_20._4_4_,
                          (int)local_20 +
                          (((*(int *)((longlong)param_1 + 0x34c) - *(int *)(lVar5 + 0x94)) -
                           *(int *)((longlong)param_1 + 0x334)) -
                          *(int *)((longlong)param_1 + 0x33c)) / 2);
    }
    uVar1 = *(uint *)(param_1 + 0x67);
    uVar6 = (ulonglong)uVar1;
    if ((int)(*(int *)(lVar5 + 0x90) + uVar1 + (int)param_1[0x68]) <
        *(int *)((longlong)param_1 + 0x9c)) {
      iVar4 = ((*(int *)((longlong)param_1 + 0x9c) - *(int *)(lVar5 + 0x90)) - uVar1) -
              (int)param_1[0x68];
      uVar6 = (longlong)iVar4 % 2 & 0xffffffff;
      local_20 = CONCAT44(local_20._4_4_ + iVar4 / 2,(int)local_20);
    }
    if (((((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) &&
         (*(char *)((longlong)param_1 + 0x366) == '\x02')) &&
        (cVar2 = (**(code **)(*param_1 + 0x228))(param_1,uVar6), cVar2 == '\0')) &&
       (cVar2 = FUN_01c15bf0(), cVar2 != '\0')) {
      local_20 = CONCAT44(local_20._4_4_ + 1,(int)local_20 + 1);
    }
    if (((local_21 == '\0') &&
        ((cVar2 = (**(code **)(*param_1 + 0xf0))(param_1), cVar2 == '\0' ||
         (*(int *)(param_1[100] + 0xa0) == -1)))) &&
       ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    FUN_007d6cc0(lVar5,param_1[0x62],local_20 & 0xffffffff,local_20._4_4_,
                 *(undefined4 *)(param_1[100] + 0xa0),3,0,uVar3);
    return;
  }
  return;
}

