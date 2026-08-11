/* Ghidra address: 00c0e550 */
/* Ghidra symbol: FUN_00c0e550 */


undefined4 FUN_00c0e550(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x650) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x650) + 0x10);
  }
  return uVar1;
}

