/* Ghidra address: 0045d420 */
/* Ghidra symbol: FUN_0045d420 */


void FUN_0045d420(void)

{
  DAT_0200c648 = DAT_0200c648 + -1;
  if (DAT_0200c648 == -1) {
    FUN_00413a40(&DAT_0045ce10);
    FUN_00413b90(&DAT_0045cec0);
    if (DAT_0200c279 != '\0') {
      FUN_00414ad0(&PTR_DAT_01dbe7d8,&DAT_0045d518);
    }
    FUN_0044edc0();
    FUN_0041b5c0(FUN_00451810);
    DAT_0200c890 = FUN_00410e60(&DAT_00401a88,1);
    DAT_02010890 = FUN_00410e60(&DAT_00401a88,1);
    PTR_FUN_01dbe7e0 = FUN_00451c30;
    FUN_0041ae20(&DAT_01dc3f40,0);
    DAT_0200c650 = 0;
    DAT_0200c668 = FUN_00410e60(&DAT_00401a88,1);
    FUN_0044fcb0();
    FUN_0044ff90();
  }
  return;
}

