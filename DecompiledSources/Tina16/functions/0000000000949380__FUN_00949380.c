/* Ghidra address: 00949380 */
/* Ghidra symbol: FUN_00949380 */


void FUN_00949380(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    (**(code **)(param_1 + 0xf8))(*(undefined8 *)(param_1 + 0x100));
  }
  return;
}

