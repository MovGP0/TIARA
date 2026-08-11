/* Ghidra address: 00423eb0 */
/* Ghidra symbol: FUN_00423eb0 */


void FUN_00423eb0(short *param_1,undefined4 param_2)

{
  short local_res10;
  short sStackX_12;
  
  local_res10 = (short)param_2;
  sStackX_12 = (short)((uint)param_2 >> 0x10);
  FUN_0040c760(((double)(int)*param_1 - (double)(int)local_res10) *
               ((double)(int)*param_1 - (double)(int)local_res10) +
               ((double)(int)param_1[1] - (double)(int)sStackX_12) *
               ((double)(int)param_1[1] - (double)(int)sStackX_12));
  return;
}

