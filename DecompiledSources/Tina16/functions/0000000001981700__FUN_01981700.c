/* Ghidra address: 01981700 */
/* Ghidra symbol: FUN_01981700 */


void FUN_01981700(void)

{
  DAT_02110734 = DAT_02110734 + 1;
  if (DAT_02110734 == 0) {
    FUN_00410f20(DAT_02110728);
    FUN_00410f20(DAT_02110740);
    if (DAT_02110738 != 0) {
      FUN_0194e0f0();
      FUN_00410f20(DAT_02110738);
    }
    DAT_02110738 = 0;
    FUN_00410f20(DAT_02110720);
    FUN_00452320(&DAT_02110748);
    FUN_00414480(&PTR_u__Software_Fast_Reports_Connectio_01fb7de0);
  }
  return;
}

