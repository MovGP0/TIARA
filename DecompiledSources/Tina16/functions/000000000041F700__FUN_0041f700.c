/* Ghidra address: 0041f700 */
/* Ghidra symbol: FUN_0041f700 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041f700(void)

{
  DAT_02006a38 = DAT_02006a38 + -1;
  if (DAT_02006a38 == -1) {
    FUN_00410a00();
    FUN_00409270();
    thunk_FUN_03bddb86(0x400);
    FUN_00419e70();
    DAT_01db9014 = 2;
    PTR_thunk_FUN_0419a80b_02006030 = thunk_FUN_0419a80b;
    PTR_DAT_02006038 = &DAT_00406e80;
    DAT_020060aa = 2;
    DAT_020060b0 = FUN_0041dec0();
    PTR_FUN_02006008 = FUN_00418740;
    FUN_00410a50();
    FUN_00410a80();
    _DAT_020060c0 = 0xd7b0;
    DAT_020063b8 = 0xd7b0;
    _DAT_020066b0 = 0xd7b0;
    _DAT_02006090 = thunk_FUN_04151e44();
    DAT_02006088 = FUN_004071d0();
    _DAT_02006a28 = thunk_FUN_041a78f9();
    _DAT_02006a2c = 0x4b0;
    DAT_02006080 = FUN_00406e30();
    FUN_0041dee0();
  }
  return;
}

