/* Ghidra address: 01401c80 */
/* Ghidra symbol: FUN_01401c80 */


void FUN_01401c80(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x710);
  if (*(int *)(param_1 + 0x898) < *(int *)(param_1 + 0x890) * 8) {
    *(int *)(param_1 + 0x898) = *(int *)(param_1 + 0x898) + 800;
    FUN_00409620(param_1 + 0x8b0,(longlong)*(int *)(param_1 + 0x898));
  }
  uVar2 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x700));
  FUN_014002c0(param_1,local_30,*(undefined8 *)(param_1 + 0x8c0),*(int *)(param_1 + 0x890) + 1,uVar2
              );
  uVar4 = FUN_014313c0(&PTR_FUN_0142bf08,1,
                       *(longlong *)(param_1 + 0x8b0) + (longlong)*(int *)(param_1 + 0x890) * 8,0);
  FUN_00b0ab70(uVar1,local_30[0],uVar4);
  iVar3 = *(int *)(param_1 + 0x890) + 1;
  if (*(int *)(param_1 + 0x8a0) < iVar3) {
    FUN_00848a70(uVar1,iVar3);
  }
  *(int *)(param_1 + 0x890) = *(int *)(param_1 + 0x890) + 1;
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

