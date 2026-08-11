/* Ghidra address: 008087e0 */
/* Ghidra symbol: FUN_008087e0 */


void FUN_008087e0(longlong param_1,longlong param_2)

{
  FUN_0080e110(DAT_02012668,0xb035,0,0);
  if (((param_2 == *(longlong *)(param_1 + 0x100)) && (DAT_02012668 != 0)) &&
     (*(char *)(DAT_02012668 + 0x108) != '\0')) {
    FUN_0080dd10(DAT_02012668,0);
    FUN_0080dd10(DAT_02012668,1);
  }
  return;
}

