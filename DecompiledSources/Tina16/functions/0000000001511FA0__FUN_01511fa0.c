/* Ghidra address: 01511fa0 */
/* Ghidra symbol: FUN_01511fa0 */


void FUN_01511fa0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_007fc180(&PTR_FUN_01509d48,1,param_1);
  plVar1[0xdb] = param_1;
  (**(code **)(*plVar1 + 0x2d0))(plVar1);
  FUN_01513140(param_1);
  FUN_01506c70(param_1);
  FUN_010f6920(param_1,1);
  return;
}

