/* Ghidra address: 00bc1d50 */
/* Ghidra symbol: FUN_00bc1d50 */


undefined4 FUN_00bc1d50(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x100) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x148);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x118);
  }
  return uVar1;
}

