/* Ghidra address: 00ca8fb0 */
/* Ghidra symbol: FUN_00ca8fb0 */


void FUN_00ca8fb0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x80);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xa0))(plVar1,param_2);
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    (**(code **)(param_1 + 0xb8))(*(undefined8 *)(param_1 + 0xc0),param_1,param_2);
  }
  return;
}

