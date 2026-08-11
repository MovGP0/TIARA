/* Ghidra address: 00809720 */
/* Ghidra symbol: FUN_00809720 */


void FUN_00809720(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_10 [8];
  
  DAT_02012694 = FUN_00427ab0();
  while( true ) {
    iVar1 = thunk_FUN_0418d6df(DAT_02012698,100);
    if (iVar1 != 0x102) break;
    if ((DAT_02012668 != 0) && (*(longlong *)(DAT_02012668 + 0xd8) != 0)) {
      thunk_FUN_03cc0d62(local_10);
      lVar2 = FUN_0064aca0(local_10);
      if (lVar2 == 0) {
        FUN_0080e820(DAT_02012668);
      }
    }
  }
  return;
}

