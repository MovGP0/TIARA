/* Ghidra address: 00c28880 */
/* Ghidra symbol: FUN_00c28880 */


undefined8 FUN_00c28880(longlong param_1)

{
  undefined8 uVar1;
  
  if ((((*(longlong *)(param_1 + 0x30) == 0) || (*(int *)(param_1 + 0x38) == 0)) ||
      (*(short *)(param_1 + 0x4f) == 0)) || (*(short *)(param_1 + 0x4d) == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

