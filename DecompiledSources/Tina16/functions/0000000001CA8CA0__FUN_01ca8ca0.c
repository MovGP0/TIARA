/* Ghidra address: 01ca8ca0 */
/* Ghidra symbol: FUN_01ca8ca0 */


void FUN_01ca8ca0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_01ca8c50();
  return;
}

