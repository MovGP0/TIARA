/* Ghidra address: 00ebbfa0 */
/* Ghidra symbol: FUN_00ebbfa0 */


void FUN_00ebbfa0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))(*(longlong **)(param_1 + 0x6f0));
  FUN_004b3cf0(*(undefined8 *)(param_1 + 0x758),local_20,uVar2);
  uVar3 = FUN_00eba760(local_20[0]);
  *(undefined8 *)(param_1 + 0x768) = uVar3;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f8) + 0x4f0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  FUN_00685670(*(undefined8 *)(param_1 + 0x6f8),1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f8) + 0x4f0);
  (**(code **)(*plVar1 + 0x88))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x768) + 8));
  FUN_00685670(*(undefined8 *)(param_1 + 0x6f8),0);
  uVar3 = FUN_00b89270();
  FUN_00b8e520(uVar3,&local_28,0x825);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f8) + 0x4f0);
  (**(code **)(*plVar1 + 200))(plVar1,0,local_28);
  (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x268))(*(longlong **)(param_1 + 0x6f8),0);
  FUN_00ebc110(param_1,param_2);
  FUN_00414560(&local_28,2);
  return;
}

