/* Ghidra address: 00c23d60 */
/* Ghidra symbol: FUN_00c23d60 */


void FUN_00c23d60(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
  (**(code **)(*plVar1 + 0xf0))(plVar1,param_1,param_2,param_3);
  return;
}

