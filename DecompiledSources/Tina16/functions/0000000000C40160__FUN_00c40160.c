/* Ghidra address: 00c40160 */
/* Ghidra symbol: FUN_00c40160 */


void FUN_00c40160(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 local_30;
  
  local_30 = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar3 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
      FUN_00414b50(&local_30,*(undefined8 *)(lVar1 + 0x20));
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
      FUN_00c3f870(uVar2,local_30);
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
      iVar6 = *(int *)(lVar1 + 0x10);
      iVar4 = 0;
      if (-1 < iVar6 + -1) {
        do {
          uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
          uVar2 = FUN_004aeac0(uVar2,iVar4);
          FUN_004ae7e0(param_1,uVar2);
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414480(&local_30);
  return;
}

