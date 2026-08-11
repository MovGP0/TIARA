/* Ghidra address: 017be070 */
/* Ghidra symbol: FUN_017be070 */


void FUN_017be070(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  if (*(char *)((longlong)param_1 + 0xaa) == '\0') {
    FUN_01cf0bd0(param_1,param_2,param_3,param_4);
  }
  else {
    (**(code **)(*param_1 + 0x268))(param_1,local_res18,local_res20);
    FUN_017bf150(param_1,param_2,local_res18[0],local_res20[0]);
  }
  return;
}

