/* Ghidra address: 004f96a0 */
/* Ghidra symbol: FUN_004f96a0 */


undefined8 FUN_004f96a0(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (*(uint *)(param_1 + 0x10) <= param_3) {
    FUN_00594f90();
  }
  FUN_0041b840(&local_10,*(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_3 * 8));
  FUN_0041b840(param_2,local_10);
  FUN_005999b0(param_1 + 8,param_3,3);
  FUN_0041b800(&local_10);
  return param_2;
}

