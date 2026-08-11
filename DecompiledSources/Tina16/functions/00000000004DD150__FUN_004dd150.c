/* Ghidra address: 004dd150 */
/* Ghidra symbol: FUN_004dd150 */


void FUN_004dd150(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_004dd100();
  return;
}

