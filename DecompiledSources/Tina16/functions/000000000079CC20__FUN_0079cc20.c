/* Ghidra address: 0079cc20 */
/* Ghidra symbol: FUN_0079cc20 */


void FUN_0079cc20(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_0079cbd0();
  return;
}

