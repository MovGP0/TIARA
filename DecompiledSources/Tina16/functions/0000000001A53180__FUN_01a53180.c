/* Ghidra address: 01a53180 */
/* Ghidra symbol: FUN_01a53180 */


void FUN_01a53180(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined4 *)(param_1 + 0x948) = 1;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x510);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  FUN_01a474e0(param_1);
  return;
}

