/* Ghidra address: 00cbd260 */
/* Ghidra symbol: FUN_00cbd260 */


undefined2
FUN_00cbd260(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined8 param_5)

{
  undefined2 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0041b910(param_5);
  FUN_00cbde70(param_1);
  (**(code **)(*param_1 + 0xd0))(param_1,local_res10);
  (**(code **)(*(longlong *)param_1[0x20] + 0x150))
            ((longlong *)param_1[0x20],local_res10[0],param_5);
  uVar1 = (**(code **)(*param_1 + 0x110))(param_1,param_3,param_4,param_5);
  FUN_00414480(local_res10);
  FUN_0041b800(&param_5);
  return uVar1;
}

