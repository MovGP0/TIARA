/* Ghidra address: 00c08740 */
/* Ghidra symbol: FUN_00c08740 */


void FUN_00c08740(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x898) = *param_2;
  *(undefined8 *)(param_1 + 0x8a0) = param_2[1];
  *(undefined8 *)(param_1 + 0x8a8) = param_2[2];
  *(undefined8 *)(param_1 + 0x8b0) = param_2[3];
  return;
}

