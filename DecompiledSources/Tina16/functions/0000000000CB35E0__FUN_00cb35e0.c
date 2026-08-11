/* Ghidra address: 00cb35e0 */
/* Ghidra symbol: FUN_00cb35e0 */


void FUN_00cb35e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  FUN_00414ad0(param_1 + 0x158,param_2);
  plVar1 = *(longlong **)(param_1 + 0x100);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xc0))(plVar1,param_2);
  }
  return;
}

