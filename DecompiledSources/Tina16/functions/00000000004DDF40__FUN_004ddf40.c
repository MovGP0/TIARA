/* Ghidra address: 004ddf40 */
/* Ghidra symbol: FUN_004ddf40 */


undefined8 FUN_004ddf40(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = *(uint *)(param_1 + 0x10) - 1;
  if (*(uint *)(param_1 + 0x10) <= uVar1) {
    FUN_00594f90();
  }
  FUN_0041b840(local_20,*(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar1 * 8));
  FUN_0041b840(param_2,local_20[0]);
  FUN_0041b800(local_20);
  return param_2;
}

