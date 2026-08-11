/* Ghidra address: 0081a3b0 */
/* Ghidra symbol: FUN_0081a3b0 */


void FUN_0081a3b0(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(uint *)(*(longlong *)(param_1 + 0x10) + 0xa4) & 0x2000) == 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x10) + 0x4d6) == '\x01')) {
    uVar1 = FUN_0065b870(*(undefined8 *)(DAT_02012668 + 0xa8));
    thunk_FUN_0413e052(uVar1,0x52d,0,0);
  }
  return;
}

