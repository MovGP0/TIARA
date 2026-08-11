/* Ghidra address: 01bf7130 */
/* Ghidra symbol: FUN_01bf7130 */


void FUN_01bf7130(longlong param_1,undefined8 param_2)

{
  *(longlong *)(param_1 + 0xf8) = param_1;
  *(code **)(param_1 + 0xf0) = FUN_01bf6d50;
  *(undefined8 *)(param_1 + 0xd8) = param_2;
  FUN_01bf70e0();
  return;
}

