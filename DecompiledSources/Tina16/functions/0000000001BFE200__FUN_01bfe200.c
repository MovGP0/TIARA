/* Ghidra address: 01bfe200 */
/* Ghidra symbol: FUN_01bfe200 */


void FUN_01bfe200(longlong param_1)

{
  longlong *plVar1;
  
  FUN_004b1a10(param_1);
  plVar1 = *(longlong **)(param_1 + 0x80);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x240))(plVar1);
  }
  FUN_01bf6300(*(undefined8 *)(param_1 + 0x18));
  return;
}

