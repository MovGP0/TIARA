/* Ghidra address: 00cea740 */
/* Ghidra symbol: FUN_00cea740 */


void FUN_00cea740(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x88) != 0) {
    (**(code **)(param_1 + 0x88))
              (*(undefined8 *)(param_1 + 0x90),param_1,*(undefined8 *)(param_1 + 0xa8));
  }
  return;
}

