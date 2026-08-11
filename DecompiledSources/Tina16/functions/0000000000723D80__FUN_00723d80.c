/* Ghidra address: 00723d80 */
/* Ghidra symbol: FUN_00723d80 */


void FUN_00723d80(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x130) != 0) {
    (**(code **)(param_1 + 0x130))(*(undefined8 *)(param_1 + 0x138),param_1);
  }
  return;
}

