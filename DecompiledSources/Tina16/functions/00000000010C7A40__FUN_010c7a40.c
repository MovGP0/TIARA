/* Ghidra address: 010c7a40 */
/* Ghidra symbol: FUN_010c7a40 */


void FUN_010c7a40(undefined1 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x18] = 0;
  return;
}

