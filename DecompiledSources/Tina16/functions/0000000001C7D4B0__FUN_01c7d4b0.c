/* Ghidra address: 01c7d4b0 */
/* Ghidra symbol: FUN_01c7d4b0 */


void FUN_01c7d4b0(longlong param_1,longlong param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_60 = 0;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  lVar6 = FUN_004113f0(param_2,&PTR_FUN_00670158);
  plVar1 = *(longlong **)(lVar6 + 0x490);
  (**(code **)(*plVar1 + 0xa8))(plVar1,&local_38);
  lVar6 = FUN_012bedf0(*(undefined8 *)(*(longlong *)(param_1 + 0x27a8) + 0xd8),param_3);
  if ((lVar6 != 0) && (*(longlong *)(param_1 + 0x1b68) != 0)) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x1b68) + 0x60))
                      (*(longlong **)(param_1 + 0x1b68));
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x1b68) + 0x48))
                      (*(longlong **)(param_1 + 0x1b68));
    FUN_00498370(local_48,(int)local_38 + 2,local_38._4_4_,uVar3,uVar4);
    plVar2 = *(longlong **)(param_1 + 0x1b68);
    uVar3 = (**(code **)(*plVar2 + 0x60))(plVar2);
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x1b68) + 0x48))
                      (*(longlong **)(param_1 + 0x1b68));
    FUN_00498370(local_58,0,0,uVar3,uVar4);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_48,plVar2,local_58,0x800080);
  }
  iVar5 = (**(code **)(**(longlong **)(param_1 + 0x1b68) + 0x60))(*(longlong **)(param_1 + 0x1b68));
  (**(code **)(**(longlong **)(param_2 + 0x4f0) + 0x18))
            (*(longlong **)(param_2 + 0x4f0),&local_60,param_3);
  (**(code **)(*plVar1 + 0x120))(plVar1,(int)local_38 + iVar5 + 4,local_38._4_4_,local_60);
  FUN_00414480(&local_60);
  return;
}

