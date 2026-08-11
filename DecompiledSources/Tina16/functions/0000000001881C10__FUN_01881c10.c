/* Ghidra address: 01881c10 */
/* Ghidra symbol: FUN_01881c10 */


void FUN_01881c10(void)

{
  DAT_02110630 = DAT_02110630 + 1;
  if (DAT_02110630 == 0) {
    if (DAT_01fb0c98 != 0) {
      FUN_00410f20(DAT_01fb0c98);
    }
    DAT_01fb0c98 = 0;
    if (DAT_01fb0ca0 != 0) {
      FUN_00410f20(DAT_01fb0ca0);
    }
    DAT_01fb0ca0 = 0;
    if (DAT_01fb0ca8 != 0) {
      FUN_00410f20(DAT_01fb0ca8);
    }
    DAT_01fb0ca8 = 0;
    if (DAT_01fb0cb0 != 0) {
      FUN_00410f20(DAT_01fb0cb0);
    }
    DAT_01fb0cb0 = 0;
    if (DAT_01fb0cc0 != 0) {
      FUN_00410f20(DAT_01fb0cc0);
    }
    DAT_01fb0cc0 = 0;
    if (DAT_01fb0cb8 != 0) {
      FUN_00452320(&DAT_01fb0cb8);
    }
    FUN_00417840(&PTR_u_mrNone_01fb0cc8,&DAT_00401390,0xf);
  }
  return;
}

