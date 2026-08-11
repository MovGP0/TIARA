/* Ghidra address: 00f036d0 */
/* Ghidra symbol: FUN_00f036d0 */


void FUN_00f036d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (param_2 == 0) {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    plVar1 = (longlong *)FUN_00f031c0(param_1);
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  }
  return;
}

