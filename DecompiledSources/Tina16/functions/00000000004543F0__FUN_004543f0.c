/* Ghidra address: 004543f0 */
/* Ghidra symbol: FUN_004543f0 */


undefined8 FUN_004543f0(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_3 + -0x60))(param_3,local_20);
  uVar1 = FUN_004545b0(param_1,param_2,local_20[0]);
  FUN_00414480(local_20);
  return uVar1;
}

