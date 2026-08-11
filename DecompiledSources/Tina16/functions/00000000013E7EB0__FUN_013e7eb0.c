/* Ghidra address: 013e7eb0 */
/* Ghidra symbol: FUN_013e7eb0 */


void FUN_013e7eb0(longlong param_1)

{
  double *pdVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  pdVar1 = (double *)
           FUN_004aeac0(*(longlong *)(param_1 + 0x788),
                        *(int *)(*(longlong *)(param_1 + 0x788) + 0x10) + -1);
  *(double **)(param_1 + 0x7a8) = pdVar1;
  DAT_02108468 = *pdVar1;
  pdVar1 = (double *)FUN_004095c0(0x10);
  *(double **)(param_1 + 0x7a8) = pdVar1;
  *pdVar1 = DAT_02108468 + 1.0;
  pdVar1[1] = 0.0;
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x788),pdVar1);
  FUN_013e72b0(param_1);
  if (*(int *)(param_1 + 0x778) <= *(int *)(*(longlong *)(param_1 + 0x788) + 0x10) * 2 + -1) {
    FUN_00848a70(*(longlong *)(param_1 + 0x6d0),*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4e0) + 2
                );
  }
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x788) + 0x10) + -1;
  iVar4 = iVar3 * 2;
  if (*(char *)(param_1 + 0x798) == '\0') {
    iVar4 = iVar4 + -2;
  }
  uVar2 = FUN_004aeac0(*(longlong *)(param_1 + 0x788),iVar3);
  *(undefined8 *)(param_1 + 0x7a8) = uVar2;
  (**(code **)(**(longlong **)(param_1 + 0x770) + 0x18))
            (*(longlong **)(param_1 + 0x770),&local_20,iVar4);
  uVar2 = FUN_014313c0(&PTR_FUN_0142bf08,1,*(undefined8 *)(param_1 + 0x7a8),0);
  FUN_00b0ab70(*(undefined8 *)(param_1 + 0x6d0),local_20,uVar2);
  (**(code **)(**(longlong **)(param_1 + 0x770) + 0x18))
            (*(longlong **)(param_1 + 0x770),&local_28,iVar4 + 1);
  uVar2 = FUN_014313c0(&PTR_FUN_0142bf08,1,*(longlong *)(param_1 + 0x7a8) + 8,0);
  FUN_00b0ab70(*(undefined8 *)(param_1 + 0x6d0),local_28,uVar2);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x788) + 0x10);
  iVar3 = iVar4 * 2;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4e0) + -1;
  if (iVar3 <= iVar5) {
    iVar4 = iVar5 + iVar4 * -2 + 1;
    do {
      FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d0),0,iVar3,&LAB_013e8128);
      FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d0),1,iVar3,&LAB_013e8128);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414560(&local_28,2);
  return;
}

