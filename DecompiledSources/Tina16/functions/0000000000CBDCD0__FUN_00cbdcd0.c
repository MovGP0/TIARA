/* Ghidra address: 00cbdcd0 */
/* Ghidra symbol: FUN_00cbdcd0 */


undefined8
FUN_00cbdcd0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_0041b910(param_5);
  FUN_00cbde70(param_1);
  (**(code **)(*param_1 + 0xd0))(param_1,local_res18);
  (**(code **)(*(longlong *)param_1[0x20] + 0x150))
            ((longlong *)param_1[0x20],local_res18[0],param_5);
  (**(code **)(*param_1 + 0x118))(param_1,param_2,param_4,param_5);
  FUN_00414480(local_res18);
  FUN_0041b800(&param_5);
  return param_2;
}

