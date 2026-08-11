/* Ghidra address: 01ca7780 */
/* Ghidra symbol: FUN_01ca7780 */


void FUN_01ca7780(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_01ca7730();
  return;
}

