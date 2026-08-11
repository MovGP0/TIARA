/* Ghidra address: 01171800 */
/* Ghidra symbol: FUN_01171800 */


void FUN_01171800(void)

{
  if (DAT_0203ae9c == 0x49) {
    DAT_0203aea8 = 0;
    DAT_0203aea0 = 0xff0000;
    DAT_0203aea4 = 0xffffff;
  }
  else if (DAT_0203ae9c == 0x4e) {
    DAT_0203aea8 = 0xffffff;
    DAT_0203aea0 = 0xffffff;
    DAT_0203aea4 = 0x808080;
  }
  else {
    DAT_0203aea8 = 0xffffff;
    DAT_0203aea0 = 0xffff;
    DAT_0203aea4 = 0xff0000;
  }
  FUN_011717b0();
  return;
}

