/* Ghidra address: 00cd7a90 */
/* Ghidra symbol: FUN_00cd7a90 */


void FUN_00cd7a90(void)

{
  DAT_02019f90 = DAT_02019f90 + 1;
  if (DAT_02019f90 == 0) {
    FUN_01d42ec0(L"DECUtil.Finalization.0");
    FUN_0041b5b0(FUN_00cd7a20);
    FUN_00410f20(DAT_01eaf040);
    DAT_01eaf040 = 0;
    FUN_01d42ec0(L"DECUtil.Finalization.1");
  }
  return;
}

