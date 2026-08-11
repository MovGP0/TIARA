/* Ghidra address: 010d6720 */
/* Ghidra symbol: FUN_010d6720 */


void FUN_010d6720(longlong param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_00409a70(local_res10,*(undefined8 *)(param_1 + 0x68),4);
  FUN_00b909d0(param_1 + 0x68,4);
  return;
}

