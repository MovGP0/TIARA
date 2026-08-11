/* Ghidra address: 009ddb60 */
/* Ghidra symbol: FUN_009ddb60 */


void FUN_009ddb60(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_009ddb10();
  return;
}

