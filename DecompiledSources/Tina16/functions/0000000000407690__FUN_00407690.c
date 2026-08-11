/* Ghidra address: 00407690 */
/* Ghidra symbol: FUN_00407690 */


void FUN_00407690(void)

{
  char cVar1;
  
  if (DAT_020060a9 != '\0') {
    while( true ) {
      do {
        LOCK();
        cVar1 = DAT_0200ac40;
        if (DAT_0200ac40 == '\0') {
          DAT_0200ac40 = '\x01';
          cVar1 = '\0';
        }
        UNLOCK();
        if (cVar1 == '\0') {
          return;
        }
      } while (DAT_02006a35 != '\0');
      thunk_FUN_0419965d(0);
      LOCK();
      cVar1 = DAT_0200ac40;
      if (DAT_0200ac40 == '\0') {
        DAT_0200ac40 = '\x01';
        cVar1 = '\0';
      }
      UNLOCK();
      if (cVar1 == '\0') break;
      thunk_FUN_0419965d(10);
    }
  }
  return;
}

