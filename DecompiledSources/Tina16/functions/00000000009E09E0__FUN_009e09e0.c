/* Ghidra address: 009e09e0 */
/* Ghidra symbol: FUN_009e09e0 */


void FUN_009e09e0(undefined8 param_1)

{
  if (DAT_02013320 < 0x100) {
    (&DAT_02012b20)[DAT_02013320] = param_1;
    DAT_02013320 = DAT_02013320 + 1;
  }
  return;
}

