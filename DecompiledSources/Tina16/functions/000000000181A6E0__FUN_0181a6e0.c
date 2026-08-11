/* Ghidra address: 0181a6e0 */
/* Ghidra symbol: FUN_0181a6e0 */


void FUN_0181a6e0(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 local_38 [16];
  
  (**(code **)(*param_1 + 0x2f8))(param_1);
  if ((*(char *)((longlong)param_1 + 0x6cd) == '\x02') ||
     ((*(char *)((longlong)param_1 + 0x6cd) == '\x01' &&
      (*(char *)((longlong)param_1 + 0x6ca) == '\0')))) {
    FUN_0181b150(param_1,0);
  }
  if ((*(char *)((longlong)param_1 + 0x6bc) != '\0') && ((int)param_1[0xd7] == 0)) {
    uVar2 = FUN_0181a900(param_1);
    FUN_0181a890(param_1,uVar2);
  }
  (**(code **)(*param_1 + 0x300))(param_1);
  FUN_007fdb10(param_1);
  *(undefined1 *)((longlong)param_1 + 0x6b4) = 1;
  iVar1 = (int)param_1[0xd7];
  if (0 < iVar1) {
    uVar2 = FUN_007fd7d0(param_1);
    uVar3 = FUN_007fd800(param_1);
    iVar4 = FUN_007fd7d0(param_1);
    iVar5 = FUN_0040c770((double)((int)param_1[0x13] * iVar1) /
                         (double)*(int *)(*(longlong *)PTR_DAT_02005950 + 0x98));
    iVar6 = FUN_007fd800(param_1);
    iVar7 = FUN_0040c770((double)(*(int *)((longlong)param_1 + 0x9c) * iVar1) /
                         (double)*(int *)(*(longlong *)PTR_DAT_02005950 + 0x98));
    FUN_004238d0(local_38,uVar2,uVar3,iVar4 + iVar5,iVar6 + iVar7);
    *(undefined4 *)(param_1 + 0xd7) = 0;
    uVar8 = FUN_0065b870();
    uVar9 = FUN_0042a320(iVar1,iVar1);
    thunk_FUN_041b2403(uVar8,0x2e0,uVar9,local_38);
  }
  return;
}

