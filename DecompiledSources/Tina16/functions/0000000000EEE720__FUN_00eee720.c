/* Ghidra address: 00eee720 */
/* Ghidra symbol: FUN_00eee720 */


undefined8 FUN_00eee720(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = *(uint *)(param_1 + 0x10) - 1;
  if (*(uint *)(param_1 + 0x10) <= uVar1) {
    FUN_00594f90();
  }
  FUN_00414c70(local_20,*(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar1 * 8));
  FUN_00414bf0(param_2,local_20[0]);
  FUN_004144d0(local_20);
  return param_2;
}

