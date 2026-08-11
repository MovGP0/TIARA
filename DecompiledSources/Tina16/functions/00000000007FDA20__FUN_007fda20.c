/* Ghidra address: 007fda20 */
/* Ghidra symbol: FUN_007fda20 */


undefined8 FUN_007fda20(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(char *)(param_1 + 0x494) == '\0') &&
      (*(int *)(*(longlong *)(param_1 + 0x498) + 0x18) == 0)) &&
     (*(int *)(*(longlong *)(param_1 + 0x4b0) + 0x18) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

