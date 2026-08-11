/* Ghidra address: 005fbfb0 */
/* Ghidra symbol: FUN_005fbfb0 */


void FUN_005fbfb0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10),param_1);
  }
  return;
}

