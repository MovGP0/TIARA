/* Ghidra address: 00622bc0 */
/* Ghidra symbol: FUN_00622bc0 */


bool FUN_00622bc0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_004168b0(&local_10,param_2);
  FUN_004168b0(&local_18,*(undefined8 *)(param_1 + 0x58));
  iVar1 = FUN_0043e6d0(local_10,local_18);
  FUN_00414560(&local_18,2);
  return iVar1 == 0;
}

