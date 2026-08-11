/* Ghidra address: 004b3e00 */
/* Ghidra symbol: FUN_004b3e00 */


undefined8 FUN_004b3e00(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_1 + 0x38))(param_1,local_20);
  uVar1 = FUN_00416740(local_20[0]);
  uVar1 = FUN_00442bd0(uVar1);
  FUN_00414480(local_20);
  return uVar1;
}

