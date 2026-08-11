/* Ghidra address: 00ca9000 */
/* Ghidra symbol: FUN_00ca9000 */


void FUN_00ca9000(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 200) != 0) {
    (**(code **)(param_1 + 200))(*(undefined8 *)(param_1 + 0xd0),param_1,param_2);
  }
  plVar1 = *(longlong **)(param_1 + 0x80);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xa8))(plVar1,param_2);
  }
  return;
}

