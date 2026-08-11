/* Ghidra address: 007a7360 */
/* Ghidra symbol: FUN_007a7360 */


void FUN_007a7360(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_007a7310();
  return;
}

