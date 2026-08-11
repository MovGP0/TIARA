/* Ghidra address: 01412ed0 */
/* Ghidra symbol: FUN_01412ed0 */


void FUN_01412ed0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  *(undefined8 *)(param_1 + 0x740) = param_2;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x510);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  return;
}

