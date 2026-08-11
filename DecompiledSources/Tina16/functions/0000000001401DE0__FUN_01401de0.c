/* Ghidra address: 01401de0 */
/* Ghidra symbol: FUN_01401de0 */


void FUN_01401de0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x710);
  if (0 < *(int *)(param_1 + 0x890)) {
    iVar3 = *(int *)(param_1 + 0x890) + -1;
    if (*(int *)(param_1 + 0x8a0) <= iVar3) {
      FUN_00848a70(uVar1,iVar3);
    }
    FUN_0084e3e0(uVar1,0,*(int *)(param_1 + 0x890) + -1,0);
    FUN_0084e3e0(uVar1,1,*(int *)(param_1 + 0x890) + -1,0);
    FUN_00b0adf0(uVar1);
    *(int *)(param_1 + 0x890) = *(int *)(param_1 + 0x890) + -1;
    lVar2 = *(longlong *)(param_1 + 0x8c0);
    if (lVar2 != 0) {
      iVar3 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x700));
      FUN_0040d200(lVar2,(longlong)(iVar3 * 2),0);
      iVar3 = *(int *)(param_1 + 0x890);
      iVar5 = 0;
      if (-1 < iVar3 + -1) {
        do {
          uVar4 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x700));
          FUN_014002c0(param_1,local_30,*(undefined8 *)(param_1 + 0x8c0),iVar5 + 1,uVar4);
          FUN_0084e3e0(uVar1,0,iVar5,local_30[0]);
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  FUN_00414480(local_30);
  return;
}

