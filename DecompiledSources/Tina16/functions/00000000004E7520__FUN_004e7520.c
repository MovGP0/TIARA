/* Ghidra address: 004e7520 */
/* Ghidra symbol: FUN_004e7520 */


void FUN_004e7520(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_004e74d0();
  return;
}

