/* Ghidra address: 004073d0 */
/* Ghidra symbol: FUN_004073d0 */


void FUN_004073d0(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  if (DAT_020060a9 != '\0') {
    iVar3 = 0x2e;
    pcVar2 = &DAT_01db90f8;
LAB_00407413:
    do {
      LOCK();
      cVar1 = *pcVar2;
      if (cVar1 == '\0') {
        *pcVar2 = '\x01';
        cVar1 = '\0';
      }
      UNLOCK();
      if (cVar1 != '\0') {
        if (DAT_02006a35 != '\0') goto LAB_00407413;
        thunk_FUN_0419965d(0);
        LOCK();
        cVar1 = *pcVar2;
        if (cVar1 == '\0') {
          *pcVar2 = '\x01';
          cVar1 = '\0';
        }
        UNLOCK();
        if (cVar1 != '\0') {
          thunk_FUN_0419965d(10);
          goto LAB_00407413;
        }
      }
      pcVar2 = pcVar2 + 0x40;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

