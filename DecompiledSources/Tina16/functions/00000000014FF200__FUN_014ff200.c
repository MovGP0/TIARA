/* Ghidra address: 014ff200 */
/* Ghidra symbol: FUN_014ff200 */


void FUN_014ff200(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_40 [2];
  
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_40[0] = 0;
  iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x790) + 0xa28) + 0x10);
  iVar4 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x790) + 0xa28),iVar4);
      iVar7 = *(int *)(*(longlong *)(lVar2 + 8) + 0x10);
      iVar5 = 0;
      if (-1 < iVar7 + -1) {
        do {
          lVar3 = FUN_004aeac0(*(undefined8 *)(lVar2 + 8),iVar5);
          uVar1 = FUN_014ff140(param_1,*(undefined4 *)(lVar3 + 8),local_40);
          FUN_015f5620(&local_60,local_40[0],uVar1);
          FUN_01576310(lVar2,iVar5,&local_60);
          iVar5 = iVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00417740(&local_60,&DAT_00e021a8);
  FUN_00414480(local_40);
  return;
}

