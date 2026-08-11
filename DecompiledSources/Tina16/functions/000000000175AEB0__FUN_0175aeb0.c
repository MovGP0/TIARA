/* Ghidra address: 0175aeb0 */
/* Ghidra symbol: FUN_0175aeb0 */


void FUN_0175aeb0(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x48);
  }
  return;
}

