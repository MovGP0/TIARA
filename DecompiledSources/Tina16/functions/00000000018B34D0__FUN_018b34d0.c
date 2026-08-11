/* Ghidra address: 018b34d0 */
/* Ghidra symbol: FUN_018b34d0 */


void FUN_018b34d0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_40 = 0;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x490);
  (**(code **)(*plVar1 + 0xa8))(plVar1,&local_38);
  uVar3 = FUN_0180bfb0();
  uVar3 = FUN_0180a040(uVar3);
  FUN_007d6c70(uVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x708) + 0x490),(int)local_38 + 2,
               local_38._4_4_,2,1);
  uVar3 = FUN_0180bfb0();
  lVar4 = FUN_0180a040(uVar3);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4f0);
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40,param_3);
  (**(code **)(*plVar1 + 0x120))
            (plVar1,(int)local_38 + *(int *)(lVar4 + 0x94) + 8,local_38._4_4_ + 1,local_40);
  FUN_00414480(&local_40);
  return;
}

