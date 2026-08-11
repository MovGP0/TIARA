/* Ghidra address: 01406e80 */
/* Ghidra symbol: FUN_01406e80 */


void FUN_01406e80(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  double *pdVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  DAT_021084b2 = 1;
  pdVar3 = (double *)
           FUN_01d3c210(*(longlong *)(param_1 + 0x7a8),
                        *(short *)(*(longlong *)(param_1 + 0x7a8) + 0x10) + -1);
  DAT_021084b8 = *pdVar3;
  lVar1 = *(longlong *)(param_1 + 0x6d8);
  lVar2 = *(longlong *)(param_1 + 0x7a8);
  FUN_01d3c230(lVar2,DAT_021084b8 + 1.0,0,0);
  FUN_01404f30(param_1);
  if (*(int *)(param_1 + 0x7c0) <= *(int *)(lVar2 + 0x10) * 3 + -1) {
    FUN_00848a70(lVar1,*(int *)(lVar1 + 0x4e0) + 3);
  }
  local_30 = FUN_01d3c210(lVar2,*(short *)(lVar2 + 0x10) + -1);
  iVar5 = (*(int *)(lVar2 + 0x10) + -1) * 3;
  (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x18))
            (*(longlong **)(param_1 + 0x7b8),local_40,iVar5);
  uVar4 = FUN_014313c0(&PTR_FUN_0142bf08,1,local_30,0);
  FUN_00b0ab70(lVar1,local_40[0],uVar4);
  FUN_00b909d0(&local_30,8);
  (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x18))
            (*(longlong **)(param_1 + 0x7b8),&local_48,iVar5 + 1);
  uVar4 = FUN_014313c0(&PTR_FUN_0142bf08,1,local_30,0);
  FUN_00b0ab70(lVar1,local_48,uVar4);
  FUN_00b909d0(&local_30,8);
  (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x18))
            (*(longlong **)(param_1 + 0x7b8),&local_50,iVar5 + 2);
  uVar4 = FUN_014313c0(&PTR_FUN_0142bf08,1,local_30,0);
  FUN_00b0ab70(lVar1,local_50,uVar4);
  FUN_00b909d0(&local_30,8);
  iVar5 = *(int *)(lVar2 + 0x10) * 3;
  iVar6 = *(int *)(lVar1 + 0x4e0) + -1;
  if (iVar5 <= iVar6) {
    iVar6 = iVar6 + *(int *)(lVar2 + 0x10) * -3 + 1;
    do {
      FUN_0084e3e0(lVar1,0,iVar5,&LAB_014070f8);
      FUN_0084e3e0(lVar1,1,iVar5,&LAB_014070f8);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414560(&local_50,3);
  return;
}

