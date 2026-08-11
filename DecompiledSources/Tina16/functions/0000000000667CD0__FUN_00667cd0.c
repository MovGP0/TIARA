/* Ghidra address: 00667cd0 */
/* Ghidra symbol: FUN_00667cd0 */


undefined8 FUN_00667cd0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  FUN_00419430(param_2,&DAT_0063aa80);
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x88))(plVar1,param_2,*(undefined8 *)(param_1 + 8));
  }
  return param_2;
}

