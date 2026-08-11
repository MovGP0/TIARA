/* Ghidra address: 017cf850 */
/* Ghidra symbol: FUN_017cf850 */


void FUN_017cf850(longlong param_1,double param_2)

{
  FUN_017cf580(param_1,param_2 + *(double *)(param_1 + 0xa0) / 4.0,
               *(double *)(param_1 + 0x138) + *(double *)(param_1 + 0xa8));
  FUN_017cf580(param_1,param_2 + (*(double *)(param_1 + 0xa0) * 3.0) / 4.0,
               *(double *)(param_1 + 0x138) - *(double *)(param_1 + 0xa8));
  FUN_017cf580(param_1,param_2 + *(double *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x138));
  return;
}

