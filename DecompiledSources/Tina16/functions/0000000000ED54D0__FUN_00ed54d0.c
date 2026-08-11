/* Ghidra address: 00ed54d0 */
/* Ghidra symbol: FUN_00ed54d0 */


void FUN_00ed54d0(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  plVar1 = *(longlong **)(param_1 + 0x858);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],local_20,uVar2);
  FUN_00ecba00(param_1,local_20[0]);
  FUN_00414480(local_20);
  return;
}

