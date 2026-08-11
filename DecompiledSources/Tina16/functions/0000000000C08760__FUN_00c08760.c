/* Ghidra address: 00c08760 */
/* Ghidra symbol: FUN_00c08760 */


void FUN_00c08760(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x878) = *param_2;
  *(undefined8 *)(param_1 + 0x880) = param_2[1];
  *(undefined8 *)(param_1 + 0x888) = param_2[2];
  *(undefined8 *)(param_1 + 0x890) = param_2[3];
  return;
}

