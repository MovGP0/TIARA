/* Ghidra address: 017cfa10 */
/* Ghidra symbol: FUN_017cfa10 */


void FUN_017cfa10(longlong param_1,double param_2)

{
  FUN_017cf580(param_1,param_2 + *(double *)(param_1 + 0x98),
               *(double *)(param_1 + 0x138) + *(double *)(param_1 + 0x90));
  FUN_017cf580(param_1,param_2 + *(double *)(param_1 + 0x88),
               *(double *)(param_1 + 0x138) + *(double *)(param_1 + 0x90));
  FUN_017cf580(param_1,param_2 + *(double *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x138));
  FUN_017cf580(param_1,param_2 + *(double *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x138));
  return;
}

