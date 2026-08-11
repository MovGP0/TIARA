/* Ghidra address: 00cbd800 */
/* Ghidra symbol: FUN_00cbd800 */


undefined2 FUN_00cbd800(longlong *param_1,undefined8 param_2,short param_3,undefined8 param_4)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined2 local_12;
  short local_10 [4];
  
  local_res10[0] = param_2;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_0041b910(local_res20);
  if (param_3 < 0) {
    local_12 = (**(code **)(*param_1 + 0x130))
                         (param_1,local_res10[0],&stack0xfffffffffffffff8,0xffffffff,local_res20);
  }
  else {
    local_10[0] = param_3;
    local_12 = (**(code **)(*param_1 + 0x130))(param_1,local_res10[0],local_10,0,local_res20);
  }
  FUN_00414480(local_res10);
  FUN_0041b800(&local_res20);
  return local_12;
}

