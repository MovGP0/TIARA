/* Ghidra address: 01beb600 */
/* Ghidra symbol: FUN_01beb600 */


void FUN_01beb600(longlong param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 0x366);
  if (*(longlong *)(*(longlong *)(param_1 + 800) + 0x30) != 0) {
    *(undefined1 *)(param_1 + 0x366) = 2;
  }
  FUN_01bd39c0(param_1);
  *(undefined1 *)(param_1 + 0x366) = uVar1;
  return;
}

