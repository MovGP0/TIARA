/* Ghidra address: 00a74940 */
/* Ghidra symbol: FUN_00a74940 */


undefined4 FUN_00a74940(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 8) + -4);
  }
  return uVar1;
}

