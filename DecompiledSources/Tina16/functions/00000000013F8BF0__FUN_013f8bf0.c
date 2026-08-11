/* Ghidra address: 013f8bf0 */
/* Ghidra symbol: FUN_013f8bf0 */


void FUN_013f8bf0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  lVar1 = *(longlong *)(param_1 + 0x6e0);
  lVar2 = *(longlong *)(param_1 + 0x750);
  if (1 < *(int *)(lVar2 + 0x10)) {
    FUN_008483b0(lVar1,0);
    FUN_00848a30(lVar1,1);
    FUN_00b0adf0(lVar1);
    FUN_00b0adf0(lVar1);
    FUN_01d3bac0(lVar2);
    FUN_013f76a0(param_1);
    iVar4 = *(int *)(lVar2 + 0x10) * 2;
    iVar5 = *(int *)(lVar1 + 0x4e0) + -1;
    if (iVar4 <= iVar5) {
      iVar5 = iVar5 + *(int *)(lVar2 + 0x10) * -2 + 1;
      do {
        uVar3 = FUN_00b89270();
        FUN_00b8e520(uVar3,local_30,0x46a);
        FUN_0084e3e0(lVar1,0,iVar4,local_30[0]);
        FUN_0084e3e0(lVar1,1,iVar4,&LAB_013f8d04);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  FUN_00414480(local_30);
  return;
}

