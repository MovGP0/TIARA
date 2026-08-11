/* Ghidra address: 010c7a60 */
/* Ghidra symbol: FUN_010c7a60 */


void FUN_010c7a60(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  FUN_010c7a80();
  return;
}

