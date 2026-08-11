/* Ghidra address: 005fde70 */
/* Ghidra symbol: FUN_005fde70 */


void FUN_005fde70(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10),param_1);
  }
  return;
}

