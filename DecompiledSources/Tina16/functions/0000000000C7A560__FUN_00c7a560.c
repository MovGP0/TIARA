/* Ghidra address: 00c7a560 */
/* Ghidra symbol: FUN_00c7a560 */


void FUN_00c7a560(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x328) != 0) {
    (**(code **)(param_1 + 0x328))(*(undefined8 *)(param_1 + 0x330),param_1,param_2);
  }
  return;
}

