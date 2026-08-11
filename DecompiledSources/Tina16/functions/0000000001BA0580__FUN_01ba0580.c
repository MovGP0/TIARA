/* Ghidra address: 01ba0580 */
/* Ghidra symbol: FUN_01ba0580 */


void FUN_01ba0580(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x6e8) = *param_2;
  *(undefined8 *)(param_1 + 0x6f0) = param_2[1];
  *(undefined8 *)(param_1 + 0x6f8) = param_2[2];
  return;
}

