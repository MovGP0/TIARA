/* Ghidra address: 0199ac00 */
/* Ghidra symbol: FUN_0199ac00 */


undefined4 FUN_0199ac00(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  bVar3 = false;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x1a8);
  if ((((*(char *)(lVar1 + 0x110) == '\x01') && (*(longlong *)(lVar1 + 0xc0) != 0)) &&
      (iVar4 = (**(code **)(**(longlong **)(lVar1 + 0xc0) + 0x28))(*(longlong **)(lVar1 + 0xc0)),
      0 < iVar4)) &&
     (plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x1a8) + 0xc0),
     iVar4 = (**(code **)(*plVar2 + 0x28))(plVar2), iVar4 <= param_2)) {
    plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x1a8) + 0xd8);
    iVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
    plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x1a8) + 0xc0);
    iVar5 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (param_2 - iVar5 < iVar4) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x1a8);
      plVar2 = *(longlong **)(lVar1 + 0xc0);
      iVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
      plVar2 = *(longlong **)(lVar1 + 0xd8);
      local_44 = (**(code **)(*plVar2 + 0x30))(plVar2,param_2 - iVar4);
      goto LAB_0199afc9;
    }
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x1a8);
  if (((*(char *)(lVar1 + 0x110) == '\x01') && (*(longlong *)(lVar1 + 0xc0) != 0)) &&
     ((iVar4 = (**(code **)(**(longlong **)(lVar1 + 0xc0) + 0x28))(*(longlong **)(lVar1 + 0xc0)),
      0 < iVar4 &&
      (plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x1a8) + 0xc0),
      iVar4 = (**(code **)(*plVar2 + 0x28))(plVar2), param_2 < iVar4)))) {
    plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x1a8) + 0xc0);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_30,param_2);
    bVar3 = false;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x1a8);
    if (((*(char *)(lVar1 + 0x110) == '\x01') && (*(longlong *)(lVar1 + 0xc0) != 0)) &&
       (iVar4 = (**(code **)(**(longlong **)(lVar1 + 0xc0) + 0x28))(*(longlong **)(lVar1 + 0xc0)),
       iVar4 == 0)) {
      FUN_0043f750(&local_30,param_2 + 1);
    }
    else {
      bVar3 = true;
      plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x1a8) + 0xd0);
      iVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
      if (iVar4 <= param_2) {
        plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x1a8) + 0xd8);
        iVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
        plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x1a8) + 0xd0);
        iVar5 = (**(code **)(*plVar2 + 0x28))(plVar2);
        if (param_2 - iVar5 < iVar4) {
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x1a8);
          plVar2 = *(longlong **)(lVar1 + 0xd0);
          iVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
          plVar2 = *(longlong **)(lVar1 + 0xd8);
          local_44 = (**(code **)(*plVar2 + 0x30))(plVar2,param_2 - iVar4);
          goto LAB_0199afc9;
        }
      }
      plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x1a8) + 0xd0);
      iVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
      if (param_2 < iVar4) {
        plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x1a8) + 0xd0);
        (**(code **)(*plVar2 + 0x18))(plVar2,&local_30,param_2);
      }
      else {
        FUN_0043f750(&local_30,param_2 + 1);
      }
    }
  }
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x1c8))();
  iVar5 = 0;
  if (-1 < iVar4 + -1) {
    do {
      if (bVar3) {
        (**(code **)(**(longlong **)(param_1 + 0x68) + 0x298))
                  (*(longlong **)(param_1 + 0x68),&local_40,iVar5);
        FUN_0043e130(&local_38,local_40);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x68) + 0x298))
                  (*(longlong **)(param_1 + 0x68),&local_38,iVar5);
      }
      iVar6 = FUN_00416db0(local_38,local_30);
      if (iVar6 == 0) {
        local_44 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x210))
                             (*(longlong **)(param_1 + 0x68),iVar5);
        break;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
LAB_0199afc9:
  FUN_00414560(&local_40,3);
  return local_44;
}

