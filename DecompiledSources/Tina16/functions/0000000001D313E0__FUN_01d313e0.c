/* Ghidra address: 01d313e0 */
/* Ghidra symbol: FUN_01d313e0 */


void FUN_01d313e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_110;
  byte local_108 [255];
  undefined1 local_9;
  
  local_110 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00416910(local_108,local_res10[0],0xff);
  if (local_108[0] == 0xff) {
    local_9 = 0;
  }
  else {
    FUN_004154b0(&local_110,local_108,0);
    FUN_004155b0(&local_110,&LAB_01d314d4);
    FUN_00415560(local_108,local_110,0xff);
  }
  FUN_01d311c0(param_1,local_108,local_108[0] + 1);
  FUN_004144d0(&local_110);
  FUN_00414480(local_res10);
  return;
}

