/* Ghidra address: 00c03930 */
/* Ghidra symbol: FUN_00c03930 */


void FUN_00c03930(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    FUN_004b1e70(*(undefined8 *)(param_1 + 0x5d8));
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x5d8) + 0x10))(*(longlong **)(param_1 + 0x5d8));
  }
  return;
}

