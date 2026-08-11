/* Ghidra address: 017cf630 */
/* Ghidra symbol: FUN_017cf630 */


void FUN_017cf630(longlong param_1)

{
  FUN_017cf560(param_1,0,*(undefined8 *)(param_1 + 0x138));
  FUN_017cf580(param_1,0,*(double *)(param_1 + 0x138) + *(double *)(param_1 + 0xa8));
  FUN_017cf580(param_1,*(undefined8 *)(param_1 + 0xa0),
               *(double *)(param_1 + 0x138) + *(double *)(param_1 + 0xa8));
  FUN_017cf580(param_1,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x138));
  FUN_017cf580(param_1,*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0x138));
  return;
}

