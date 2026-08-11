/* Ghidra address: 004ddec0 */
/* Ghidra symbol: FUN_004ddec0 */


undefined8 FUN_004ddec0(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  FUN_0041b840(&local_10,**(undefined8 **)(param_1 + 8));
  FUN_0041b840(param_2,local_10);
  FUN_0041b800(&local_10);
  return param_2;
}

