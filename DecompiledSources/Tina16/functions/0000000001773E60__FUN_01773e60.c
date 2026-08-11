/* Ghidra address: 01773e60 */
/* Ghidra symbol: FUN_01773e60 */


void FUN_01773e60(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  int local_14;
  undefined8 *local_10;
  
  local_20 = auStack_48;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_10 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_004b9f40(local_10,local_res10[0]);
  local_14 = (**(code **)*local_10)(local_10);
  FUN_004b89e0(param_1,&local_14,4);
  FUN_004b8ba0(param_1,local_10,(longlong)local_14);
  FUN_00410f20(local_10);
  FUN_00414480(local_res10);
  return;
}

