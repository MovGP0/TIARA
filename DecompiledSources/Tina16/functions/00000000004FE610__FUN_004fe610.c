/* Ghidra address: 004fe610 */
/* Ghidra symbol: FUN_004fe610 */


void FUN_004fe610(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_004fe5c0();
  return;
}

