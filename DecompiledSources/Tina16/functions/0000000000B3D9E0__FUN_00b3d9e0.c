/* Ghidra address: 00b3d9e0 */
/* Ghidra symbol: FUN_00b3d9e0 */


void FUN_00b3d9e0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  FUN_00416880(&local_38,param_2);
  local_20 = (longlong *)FUN_004b9860(&PTR_FUN_0047c498,1,local_38,0xff00);
  FUN_00b3dac0(param_1,local_20,param_3,param_4);
  (**(code **)(*local_20 + -0x20))(local_20,1);
  FUN_00414480(&local_38);
  return;
}

