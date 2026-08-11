/* Ghidra address: 00b892a0 */
/* Ghidra symbol: FUN_00b892a0 */


void FUN_00b892a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)PTR_DAT_02005950 + 0xd8);
  if (lVar1 != 0) {
    FUN_00b898e0(param_1,lVar1);
    if (*(longlong *)(lVar1 + 0x18) != 1) {
      FUN_00b8d260(param_1,lVar1,*(undefined4 *)(param_1 + 0x28));
    }
  }
  return;
}

