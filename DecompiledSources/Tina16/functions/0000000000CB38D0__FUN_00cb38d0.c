/* Ghidra address: 00cb38d0 */
/* Ghidra symbol: FUN_00cb38d0 */


undefined4 FUN_00cb38d0(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x100) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x184);
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x100) + 0x130);
  }
  return uVar1;
}

