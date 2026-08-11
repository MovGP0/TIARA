/* Ghidra address: 01bf62b0 */
/* Ghidra symbol: FUN_01bf62b0 */


void FUN_01bf62b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)PTR_DAT_02004030 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + -0x40))(plVar1,param_2);
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    FUN_0065a1c0(param_1,param_2);
  }
  return;
}

