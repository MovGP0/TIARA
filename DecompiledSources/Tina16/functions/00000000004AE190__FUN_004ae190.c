/* Ghidra address: 004ae190 */
/* Ghidra symbol: FUN_004ae190 */


void FUN_004ae190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 *local_20;
  
  local_30 = auStack_58;
  local_20 = (undefined8 *)FUN_004baeb0(&PTR_FUN_004812f0,1,param_2,0x400);
  (**(code **)*local_20)(local_20,param_4);
  local_20[7] = param_4;
  FUN_004c48b0(local_20,param_3);
  FUN_00410f20(local_20);
  return;
}

