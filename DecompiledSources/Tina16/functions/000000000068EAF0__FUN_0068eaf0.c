/* Ghidra address: 0068eaf0 */
/* Ghidra symbol: FUN_0068eaf0 */


void FUN_0068eaf0(longlong param_1)

{
  FUN_0064d480(param_1);
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    (**(code **)(param_1 + 0x4b0))(*(undefined8 *)(param_1 + 0x4b8),param_1);
  }
  return;
}

