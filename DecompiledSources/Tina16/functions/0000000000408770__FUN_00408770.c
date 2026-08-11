/* Ghidra address: 00408770 */
/* Ghidra symbol: FUN_00408770 */


bool FUN_00408770(void)

{
  char cVar1;
  
  if (DAT_020060a9 != '\0') {
    while( true ) {
      do {
        LOCK();
        cVar1 = DAT_0200ac70;
        if (DAT_0200ac70 == '\0') {
          DAT_0200ac70 = '\x01';
          cVar1 = '\0';
        }
        UNLOCK();
        if (cVar1 == '\0') goto LAB_004087ba;
      } while (DAT_02006a35 != '\0');
      thunk_FUN_0419965d(0);
      LOCK();
      cVar1 = DAT_0200ac70;
      if (DAT_0200ac70 == '\0') {
        DAT_0200ac70 = '\x01';
        cVar1 = '\0';
      }
      UNLOCK();
      if (cVar1 == '\0') break;
      thunk_FUN_0419965d(10);
    }
  }
LAB_004087ba:
  if (DAT_0200ac68 == 0) {
    DAT_0200ac68 = thunk_FUN_041b4712(0,0x10000,0x1000,4);
  }
  return DAT_0200ac68 != 0;
}

