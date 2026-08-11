/* Ghidra address: 00818440 */
/* Ghidra symbol: FUN_00818440 */


undefined8 FUN_00818440(void)

{
  longlong lVar1;
  
  if ((*PTR_DAT_02001378 == '\0') && (lVar1 = FUN_008199e0(), (*(byte *)(lVar1 + 0x2c8) & 4) != 0))
  {
    return 1;
  }
  return 0;
}

