/* Ghidra address: 00b4e480 */
/* Ghidra symbol: FUN_00b4e480 */


undefined4 FUN_00b4e480(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_1 + 8))(param_1,param_2,local_20);
  uVar1 = FUN_00b1ad80(param_1[3],local_20);
  FUN_004144d0(local_20);
  return uVar1;
}

