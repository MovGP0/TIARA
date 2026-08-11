/* Ghidra address: 0084d2b0 */
/* Ghidra symbol: FUN_0084d2b0 */


undefined4 FUN_0084d2b0(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x40) < 1) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x4e0);
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x4a4);
  }
  return uVar1;
}

