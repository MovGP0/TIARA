/* Ghidra address: 004ff240 */
/* Ghidra symbol: FUN_004ff240 */


bool FUN_004ff240(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_10 [2];
  
  local_10[0] = param_2;
  iVar1 = FUN_00596920(param_1 + 8,local_10);
  return -1 < iVar1;
}

