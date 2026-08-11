/* Ghidra address: 0046d040 */
/* Ghidra symbol: FUN_0046d040 */


int FUN_0046d040(char *param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if ((param_1 != (char *)0x0) && (*param_1 == '\x11')) {
    iVar1 = *(int *)(param_1 + (ulonglong)(byte)param_1[1] + 0xe);
    if (iVar1 == 0x48) {
      iVar1 = 0x100;
    }
    if (iVar1 == 0x4a) {
      iVar1 = 0x102;
    }
  }
  if ((((iVar1 < 2) || (iVar1 == 0xe)) || (iVar1 == 0xf)) ||
     (((0x14 < iVar1 && (iVar1 != 0x100)) && (iVar1 != 0x102)))) {
    FUN_004600a0();
  }
  return iVar1;
}

