/* Ghidra address: 006680d0 */
/* Ghidra symbol: FUN_006680d0 */


void FUN_006680d0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xf8))(plVar1,*(undefined8 *)(param_1 + 8),param_2);
  }
  return;
}

