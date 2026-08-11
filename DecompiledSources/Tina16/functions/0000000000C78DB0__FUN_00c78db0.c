/* Ghidra address: 00c78db0 */
/* Ghidra symbol: FUN_00c78db0 */


void FUN_00c78db0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x338) != 0) {
    (**(code **)(param_1 + 0x338))(*(undefined8 *)(param_1 + 0x340),param_1);
  }
  return;
}

