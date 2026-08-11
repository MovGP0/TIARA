/* Ghidra address: 01c03e00 */
/* Ghidra symbol: FUN_01c03e00 */


void FUN_01c03e00(undefined8 param_1)

{
  longlong *plVar1;
  
  FUN_0065a550(param_1);
  plVar1 = (longlong *)FUN_01c03e40(param_1);
  (**(code **)(*plVar1 + 0x98))(plVar1);
  return;
}

