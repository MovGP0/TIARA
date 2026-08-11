/* Ghidra address: 00cb9a40 */
/* Ghidra symbol: FUN_00cb9a40 */


undefined1 FUN_00cb9a40(longlong param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x158) + 0x28);
  }
  return uVar1;
}

