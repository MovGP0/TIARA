/* Ghidra address: 007a3d80 */
/* Ghidra symbol: FUN_007a3d80 */


void FUN_007a3d80(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_007a3d30();
  return;
}

