/* Ghidra address: 00c0fb50 */
/* Ghidra symbol: FUN_00c0fb50 */


void FUN_00c0fb50(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30 = FUN_00bf2b30(param_1);
  iVar2 = FUN_00c0fa70(param_1,&local_30);
  iVar2 = iVar2 + param_2;
  if ((param_2 < 0) && (-1 < iVar2)) {
    local_20[0] = FUN_00c0f9a0(param_1,iVar2);
    local_30 = FUN_00bf2b30(param_1);
    FUN_00c0a5f0(param_1,local_20,local_20,&local_30);
  }
  else {
    if (iVar2 < 0) {
      plVar1 = *(longlong **)(param_1 + 0x4e8);
      iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_38,iVar2 + -1);
      iVar2 = 0;
      if (local_38 != 0) {
        iVar2 = *(int *)(local_38 + -4);
      }
      local_28 = CONCAT44(local_28._4_4_,iVar2 + 1);
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))
                        (*(longlong **)(param_1 + 0x4e8));
      local_28 = CONCAT44(uVar3,(undefined4)local_28);
    }
    else {
      local_28 = FUN_00c0f9a0(param_1,iVar2);
    }
    local_30 = FUN_00bf2b30(param_1);
    FUN_00c0a5f0(param_1,&local_28,&local_30,&local_28);
  }
  FUN_00414480(&local_38);
  return;
}

