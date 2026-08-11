/* Ghidra address: 0113c620 */
/* Ghidra symbol: FUN_0113c620 */


void FUN_0113c620(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 local_29 [9];
  
  plVar1 = *(longlong **)(param_1 + 0xa18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,local_29);
    FUN_00410f20(*(undefined8 *)(param_1 + 0xa18));
    *(undefined8 *)(param_1 + 0xa18) = 0;
  }
  FUN_010e2c30(param_1,param_2);
  return;
}

