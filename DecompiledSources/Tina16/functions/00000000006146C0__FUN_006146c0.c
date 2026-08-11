/* Ghidra address: 006146c0 */
/* Ghidra symbol: FUN_006146c0 */


undefined4 FUN_006146c0(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x10);
  }
  return uVar1;
}

