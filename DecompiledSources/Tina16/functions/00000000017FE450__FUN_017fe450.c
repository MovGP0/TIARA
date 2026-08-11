/* Ghidra address: 017fe450 */
/* Ghidra symbol: FUN_017fe450 */


undefined1 FUN_017fe450(longlong param_1,longlong param_2,char param_3,undefined1 param_4)

{
  longlong local_res10 [3];
  undefined1 local_21;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  local_21 = 0;
  if (((*(char *)(param_1 + 0x708) != '\0') || (*(char *)(param_1 + 0x709) != '\0')) &&
     (local_res10[0] != 0)) {
    if (param_3 == '\x01') {
      FUN_00416880(&local_10,local_res10[0]);
      local_21 = FUN_017fdf90(param_1,local_10,param_4);
    }
    else if (param_3 == '\x02') {
      FUN_00416880(&local_18,local_res10[0]);
      local_21 = FUN_017fe120(param_1,local_18,param_4);
    }
    else {
      FUN_00416880(&local_20,local_res10[0]);
      local_21 = FUN_017fdb10(param_1,local_20,param_4);
    }
  }
  FUN_00414560(&local_20,3);
  FUN_004144d0(local_res10);
  return local_21;
}

