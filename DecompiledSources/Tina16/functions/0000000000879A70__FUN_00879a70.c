/* Ghidra address: 00879a70 */
/* Ghidra symbol: FUN_00879a70 */


void FUN_00879a70(void)

{
  char cVar1;
  
  DAT_02012828 = DAT_02012828 + -1;
  if (DAT_02012828 == -1) {
    cVar1 = FUN_0040f780(PTR_DAT_02005a50,&DAT_00879ad4,0x20);
    if (cVar1 == '\0') {
      PTR_FUN_01e1df90 = FUN_00876690;
    }
    else {
      PTR_FUN_01e1df90 = FUN_00876670;
    }
    PTR_FUN_01e1e6d8 = FUN_00875190;
  }
  return;
}

