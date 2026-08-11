/* Ghidra address: 004c5830 */
/* Ghidra symbol: FUN_004c5830 */


void FUN_004c5830(undefined8 param_1,ulonglong param_2)

{
  ulonglong local_res10 [3];
  
  local_res10[0] = param_2;
  if (((longlong)param_2 < -0x80000000) || (0x7fffffff < (longlong)param_2)) {
    FUN_004c8510(param_1,0x13);
    FUN_004c3930(param_1,local_res10,8);
  }
  else {
    FUN_004c57a0(param_1,param_2 & 0xffffffff);
  }
  return;
}

