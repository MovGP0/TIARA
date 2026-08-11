/* Ghidra address: 00cbdb80 */
/* Ghidra symbol: FUN_00cbdb80 */


undefined2 FUN_00cbdb80(longlong *param_1,short param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  undefined2 local_12;
  short local_10 [4];
  
  local_res18[0] = param_3;
  FUN_0041b910(param_3);
  if (param_2 < 0) {
    local_12 = (**(code **)(*param_1 + 0x110))
                         (param_1,&stack0xfffffffffffffff8,0xffffffff,local_res18[0]);
  }
  else {
    local_10[0] = param_2;
    local_12 = (**(code **)(*param_1 + 0x110))(param_1,local_10,0,local_res18[0]);
  }
  FUN_0041b800(local_res18);
  return local_12;
}

