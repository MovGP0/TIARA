/* Ghidra address: 00efaf10 */
/* Ghidra symbol: FUN_00efaf10 */


ulonglong FUN_00efaf10(longlong param_1,short param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  byte bVar5;
  
  iVar3 = 1;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  do {
    iVar2 = FUN_00ef7f30(*(undefined8 *)(*(longlong *)(param_1 + 0x308) + 8),
                         *(undefined8 *)(param_1 + 0x368));
    if (iVar2 <= iVar3) {
      return uVar4 & 0xffffffff;
    }
    bVar5 = 0;
    sVar1 = FUN_00ef8190(*(undefined8 *)(*(longlong *)(param_1 + 0x308) + 8),iVar3);
    while( true ) {
      if (sVar1 == 5) break;
      iVar2 = FUN_00ef7f30(*(undefined8 *)(*(longlong *)(param_1 + 0x308) + 8),
                           *(undefined8 *)(param_1 + 0x368));
      if (iVar2 <= iVar3) break;
      if (sVar1 == param_2) {
        bVar5 = 1;
      }
      iVar3 = iVar3 + 1;
      sVar1 = FUN_00ef8190(*(undefined8 *)(*(longlong *)(param_1 + 0x308) + 8),iVar3);
    }
    uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 & bVar5);
    iVar3 = iVar3 + 1;
  } while( true );
}

