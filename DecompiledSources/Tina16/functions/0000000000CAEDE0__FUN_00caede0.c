/* Ghidra address: 00caede0 */
/* Ghidra symbol: FUN_00caede0 */


void FUN_00caede0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_res18 [2];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res18[0] = param_3;
  FUN_0041b910(param_3);
  cVar1 = FUN_00879090(param_2,&LAB_00caeeb4);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x150))(param_1,param_2,local_res18[0]);
  }
  else {
    FUN_00416ba0(local_20,&LAB_00caeeb4,param_2);
    (**(code **)(*param_1 + 0x150))(param_1,local_20[0],local_res18[0]);
  }
  FUN_00414480(local_20);
  FUN_0041b800(local_res18);
  return;
}

