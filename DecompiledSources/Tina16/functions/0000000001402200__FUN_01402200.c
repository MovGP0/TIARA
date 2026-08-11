/* Ghidra address: 01402200 */
/* Ghidra symbol: FUN_01402200 */


void FUN_01402200(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x770),local_20);
  plVar1 = *(longlong **)(param_1 + 0x780);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],local_30,uVar2);
  FUN_00416ea0(local_30[0],local_20,*(undefined4 *)(param_1 + 0x8a8));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x770),local_20[0]);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

