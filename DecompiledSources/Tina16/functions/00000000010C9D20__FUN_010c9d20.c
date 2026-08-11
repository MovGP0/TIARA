/* Ghidra address: 010c9d20 */
/* Ghidra symbol: FUN_010c9d20 */


undefined8 FUN_010c9d20(wchar_t param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0xfffffffb;
  do {
    if (u_pnum_01f19c12[(longlong)(int)uVar2 + 4] == param_1) {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar1;
  } while ((int)uVar1 < 5);
  return 0;
}

