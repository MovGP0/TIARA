/* Ghidra address: 00ca8f60 */
/* Ghidra symbol: FUN_00ca8f60 */


void FUN_00ca8f60(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  *(undefined8 *)(param_1 + 0x78) = param_2;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    (**(code **)(param_1 + 0x98))(*(undefined8 *)(param_1 + 0xa0),param_1);
  }
  plVar1 = *(longlong **)(param_1 + 0x80);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x90))(plVar1,param_2);
  }
  return;
}

