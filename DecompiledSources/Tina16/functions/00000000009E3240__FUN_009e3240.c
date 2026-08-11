/* Ghidra address: 009e3240 */
/* Ghidra symbol: FUN_009e3240 */


undefined8 FUN_009e3240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 *local_10;
  
  local_20 = auStack_48;
  local_18 = FUN_009e4b20(&PTR_FUN_009e2998,1,param_3,param_4);
  local_10 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047d028,1);
  FUN_009e3190(param_1,local_18,local_10);
  uVar1 = (**(code **)*local_10)(local_10);
  FUN_00414910(param_2,local_10[1],uVar1);
  FUN_00410f20(local_10);
  FUN_00410f20(local_18);
  return param_2;
}

