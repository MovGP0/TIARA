/* Ghidra address: 006dc3b0 */
/* Ghidra symbol: FUN_006dc3b0 */


void FUN_006dc3b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x550) != 0) {
    (**(code **)(param_1 + 0x550))(*(undefined8 *)(param_1 + 0x558),param_1);
  }
  return;
}

