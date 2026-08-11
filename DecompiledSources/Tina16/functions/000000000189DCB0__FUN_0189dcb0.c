/* Ghidra address: 0189dcb0 */
/* Ghidra symbol: FUN_0189dcb0 */


void FUN_0189dcb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  FUN_0197a010(param_1,param_2,param_3);
  plVar1 = *(longlong **)(param_1 + 0x108);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xd8))(plVar1,param_2,param_3);
  }
  return;
}

