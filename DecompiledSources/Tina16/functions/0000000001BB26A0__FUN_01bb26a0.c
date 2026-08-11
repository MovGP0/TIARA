/* Ghidra address: 01bb26a0 */
/* Ghidra symbol: FUN_01bb26a0 */


void FUN_01bb26a0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  uVar2 = FUN_00b89270();
  FUN_00b8ac60(uVar2,param_1,*(undefined8 *)(param_1 + 0x758));
  if (*PTR_DAT_020033c0 == '\x01') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x758) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,local_20,0);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x748),local_20[0]);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x758) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_28,0);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x750),local_28);
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x758) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_30,1);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x748),local_30);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x758) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_38,1);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x750),local_38);
  }
  FUN_00414560(&local_38,4);
  return;
}

