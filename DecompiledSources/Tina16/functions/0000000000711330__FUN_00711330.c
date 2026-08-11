/* Ghidra address: 00711330 */
/* Ghidra symbol: FUN_00711330 */


short * FUN_00711330(short *param_1,short *param_2,int param_3)

{
  short *psVar1;
  
  psVar1 = param_1;
  for (; (*param_2 != 0 && (param_3 != 0)); param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  *param_1 = 0;
  return psVar1;
}

