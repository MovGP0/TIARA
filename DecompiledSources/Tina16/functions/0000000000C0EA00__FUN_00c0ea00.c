/* Ghidra address: 00c0ea00 */
/* Ghidra symbol: FUN_00c0ea00 */


void FUN_00c0ea00(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x7c0) != 0) {
    (**(code **)(param_1 + 0x7c0))
              (*(undefined8 *)(param_1 + 0x7c8),param_1,*(undefined2 *)(param_1 + 0x63e));
    *(undefined2 *)(param_1 + 0x63e) = 0;
  }
  return;
}

