/* Ghidra address: 00ef9780 */
/* Ghidra symbol: FUN_00ef9780 */


ulonglong FUN_00ef9780(undefined8 param_1,short param_2,longlong param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  byte bVar5;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  iVar3 = 1;
  do {
    iVar2 = FUN_00ef7f30(param_1,param_3);
    if ((iVar2 <= iVar3) || (*(char *)(param_3 + 0x92) != '\0')) {
      return uVar4 & 0xffffffff;
    }
    bVar5 = 0;
    sVar1 = FUN_00ef8190(param_1,iVar3);
    while( true ) {
      if (sVar1 == 5) break;
      iVar2 = FUN_00ef7f30(param_1,param_3);
      if (iVar2 <= iVar3) break;
      if (*(char *)(param_3 + 0xb4) == '\x01') {
        if ((sVar1 == param_2) || (sVar1 == 1)) {
          bVar5 = 1;
        }
      }
      else if (sVar1 == param_2) {
        bVar5 = 1;
      }
      iVar3 = iVar3 + 1;
      sVar1 = FUN_00ef8190(param_1,iVar3);
    }
    uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 & bVar5);
    iVar3 = iVar3 + 1;
  } while( true );
}

