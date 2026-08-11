/* Ghidra address: 01a52f60 */
/* Ghidra symbol: FUN_01a52f60 */


void FUN_01a52f60(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 local_20;
  
  local_20 = 0;
  plVar1 = *(longlong **)(param_1 + 0x718);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_20,uVar2);
  FUN_0064de00(plVar1,local_20);
  FUN_01a47dd0(param_1,param_2,1);
  FUN_00414480(&local_20);
  return;
}

