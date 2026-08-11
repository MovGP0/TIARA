/* Ghidra address: 00c7c6a0 */
/* Ghidra symbol: FUN_00c7c6a0 */


undefined4 FUN_00c7c6a0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 local_res8;
  undefined8 local_res10 [3];
  undefined4 local_1c;
  undefined8 local_10;
  
  local_10 = 0;
  local_res8 = param_1;
  local_res10[0] = param_2;
  FUN_0041b910(param_1);
  FUN_00414610(local_res10[0]);
  cVar1 = FUN_00c7c3f0(local_res8,local_res10[0],&local_10);
  local_1c = param_3;
  if (cVar1 != '\0') {
    local_1c = FUN_00c7c2d0(local_10,param_3);
  }
  FUN_00414480(&local_10);
  FUN_0041b800(&local_res8);
  FUN_00414480(local_res10);
  return local_1c;
}

