/* Ghidra address: 0044ef80 */
/* Ghidra symbol: FUN_0044ef80 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044ef80(void)

{
  int iVar1;
  undefined4 local_11c [4];
  undefined4 local_10c;
  undefined1 local_108 [264];
  
  DAT_0200c89c = DAT_0200c624;
  DAT_0200c8a0 = DAT_0200c628;
  _DAT_0200c8a4 = DAT_0200c620;
  local_11c[0] = 0x114;
  iVar1 = thunk_FUN_03ed3ad2(local_11c);
  if (iVar1 != 0) {
    DAT_0200c898 = local_10c;
    FUN_00416830(&DAT_0200c8a8,local_108,0x80);
  }
  DAT_01dc1f60 = 1;
  return;
}

