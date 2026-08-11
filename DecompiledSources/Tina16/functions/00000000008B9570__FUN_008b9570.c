/* Ghidra address: 008b9570 */
/* Ghidra symbol: FUN_008b9570 */


void FUN_008b9570(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_008b9520();
  return;
}

