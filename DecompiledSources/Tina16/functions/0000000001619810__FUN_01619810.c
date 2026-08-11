/* Ghidra address: 01619810 */
/* Ghidra symbol: FUN_01619810 */


void FUN_01619810(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 local_res18 [4];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_004b89e0(param_2,param_1 + 8,8);
  FUN_004168e0(&local_10,*(undefined8 *)(param_1 + 0x10));
  FUN_01b20e90(local_10,param_2);
  FUN_004168e0(&local_18,*(undefined8 *)(param_1 + 0x18));
  FUN_01b20e90(local_18,param_2);
  FUN_004b89e0(param_2,local_res18,4);
  FUN_004145c0(&local_18,2);
  return;
}

