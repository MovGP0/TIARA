/* Ghidra address: 00723d50 */
/* Ghidra symbol: FUN_00723d50 */


void FUN_00723d50(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x120) != 0) {
    (**(code **)(param_1 + 0x120))(*(undefined8 *)(param_1 + 0x128),param_1);
  }
  return;
}

