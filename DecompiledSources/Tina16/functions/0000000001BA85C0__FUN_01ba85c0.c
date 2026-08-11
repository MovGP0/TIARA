/* Ghidra address: 01ba85c0 */
/* Ghidra symbol: FUN_01ba85c0 */


void FUN_01ba85c0(longlong param_1,longlong param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_40 = 0;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  (**(code **)(**(longlong **)(param_2 + 0x490) + 0xa8))(*(longlong **)(param_2 + 0x490),&local_38);
  (**(code **)(**(longlong **)(param_2 + 0x4f0) + 0x18))
            (*(longlong **)(param_2 + 0x4f0),&local_40,param_3);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))(*(longlong **)(param_1 + 0x6d0));
  if (iVar2 != -1) {
    (**(code **)(**(longlong **)(param_2 + 0x490) + 0x120))
              (*(longlong **)(param_2 + 0x490),(int)local_38 + 2,local_38._4_4_,local_40);
    local_38 = CONCAT44(local_38._4_4_ -
                        *(int *)(*(longlong *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0x6d0) + 0xb8) + 0x18) +
                                0x28),(int)local_38);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4f0);
    uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,param_3);
    FUN_01ba6260(param_1,*(undefined8 *)(param_2 + 0x490),&local_38,uVar3);
  }
  FUN_00414480(&local_40);
  return;
}

