/* Ghidra address: 01229060 */
/* Ghidra symbol: FUN_01229060 */


void FUN_01229060(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x768),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x760),0);
  plVar1 = *(longlong **)(param_1 + 0x778);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_20,uVar2);
  FUN_0064de00(plVar1,local_20);
  plVar1 = *(longlong **)(param_1 + 0x788);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_28,uVar2);
  FUN_0064de00(plVar1,local_28);
  plVar1 = *(longlong **)(param_1 + 0x798);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_30,uVar2);
  FUN_0064de00(plVar1,local_30);
  FUN_0122b3a0(param_1,DAT_021076a8);
  (**(code **)(**(longlong **)(param_1 + 0x968) + 600))(*(longlong **)(param_1 + 0x968));
  *(undefined4 *)PTR_DAT_02004700 = 8000;
  FUN_0064de00(*(undefined8 *)(param_1 + 0x988),L"Filter design");
  FUN_00414560(&local_30,3);
  return;
}

