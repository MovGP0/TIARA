/* Ghidra address: 00a77a50 */
/* Ghidra symbol: FUN_00a77a50 */


void FUN_00a77a50(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x618) = *param_2;
  *(undefined8 *)(param_1 + 0x620) = param_2[1];
  return;
}

