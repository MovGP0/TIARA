/* Ghidra address: 019bc1c0 */
/* Ghidra symbol: FUN_019bc1c0 */


void FUN_019bc1c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_30;
  
  local_30 = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_00f30ba0(param_1,iVar4);
      (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x18))(*(longlong **)(lVar2 + 0x10),&local_30);
      iVar1 = FUN_00416db0(local_30,L"component");
      if (iVar1 == 0) {
        uVar3 = FUN_00f2e9d0(&LAB_00f22a90,1,param_2);
        FUN_00f30070(lVar2,uVar3);
        break;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414480(&local_30);
  return;
}

