/* Ghidra address: 01bfc650 */
/* Ghidra symbol: FUN_01bfc650 */


void FUN_01bfc650(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(param_1 + 0x10))
              (*(undefined8 *)(param_1 + 0x18),param_1,*(undefined1 *)(param_1 + 0x20));
  }
  return;
}

