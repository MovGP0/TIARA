/* Ghidra address: 00f8ca80 */
/* Ghidra symbol: FUN_00f8ca80 */


undefined8 FUN_00f8ca80(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0xa38);
  (**(code **)(*plVar1 + 0x18))(plVar1,local_20,param_3);
  FUN_0043e1a0(param_2,local_20[0]);
  FUN_00414480(local_20);
  return param_2;
}

