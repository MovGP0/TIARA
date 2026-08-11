/* Ghidra address: 017cf910 */
/* Ghidra symbol: FUN_017cf910 */


void FUN_017cf910(longlong param_1,double param_2)

{
  FUN_017cf580(param_1,param_2 + *(double *)(param_1 + 0x58),
               *(double *)(param_1 + 0x138) + *(double *)(param_1 + 0xa8));
  FUN_017cf580(param_1,(param_2 + *(double *)(param_1 + 0xa0) / 2.0) - *(double *)(param_1 + 0x58),
               *(double *)(param_1 + 0x138) + *(double *)(param_1 + 0xa8));
  FUN_017cf580(param_1,param_2 + *(double *)(param_1 + 0xa0) / 2.0 + *(double *)(param_1 + 0x58),
               *(double *)(param_1 + 0x138) - *(double *)(param_1 + 0xa8));
  FUN_017cf580(param_1,(param_2 + *(double *)(param_1 + 0xa0)) - *(double *)(param_1 + 0x58),
               *(double *)(param_1 + 0x138) - *(double *)(param_1 + 0xa8));
  FUN_017cf580(param_1,param_2 + *(double *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x138));
  return;
}

