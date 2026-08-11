/* Ghidra address: 00423dd0 */
/* Ghidra symbol: FUN_00423dd0 */


undefined4 FUN_00423dd0(short *param_1,undefined4 param_2)

{
  short local_res10;
  short sStackX_12;
  undefined4 local_c;
  
  local_res10 = (short)param_2;
  sStackX_12 = (short)((uint)param_2 >> 0x10);
  local_c = CONCAT22(param_1[1] + sStackX_12,*param_1 + local_res10);
  return local_c;
}

