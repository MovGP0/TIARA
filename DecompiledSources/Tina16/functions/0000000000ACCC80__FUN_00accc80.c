/* Ghidra address: 00accc80 */
/* Ghidra symbol: FUN_00accc80 */


undefined8 FUN_00accc80(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x158) + 0x4d8);
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  return param_2;
}

