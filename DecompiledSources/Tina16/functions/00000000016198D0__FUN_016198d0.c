/* Ghidra address: 016198d0 */
/* Ghidra symbol: FUN_016198d0 */


void FUN_016198d0(longlong param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_004b84c0(param_2,param_1 + 8,8);
  FUN_01b20f00(&local_10,param_2);
  FUN_004168b0(param_1 + 0x10,local_10);
  FUN_01b20f00(&local_18,param_2);
  FUN_004168b0(param_1 + 0x18,local_18);
  FUN_004b84c0(param_2,param_1 + 0x20,4);
  FUN_004145c0(&local_18,2);
  return;
}

