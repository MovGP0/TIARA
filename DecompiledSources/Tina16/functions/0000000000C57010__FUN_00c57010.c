/* Ghidra address: 00c57010 */
/* Ghidra symbol: FUN_00c57010 */


void FUN_00c57010(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x510) != 0) {
    (**(code **)(param_1 + 0x510))(*(undefined8 *)(param_1 + 0x518),param_1);
  }
  return;
}

