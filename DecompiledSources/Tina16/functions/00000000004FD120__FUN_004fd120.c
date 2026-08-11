/* Ghidra address: 004fd120 */
/* Ghidra symbol: FUN_004fd120 */


void FUN_004fd120(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_004fd0d0();
  return;
}

