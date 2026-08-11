/* Ghidra address: 00ca8f10 */
/* Ghidra symbol: FUN_00ca8f10 */


void FUN_00ca8f10(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x80);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x98))(plVar1);
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    (**(code **)(param_1 + 0xa8))(*(undefined8 *)(param_1 + 0xb0),param_1);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}

