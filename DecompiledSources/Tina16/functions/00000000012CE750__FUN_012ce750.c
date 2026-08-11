/* Ghidra address: 012ce750 */
/* Ghidra symbol: FUN_012ce750 */


undefined8 FUN_012ce750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong local_30;
  longlong *local_28;
  longlong *local_20 [2];
  
  local_30 = 0;
  local_20[0] = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  FUN_00414480(param_1);
  FUN_00bac3d0(local_20);
  cVar1 = (**(code **)(*local_20[0] + 0x170))(local_20[0],local_res10);
  if (cVar1 != '\0') {
    (**(code **)(*local_20[0] + 0x100))(local_20[0],&local_30);
    if (local_30 != 0) {
      (**(code **)(*local_20[0] + 0x100))(local_20[0],&local_28);
      (**(code **)(*local_28 + 0x100))(local_28,param_1,local_res20);
    }
  }
  FUN_00417840(&local_30,&LAB_00b9fca0,2);
  FUN_0041b800(local_20);
  FUN_00414560(&local_res10,3);
  return param_1;
}

