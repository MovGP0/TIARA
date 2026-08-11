/* Ghidra address: 00b9d000 */
/* Ghidra symbol: FUN_00b9d000 */


undefined8 FUN_00b9d000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_0041b910(param_2);
  local_18 = FUN_00410e60(&DAT_00b9cec0,1);
  FUN_00b9d4f0(local_18,param_1,local_res10,local_res18);
  uVar1 = local_18;
  local_10 = local_18;
  local_18 = 0;
  FUN_00410f20(uVar1);
  FUN_0041b800(&local_res10);
  return param_1;
}

