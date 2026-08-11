/* Ghidra address: 00c7cc40 */
/* Ghidra symbol: FUN_00c7cc40 */


undefined8 * FUN_00c7cc40(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  undefined8 local_res18 [2];
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20 [2];
  
  local_28 = 0;
  local_30 = (longlong *)0x0;
  local_20[0] = (longlong *)0x0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_0041b910(param_2);
  FUN_00414610(local_res18[0]);
  FUN_00c7bc70(local_20,local_res10);
  (**(code **)(*local_20[0] + 0x148))(local_20[0],param_1,local_res18[0]);
  FUN_00c7c970(&local_30,local_res10,0);
  (**(code **)(*local_30 + 0x98))(local_30,&local_28,*param_1);
  FUN_00417840(&local_30,&DAT_00b9f8e0,2);
  FUN_0041b800(local_20);
  FUN_0041b800(&local_res10);
  FUN_00414480(local_res18);
  return param_1;
}

