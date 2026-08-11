/* Ghidra address: 00eee5c0 */
/* Ghidra symbol: FUN_00eee5c0 */


undefined8 FUN_00eee5c0(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (*(uint *)(param_1 + 0x10) <= param_3) {
    FUN_00594f90();
  }
  FUN_00414c70(&local_10,*(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_3 * 8));
  FUN_00414bf0(param_2,local_10);
  FUN_005999b0(param_1 + 8,param_3,3);
  FUN_004144d0(&local_10);
  return param_2;
}

