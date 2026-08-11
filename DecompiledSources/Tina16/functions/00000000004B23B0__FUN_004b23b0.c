/* Ghidra address: 004b23b0 */
/* Ghidra symbol: FUN_004b23b0 */


longlong * FUN_004b23b0(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_004b1ca0();
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return plVar1;
}

