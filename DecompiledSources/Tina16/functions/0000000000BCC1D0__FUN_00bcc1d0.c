/* Ghidra address: 00bcc1d0 */
/* Ghidra symbol: FUN_00bcc1d0 */


code * FUN_00bcc1d0(int param_1)

{
  char cVar1;
  code *pcVar2;
  
  if (param_1 < 2) {
    pcVar2 = FUN_00bcbef0;
  }
  else {
    cVar1 = FUN_00bcc1b0();
    if (cVar1 == '\0') {
      pcVar2 = FUN_00bcc090;
    }
    else {
      pcVar2 = FUN_00bcbf60;
    }
  }
  return pcVar2;
}

