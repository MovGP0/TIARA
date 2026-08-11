/* Ghidra address: 00452ed0 */
/* Ghidra symbol: FUN_00452ed0 */


undefined4 FUN_00452ed0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 8) + -4);
  }
  return uVar1;
}

