/* Ghidra address: 01c06fc0 */
/* Ghidra symbol: FUN_01c06fc0 */


undefined1 FUN_01c06fc0(longlong param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 800) != 0) {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 800) + 0x94);
  }
  return uVar1;
}

