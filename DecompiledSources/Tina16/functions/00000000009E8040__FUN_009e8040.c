/* Ghidra address: 009e8040 */
/* Ghidra symbol: FUN_009e8040 */


undefined8 FUN_009e8040(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_1 + 0x38))(param_1,local_20);
  uVar1 = FUN_00415f70(local_20[0]);
  uVar1 = FUN_00711230(uVar1);
  FUN_00414520(local_20);
  return uVar1;
}

