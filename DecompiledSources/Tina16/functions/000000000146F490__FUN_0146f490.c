/* Ghidra address: 0146f490 */
/* Ghidra symbol: FUN_0146f490 */


void FUN_0146f490(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x738) + 0x4e8);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  local_30 = *(undefined8 *)(param_1 + 0x7f8);
  local_28 = 0x11;
  FUN_00442f70(local_20,L"noname%s",&local_30,0);
  FUN_00414ad0(param_1 + 0x7f0,local_20[0]);
  FUN_0146fe10(param_1);
  FUN_0146f8e0(param_1);
  FUN_00414480(local_20);
  return;
}

