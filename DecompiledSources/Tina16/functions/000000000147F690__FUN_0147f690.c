/* Ghidra address: 0147f690 */
/* Ghidra symbol: FUN_0147f690 */


void FUN_0147f690(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 local_res10 [3];
  undefined8 local_30;
  
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610();
  iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10) + 0x10);
  uVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10);
      if (*(uint *)(lVar1 + 0x10) <= uVar5) {
        FUN_00594f90();
      }
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar5 * 8);
      plVar2 = *(longlong **)(lVar1 + 0x10);
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
      iVar3 = FUN_00416db0(local_30,&LAB_0147f7a4);
      if (iVar3 == 0) {
        uVar4 = FUN_00f2e9d0(&LAB_00f22a90,1,local_res10[0]);
        FUN_00f30070(lVar1,uVar4);
        break;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414480(&local_30);
  FUN_00414480(local_res10);
  return;
}

