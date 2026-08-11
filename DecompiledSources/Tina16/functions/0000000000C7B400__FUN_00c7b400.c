/* Ghidra address: 00c7b400 */
/* Ghidra symbol: FUN_00c7b400 */


void FUN_00c7b400(void)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  
  iVar1 = 0;
  pcVar2 = &DAT_02019d54;
  do {
    *pcVar2 = (char)iVar1 + 'A';
    (&DAT_02019d54)[iVar1 + 0x1a] = (char)iVar1 + 'a';
    iVar1 = iVar1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (iVar1 != 0x1a);
  iVar1 = 0;
  do {
    (&DAT_02019d54)[iVar1 + 0x34] = (char)iVar1 + '0';
    iVar1 = iVar1 + 1;
  } while (iVar1 != 10);
  DAT_02019d92 = 0x2b;
  DAT_02019d93 = 0x2f;
  iVar1 = 0;
  pcVar2 = &DAT_02019d94;
  do {
    cVar3 = (char)iVar1;
    if (iVar1 < 0x3e) {
      if (iVar1 == 0x3d) {
        *pcVar2 = -2;
      }
      else if (iVar1 == 0x2b) {
        *pcVar2 = '>';
      }
      else if (iVar1 == 0x2f) {
        *pcVar2 = '?';
      }
      else {
        if (9 < iVar1 - 0x30U) goto LAB_00c7b4d6;
        *pcVar2 = cVar3 + '\x04';
      }
    }
    else if (iVar1 - 0x41U < 0x1a) {
      *pcVar2 = cVar3 + -0x41;
    }
    else if (iVar1 - 0x61U < 0x1a) {
      *pcVar2 = cVar3 + -0x47;
    }
    else {
LAB_00c7b4d6:
      *pcVar2 = -1;
    }
    iVar1 = iVar1 + 1;
    pcVar2 = pcVar2 + 1;
    if (iVar1 == 0x100) {
      return;
    }
  } while( true );
}

