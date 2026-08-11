/* Ghidra address: 00411aa0 */
/* Ghidra symbol: FUN_00411aa0 */


void FUN_00411aa0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 < 0xb) && (1 < DAT_020060b0)) {
    FUN_00411b80(4 << ((byte)iVar1 & 0x1f));
  }
  else {
    if (9 < iVar1) {
      iVar1 = iVar1 + -10;
    }
    if (iVar1 % 0x14 == 0x13) {
      thunk_FUN_0419965d(1);
    }
    else if (iVar1 % 5 == 4) {
      thunk_FUN_0419965d(0);
    }
    else {
      FUN_00406e40();
    }
  }
  *param_1 = *param_1 + 1;
  if (*param_1 < 0) {
    *param_1 = 10;
  }
  return;
}

