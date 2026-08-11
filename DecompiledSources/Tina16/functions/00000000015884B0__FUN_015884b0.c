/* Ghidra address: 015884b0 */
/* Ghidra symbol: FUN_015884b0 */


void FUN_015884b0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_01588460();
  return;
}

