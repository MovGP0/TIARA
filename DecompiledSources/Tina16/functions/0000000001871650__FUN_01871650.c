/* Ghidra address: 01871650 */
/* Ghidra symbol: FUN_01871650 */


longlong * FUN_01871650(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_0068b1b0(&PTR_FUN_006779f0,1,param_1[0x14]);
  (**(code **)(*plVar1 + 0x130))(plVar1,param_1[0x14]);
  FUN_0065bb80(plVar1,0);
  FUN_0064c650(plVar1,5);
  FUN_0068be70(plVar1,1);
  plVar1[0x40] = (longlong)param_1;
  plVar1[0x3f] = *(longlong *)(*param_1 + 0xb8);
  plVar1[0xa0] = (longlong)param_1;
  plVar1[0x9f] = *(longlong *)(*param_1 + 0xc0);
  return plVar1;
}

