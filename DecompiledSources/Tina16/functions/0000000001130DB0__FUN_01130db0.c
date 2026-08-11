/* Ghidra address: 01130db0 */
/* Ghidra symbol: FUN_01130db0 */


void FUN_01130db0(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_01f24ef8;
  DAT_02030180 = DAT_02030180 + 1;
  if (DAT_02030180 == 0) {
    DAT_01f24ef8 = 0;
    FUN_00410f20(uVar1);
  }
  return;
}

