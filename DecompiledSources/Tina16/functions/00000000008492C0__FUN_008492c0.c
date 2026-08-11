/* Ghidra address: 008492c0 */
/* Ghidra symbol: FUN_008492c0 */


void FUN_008492c0(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_00650a80(param_1);
  if (*(longlong *)(param_1 + 0x510) != 0) {
    uVar1 = thunk_FUN_041c61bd();
    *(undefined4 *)(*(longlong *)(param_1 + 0x510) + 0x510) = uVar1;
  }
  return;
}

