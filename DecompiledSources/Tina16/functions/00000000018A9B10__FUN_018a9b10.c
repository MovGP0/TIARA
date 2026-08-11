/* Ghidra address: 018a9b10 */
/* Ghidra symbol: FUN_018a9b10 */


void FUN_018a9b10(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    (**(code **)(param_1 + 0x4f0))
              (*(undefined8 *)(param_1 + 0x4f8),param_1,*(undefined4 *)(param_1 + 0x528));
  }
  return;
}

