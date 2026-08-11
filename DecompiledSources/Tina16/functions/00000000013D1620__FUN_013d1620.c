/* Ghidra address: 013d1620 */
/* Ghidra symbol: FUN_013d1620 */


void FUN_013d1620(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  if (*PTR_DAT_02002df8 == '\0') {
    (**(code **)(*(longlong *)param_2[0xf] + 0x10))
              ((longlong *)param_2[0xf],*(undefined8 *)(param_1 + 0x58));
    FUN_005fd640(param_2[0xf],0xf);
    uVar3 = FUN_005fd4d0(param_2[0xf]);
    FUN_005fdab0(param_2[0x10],uVar3);
    FUN_005fdcb0(param_2[0x10],0);
    if (*(char *)(param_1 + 0x48) == '\0') {
      lVar2 = *(longlong *)(param_1 + 0x60);
      uVar3 = FUN_0040c840(*(double *)(param_1 + 0x50) *
                           (double)(*(int *)(lVar2 + 0xac) - *(int *)(lVar2 + 0xa4)) +
                           (double)*(int *)(lVar2 + 0xa4));
      (**(code **)(*param_2 + 200))(param_2,*(undefined4 *)(lVar2 + 0xa0),uVar3);
      uVar3 = FUN_0040c840(*(double *)(param_1 + 0x50) *
                           (double)(*(int *)(lVar2 + 0xac) - *(int *)(lVar2 + 0xa4)) +
                           (double)*(int *)(lVar2 + 0xa4));
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(int *)(lVar2 + 0xa8) - *(int *)(param_1 + 0x4c),uVar3);
      iVar5 = *(int *)(param_1 + 0x4c);
      iVar4 = FUN_0040c840(*(double *)(param_1 + 0x50) *
                           (double)(*(int *)(lVar2 + 0xac) - *(int *)(lVar2 + 0xa4)) +
                           (double)*(int *)(lVar2 + 0xa4));
      local_50 = FUN_00498310(*(int *)(lVar2 + 0xa8) - iVar5,iVar4 - iVar5 / 2);
      iVar5 = FUN_0040c840(*(double *)(param_1 + 0x50) *
                           (double)(*(int *)(lVar2 + 0xac) - *(int *)(lVar2 + 0xa4)) +
                           (double)*(int *)(lVar2 + 0xa4));
      local_48 = FUN_00498310(*(undefined4 *)(lVar2 + 0xa8),iVar5 - *(int *)(param_1 + 0x4c) / 2);
      iVar5 = FUN_0040c840(*(double *)(param_1 + 0x50) *
                           (double)(*(int *)(lVar2 + 0xac) - *(int *)(lVar2 + 0xa4)) +
                           (double)*(int *)(lVar2 + 0xa4));
      local_40 = FUN_00498310(*(undefined4 *)(lVar2 + 0xa8),iVar5 + *(int *)(param_1 + 0x4c) / 2);
      iVar5 = *(int *)(param_1 + 0x4c);
      iVar4 = FUN_0040c840(*(double *)(param_1 + 0x50) *
                           (double)(*(int *)(lVar2 + 0xac) - *(int *)(lVar2 + 0xa4)) +
                           (double)*(int *)(lVar2 + 0xa4));
      local_38 = FUN_00498310(*(int *)(lVar2 + 0xa8) - iVar5,iVar4 + iVar5 / 2);
      iVar5 = *(int *)(param_1 + 0x4c);
      iVar4 = FUN_0040c840(*(double *)(param_1 + 0x50) *
                           (double)(*(int *)(lVar2 + 0xac) - *(int *)(lVar2 + 0xa4)) +
                           (double)*(int *)(lVar2 + 0xa4));
      local_30 = FUN_00498310(*(int *)(lVar2 + 0xa8) - iVar5,iVar4 - iVar5 / 2);
      (**(code **)(*param_2 + 0xd8))(param_2,&local_50,4);
      iVar5 = FUN_0040c840(*(double *)(param_1 + 0x50) *
                           (double)(*(int *)(lVar2 + 0xac) - *(int *)(lVar2 + 0xa4)) +
                           (double)*(int *)(lVar2 + 0xa4));
      iVar4 = *(int *)(param_1 + 0x4c) / 2;
      FUN_01d2b170(param_1,*(undefined4 *)(lVar2 + 0xa0),iVar5 - iVar4,*(undefined4 *)(lVar2 + 0xa8)
                   ,iVar5 + iVar4);
    }
    else if (*(char *)(param_1 + 0x48) == '\x01') {
      lVar2 = *(longlong *)(param_1 + 0x60);
      piVar1 = (int *)(lVar2 + 0xa0);
      uVar3 = FUN_0040c840((double)*piVar1 +
                           *(double *)(param_1 + 0x50) * (double)(*(int *)(lVar2 + 0xa8) - *piVar1))
      ;
      (**(code **)(*param_2 + 200))(param_2,uVar3,*(int *)(lVar2 + 0xa4) + *(int *)(param_1 + 0x4c))
      ;
      uVar3 = FUN_0040c840((double)*piVar1 +
                           *(double *)(param_1 + 0x50) * (double)(*(int *)(lVar2 + 0xa8) - *piVar1))
      ;
      (**(code **)(*param_2 + 0xc0))(param_2,uVar3,*(undefined4 *)(lVar2 + 0xac));
      uVar3 = FUN_0040c840(((double)*piVar1 +
                           *(double *)(param_1 + 0x50) * (double)(*(int *)(lVar2 + 0xa8) - *piVar1))
                           - (double)(*(int *)(param_1 + 0x4c) / 2),
                           (longlong)*(int *)(param_1 + 0x4c) % 2 & 0xffffffff);
      local_50 = FUN_00498310(uVar3,*(undefined4 *)(lVar2 + 0xa4));
      iVar5 = *(int *)(param_1 + 0x4c);
      uVar3 = FUN_0040c840(((double)*piVar1 +
                           *(double *)(param_1 + 0x50) * (double)(*(int *)(lVar2 + 0xa8) - *piVar1))
                           - (double)(iVar5 / 2),(longlong)iVar5 % 2 & 0xffffffff);
      local_48 = FUN_00498310(uVar3,*(int *)(lVar2 + 0xa4) + iVar5);
      iVar5 = *(int *)(param_1 + 0x4c);
      uVar3 = FUN_0040c840((double)*piVar1 +
                           *(double *)(param_1 + 0x50) * (double)(*(int *)(lVar2 + 0xa8) - *piVar1)
                           + (double)(iVar5 / 2),(longlong)iVar5 % 2 & 0xffffffff);
      local_40 = FUN_00498310(uVar3,*(int *)(lVar2 + 0xa4) + iVar5);
      uVar3 = FUN_0040c840((double)*piVar1 +
                           *(double *)(param_1 + 0x50) * (double)(*(int *)(lVar2 + 0xa8) - *piVar1)
                           + (double)(*(int *)(param_1 + 0x4c) / 2),
                           (longlong)*(int *)(param_1 + 0x4c) % 2 & 0xffffffff);
      local_38 = FUN_00498310(uVar3,*(undefined4 *)(lVar2 + 0xa4));
      uVar3 = FUN_0040c840(((double)*piVar1 +
                           *(double *)(param_1 + 0x50) * (double)(*(int *)(lVar2 + 0xa8) - *piVar1))
                           - (double)(*(int *)(param_1 + 0x4c) / 2),
                           (longlong)*(int *)(param_1 + 0x4c) % 2 & 0xffffffff);
      local_30 = FUN_00498310(uVar3,*(undefined4 *)(lVar2 + 0xa4));
      (**(code **)(*param_2 + 0xd8))(param_2,&local_50,4);
      uVar3 = FUN_0040c840(((double)*piVar1 +
                           *(double *)(param_1 + 0x50) * (double)(*(int *)(lVar2 + 0xa8) - *piVar1))
                           - (double)(*(int *)(param_1 + 0x4c) / 2),
                           (longlong)*(int *)(param_1 + 0x4c) % 2 & 0xffffffff);
      uVar6 = FUN_0040c840((double)*piVar1 +
                           *(double *)(param_1 + 0x50) * (double)(*(int *)(lVar2 + 0xa8) - *piVar1)
                           + (double)(*(int *)(param_1 + 0x4c) / 2),
                           (longlong)*(int *)(param_1 + 0x4c) % 2 & 0xffffffff);
      FUN_01d2b170(param_1,uVar3,*(undefined4 *)(lVar2 + 0xa4),uVar6,*(undefined4 *)(lVar2 + 0xac));
    }
  }
  return;
}

