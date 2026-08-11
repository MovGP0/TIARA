/* Ghidra address: 00949330 */
/* Ghidra symbol: FUN_00949330 */


void FUN_00949330(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    (**(code **)(param_1 + 0xe8))(*(undefined8 *)(param_1 + 0xf0));
  }
  return;
}

