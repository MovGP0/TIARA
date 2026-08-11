/* Ghidra address: 00706200 */
/* Ghidra symbol: FUN_00706200 */


void FUN_00706200(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x4b0) = *param_2;
  *(undefined8 *)(param_1 + 0x4b8) = param_2[1];
  return;
}

