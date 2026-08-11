/* Ghidra address: 01089590 */
/* Ghidra symbol: FUN_01089590 */


undefined8 FUN_01089590(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xad0) + 0xe8);
  (**(code **)(*plVar1 + 0x18))(plVar1,local_20,param_3);
  FUN_00414ad0(param_2,local_20[0]);
  FUN_00414480(local_20);
  return param_2;
}

