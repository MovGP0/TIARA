/* Ghidra address: 00d44440 */
/* Ghidra symbol: FUN_00d44440 */


undefined1 FUN_00d44440(longlong param_1)

{
  uint uVar1;
  undefined1 uVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = thunk_FUN_04118143(*(longlong *)(param_1 + 8),0xfffffff0);
    uVar2 = (uVar1 & DAT_01ecd3b0) == DAT_01ecd3b0;
    if ((uVar1 & DAT_01ecd3b4) == DAT_01ecd3b4) {
      uVar2 = 2;
    }
    if ((uVar1 & DAT_01ecd3b8) == DAT_01ecd3b8) {
      uVar2 = 3;
    }
    if ((uVar1 & DAT_01ecd3bc) == DAT_01ecd3bc) {
      uVar2 = 4;
    }
  }
  return uVar2;
}

