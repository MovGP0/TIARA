/* Ghidra address: 004c57a0 */
/* Ghidra symbol: FUN_004c57a0 */


void FUN_004c57a0(undefined8 param_1,int param_2)

{
  int local_res10 [6];
  
  local_res10[0] = param_2;
  if ((param_2 < -0x80) || (0x7f < param_2)) {
    if ((param_2 < -0x8000) || (0x7fff < param_2)) {
      FUN_004c8510(param_1,4);
      FUN_004c3930(param_1,local_res10,4);
    }
    else {
      FUN_004c8510(param_1,3);
      FUN_004c3930(param_1,local_res10,2);
    }
  }
  else {
    FUN_004c8510(param_1,2);
    FUN_004c3930(param_1,local_res10,1);
  }
  return;
}

