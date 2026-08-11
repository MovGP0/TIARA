/* Ghidra address: 01b1fc70 */
/* Ghidra symbol: FUN_01b1fc70 */


undefined4 FUN_01b1fc70(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  (**(code **)(*param_1 + 0x18))(param_1,local_20,param_2);
  (**(code **)(*param_1 + 0x18))(param_1,&local_28,param_3);
  uVar1 = FUN_01b1f9a0(local_20[0],local_28);
  FUN_00414560(&local_28,2);
  return uVar1;
}

