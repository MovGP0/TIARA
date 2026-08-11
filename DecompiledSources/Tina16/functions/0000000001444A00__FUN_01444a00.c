/* Ghidra address: 01444a00 */
/* Ghidra symbol: FUN_01444a00 */


void FUN_01444a00(void)

{
  longlong lVar1;
  
  lVar1 = DAT_0210e4e0;
  while (lVar1 != 0) {
    DAT_0210e4e0 = *(longlong *)(lVar1 + 0x18);
    FUN_004095f0(lVar1);
    lVar1 = DAT_0210e4e0;
  }
  DAT_0210e4e0 = lVar1;
  return;
}

