/* Ghidra address: 00bb4f40 */
/* Ghidra symbol: FUN_00bb4f40 */


void FUN_00bb4f40(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_00bb4ef0();
  return;
}

