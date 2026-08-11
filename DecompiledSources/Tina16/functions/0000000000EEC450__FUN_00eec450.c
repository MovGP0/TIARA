/* Ghidra address: 00eec450 */
/* Ghidra symbol: FUN_00eec450 */


void FUN_00eec450(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_00eec400();
  return;
}

