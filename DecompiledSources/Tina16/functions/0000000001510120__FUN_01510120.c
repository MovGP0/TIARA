/* Ghidra address: 01510120 */
/* Ghidra symbol: FUN_01510120 */


void FUN_01510120(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 local_29 [9];
  
  plVar1 = *(longlong **)(param_1 + 0xee0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,local_29);
    FUN_00410f20(*(undefined8 *)(param_1 + 0xee0));
  }
  FUN_01508dd0(param_1,param_2);
  return;
}

