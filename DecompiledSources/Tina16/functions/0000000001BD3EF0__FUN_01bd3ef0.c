/* Ghidra address: 01bd3ef0 */
/* Ghidra symbol: FUN_01bd3ef0 */


void FUN_01bd3ef0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x378) != 0) {
    (**(code **)(param_1 + 0x378))(*(undefined8 *)(param_1 + 0x380),param_1);
  }
  return;
}

