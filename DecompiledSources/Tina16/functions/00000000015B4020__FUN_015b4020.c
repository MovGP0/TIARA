/* Ghidra address: 015b4020 */
/* Ghidra symbol: FUN_015b4020 */


undefined8
FUN_015b4020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_10;
  
  local_20 = auStack_58;
  local_28 = 0;
  FUN_00416880(&local_28,param_3);
  local_10 = (undefined8 *)FUN_004b9860(&PTR_FUN_0047c498,1,local_28,0x40);
  uVar1 = (**(code **)*local_10)(local_10);
  local_30 = param_5;
  local_38 = param_4;
  FUN_015b3d30(param_1,param_2,local_10,uVar1);
  FUN_00410f20(local_10);
  FUN_00414480(&local_28);
  return param_2;
}

