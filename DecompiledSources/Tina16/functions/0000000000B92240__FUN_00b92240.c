/* Ghidra address: 00b92240 */
/* Ghidra symbol: FUN_00b92240 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b92240(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  _DAT_02019914 = 1;
  DAT_01e94bb0 = 0;
  FUN_00414ad0(&DAT_02019918,local_res8);
  FUN_00416910(&DAT_02019924,local_res10,0xff);
  FUN_00414560(&local_res8,2);
  return;
}

