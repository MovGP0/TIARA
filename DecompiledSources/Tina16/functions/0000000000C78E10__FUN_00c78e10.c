/* Ghidra address: 00c78e10 */
/* Ghidra symbol: FUN_00c78e10 */


void FUN_00c78e10(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x358) != 0) {
    (**(code **)(param_1 + 0x358))(*(undefined8 *)(param_1 + 0x360),param_1);
  }
  return;
}

