/* Ghidra address: 007880a0 */
/* Ghidra symbol: FUN_007880a0 */


undefined8 FUN_007880a0(void)

{
  char cVar1;
  
  if ((PTR_DAT_02005bd0[0xd] != '\0') && (cVar1 = FUN_00787a60(), cVar1 == '\x01')) {
    return 1;
  }
  return 0;
}

