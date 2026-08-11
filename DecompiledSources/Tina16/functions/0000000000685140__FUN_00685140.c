/* Ghidra address: 00685140 */
/* Ghidra symbol: FUN_00685140 */


void FUN_00685140(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x4f0);
  if (plVar1 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x4f0) = param_2;
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}

