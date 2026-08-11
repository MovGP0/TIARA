/* Ghidra address: 0135c950 */
/* Ghidra symbol: FUN_0135c950 */


void FUN_0135c950(void)

{
  undefined8 uVar1;
  
  DAT_02108148 = DAT_02108148 + 1;
  if (DAT_02108148 == 0) {
    FUN_01d42ec0(L"Edi52Tina.Finalization.0");
    uVar1 = DAT_02108128;
    DAT_02108128 = 0;
    FUN_00410f20(uVar1);
    uVar1 = DAT_02108120;
    DAT_02108120 = 0;
    FUN_00410f20(uVar1);
    uVar1 = DAT_02108130;
    DAT_02108130 = 0;
    FUN_00410f20(uVar1);
    uVar1 = DAT_02108138;
    DAT_02108138 = 0;
    FUN_00410f20(uVar1);
    uVar1 = DAT_02108140;
    DAT_02108140 = 0;
    FUN_00410f20(uVar1);
    FUN_01d42ec0(L"Edi52Tina.Finalization.1");
  }
  return;
}

