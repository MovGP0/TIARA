/* Ghidra address: 00d03cb0 */
/* Ghidra symbol: FUN_00d03cb0 */


void FUN_00d03cb0(undefined8 param_1,longlong param_2)

{
  if (0 < *(int *)(param_2 + 0x8c)) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0x98);
    *(undefined8 *)(param_2 + 0x98) = 0;
    FUN_00410f20(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}

