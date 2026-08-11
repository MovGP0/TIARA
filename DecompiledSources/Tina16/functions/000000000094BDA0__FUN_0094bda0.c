/* Ghidra address: 0094bda0 */
/* Ghidra symbol: FUN_0094bda0 */


undefined1 FUN_0094bda0(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x12);
  }
  else {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x40);
  }
  return uVar1;
}

