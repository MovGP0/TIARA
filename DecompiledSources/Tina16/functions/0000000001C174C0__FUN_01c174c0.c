/* Ghidra address: 01c174c0 */
/* Ghidra symbol: FUN_01c174c0 */


void FUN_01c174c0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  lVar3 = FUN_01beb450(param_1);
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_01beb450(param_1);
    iVar1 = (**(code **)(*plVar4 + 0x418))(plVar4);
    if (iVar1 != *(int *)(*(longlong *)PTR_DAT_02005950 + 0x98)) {
      local_20 = (longlong *)FUN_005fc570(&PTR_FUN_005f2d40,1);
      (**(code **)(*local_20 + 0x10))
                (local_20,*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0x110));
      plVar4 = (longlong *)FUN_01beb450(param_1);
      uVar2 = (**(code **)(*plVar4 + 0x418))(plVar4);
      uVar2 = thunk_FUN_03f3ed25(*(undefined4 *)(local_20[3] + 0x28),uVar2,
                                 *(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98));
      FUN_005fcc80(local_20,uVar2);
      (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x10))(*(longlong **)(param_1 + 0xb8),local_20)
      ;
      FUN_00410f20(local_20);
      goto LAB_01c175cc;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x10))
            (*(longlong **)(param_1 + 0xb8),*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0x110));
LAB_01c175cc:
  FUN_01bd3410(param_1);
  FUN_0064cbf0(param_1,*(int *)(param_1 + 0x98) + 2);
  return;
}

