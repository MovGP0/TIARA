/* Ghidra address: 00c03a50 */
/* Ghidra symbol: FUN_00c03a50 */


void FUN_00c03a50(longlong *param_1,ushort param_2,undefined2 param_3,undefined8 param_4)

{
  ushort local_res10 [4];
  undefined2 local_res18 [8];
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  (**(code **)(*param_1 + 0x308))(param_1,local_res10,local_res18,param_4);
  if (local_res10[0] != 0) {
    (**(code **)(*param_1 + 0x290))(param_1,0,local_res10,local_res18,param_4);
    if ((local_res10[0] != 0) && (local_res10[0] < 0x3e9)) {
      (**(code **)(*param_1 + 0x348))(param_1,local_res10[0],local_res18[0],param_4);
    }
    if (local_res10[0] != 0) {
      (**(code **)(*param_1 + 0x290))(param_1,1,local_res10,local_res18,param_4);
    }
  }
  (**(code **)(*param_1 + 0x2d8))(param_1,local_res10[0],local_res18[0],param_4);
  return;
}

