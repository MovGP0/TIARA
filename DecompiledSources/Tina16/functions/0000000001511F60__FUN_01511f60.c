/* Ghidra address: 01511f60 */
/* Ghidra symbol: FUN_01511f60 */


void FUN_01511f60(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_007fc180(&PTR_FUN_015092c8,1,param_1);
  plVar1[0xdb] = param_1;
  (**(code **)(*plVar1 + 0x2d0))(plVar1);
  return;
}

