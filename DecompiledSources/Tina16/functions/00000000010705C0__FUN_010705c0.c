/* Ghidra address: 010705c0 */
/* Ghidra symbol: FUN_010705c0 */


void FUN_010705c0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x260))(*(longlong **)(param_1 + 0x710));
  if (-1 < iVar3) {
    plVar1 = *(longlong **)(param_1 + 0x710);
    uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_30,uVar4);
    bVar2 = false;
    iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4a0) + 0x28))();
    iVar6 = 0;
    if (-1 < iVar3 + -1) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4a0);
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_40,iVar6);
        iVar5 = FUN_00416db0(local_40,local_30);
        if (iVar5 == 0) {
          bVar2 = true;
          break;
        }
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (!bVar2) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4a0);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_30);
    }
  }
  FUN_00414560(&local_40,3);
  return;
}

