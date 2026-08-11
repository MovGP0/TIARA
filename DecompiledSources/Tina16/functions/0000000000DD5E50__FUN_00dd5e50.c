/* Ghidra address: 00dd5e50 */
/* Ghidra symbol: FUN_00dd5e50 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dd5e50(void)

{
  longlong lVar1;
  
  DAT_0202db28 = DAT_0202db28 + -1;
  if (DAT_0202db28 == -1) {
    DAT_0202daa8 = 0x3ff599999999999a;
    _DAT_0202dab0 = 0x3ff2666666666666;
    _DAT_0202dab8 = 0x4004000000000000;
    _DAT_0202dac0 = 0x4004000000000000;
    _DAT_0202dac8 = 0x3ff8000000000000;
    _DAT_0202dad0 = 0x3ff4cccccccccccd;
    _DAT_0202dad8 = 0x3ff8000000000000;
    _DAT_0202dae0 = 0x3ff6666666666666;
    _DAT_0202dae8 = 0x4024000000000000;
    _DAT_0202daf0 = 0x4030000000000000;
    _DAT_0202daf8 = 0x403e000000000000;
    _DAT_0202db00 = 0x403e000000000000;
    _DAT_0202db08 = 0x403e000000000000;
    _DAT_0202db10 = 0x4030000000000000;
    _DAT_0202db18 = 0x4030000000000000;
    _DAT_0202db20 = 0x4030000000000000;
    lVar1 = FUN_0041f930();
    *(undefined8 *)(lVar1 + 0x280) = 0x4014000000000000;
    _DAT_0202db30 = FUN_0040af80(0x4024000000000000);
    _DAT_0202db38 = FUN_0040af80(0xc024000000000000);
  }
  return;
}

