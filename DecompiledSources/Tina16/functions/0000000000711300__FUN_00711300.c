/* Ghidra address: 00711300 */
/* Ghidra symbol: FUN_00711300 */


short * FUN_00711300(short *param_1,short *param_2)

{
  short *psVar1;
  
  psVar1 = param_1;
  for (; *param_2 != 0; param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
  }
  *param_1 = 0;
  return psVar1;
}

