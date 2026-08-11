/* Ghidra address: 0153bf40 */
/* Ghidra symbol: FUN_0153bf40 */


void FUN_0153bf40(void)

{
  DAT_0210ee08 = DAT_0210ee08 + 1;
  if (DAT_0210ee08 == 0) {
    FUN_01d42ec0(L"AnalIntf.Finalization.0");
    FUN_004095f0(DAT_0210ee10);
    FUN_01d42ec0(L"AnalIntf.Finalization.1");
  }
  return;
}

