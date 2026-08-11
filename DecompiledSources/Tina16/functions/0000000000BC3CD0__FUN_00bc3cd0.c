/* Ghidra address: 00bc3cd0 */
/* Ghidra symbol: FUN_00bc3cd0 */


short * FUN_00bc3cd0(short *param_1,short param_2)

{
  short *psVar1;
  
  for (; (*param_1 != 0 && (*param_1 != param_2)); param_1 = param_1 + 1) {
  }
  psVar1 = (short *)0x0;
  if (*param_1 != 0) {
    psVar1 = param_1;
  }
  return psVar1;
}

