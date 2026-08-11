/* Ghidra address: 00948850 */
/* Ghidra symbol: FUN_00948850 */


undefined8 FUN_00948850(undefined8 param_1,undefined4 param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_0043fba0(&local_18,param_2,1);
  FUN_00416cd0(&local_10,3,&DAT_009488f8,local_18,&DAT_0094890c);
  FUN_004168e0(param_1,local_10);
  FUN_00414560(&local_18,2);
  return param_1;
}

