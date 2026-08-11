/* Ghidra address: 00664db0 */
/* Ghidra symbol: FUN_00664db0 */


void FUN_00664db0(longlong param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_0410f747(0x4b);
  *(bool *)(param_1 + 0x2c) = iVar1 != 0;
  if (iVar1 != 0) {
    thunk_FUN_03e0f7b4(0x68,0,param_1 + 0x14,0);
  }
  return;
}

