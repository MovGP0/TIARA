/* Ghidra address: 01789570 */
/* Ghidra symbol: FUN_01789570 */


void FUN_01789570(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_01789520();
  return;
}

