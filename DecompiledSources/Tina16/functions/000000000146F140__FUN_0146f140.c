/* Ghidra address: 0146f140 */
/* Ghidra symbol: FUN_0146f140 */


void FUN_0146f140(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x750) + 0x4e8);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  FUN_0146fd80(param_1);
  return;
}

