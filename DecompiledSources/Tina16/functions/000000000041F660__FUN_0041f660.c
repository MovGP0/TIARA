/* Ghidra address: 0041f660 */
/* Ghidra symbol: FUN_0041f660 */


void FUN_0041f660(void)

{
  DAT_02006a38 = DAT_02006a38 + 1;
  if (DAT_02006a38 == 0) {
    FUN_0040d150(&DAT_020060b8);
    FUN_0040d150(&DAT_020063b0);
    FUN_0040d150(&DAT_020066a8);
    FUN_00419f80();
    if (DAT_01dbce28 != 0) {
      FUN_00407d90(DAT_01dbce28);
    }
    FUN_0041cbe0(&DAT_0200afd8);
    FUN_00409500();
    FUN_00417740(&DAT_0200afd8,&DAT_0041bda0);
  }
  return;
}

