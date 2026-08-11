/* Ghidra address: 00b62830 */
/* Ghidra symbol: FUN_00b62830 */


void FUN_00b62830(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x70) + 0x68);
  (**(code **)(*plVar1 + -0x20))(plVar1,1);
  return;
}

