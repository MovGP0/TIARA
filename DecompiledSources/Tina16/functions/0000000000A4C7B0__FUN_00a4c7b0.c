/* Ghidra address: 00a4c7b0 */
/* Ghidra symbol: FUN_00a4c7b0 */


void FUN_00a4c7b0(void)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  undefined **ppuVar6;
  int iVar7;
  
  if (DAT_02013818 == (longlong *)0x0) {
    DAT_02013818 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_004b6d10(DAT_02013818,1);
    iVar7 = 0x68;
    ppuVar6 = &PTR_u__XML_01e74670;
    do {
      (**(code **)(*DAT_02013818 + 0x80))(DAT_02013818,*ppuVar6,ppuVar6);
      ppuVar6 = ppuVar6 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    (**(code **)(*DAT_02013818 + 0x148))(DAT_02013818);
    cVar4 = -0x3c;
    puVar2 = &DAT_0201382c;
    do {
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 1;
      cVar4 = cVar4 + -1;
    } while (cVar4 != '\0');
    iVar7 = (**(code **)(*DAT_02013818 + 0x28))();
    iVar5 = 0;
    if (-1 < iVar7 + -1) {
      do {
        puVar3 = (undefined8 *)(**(code **)(*DAT_02013818 + 0x30))(DAT_02013818,iVar5);
        bVar1 = *(byte *)(puVar3 + 1);
        (&DAT_0201382c)[bVar1] = iVar5;
        FUN_00a4a2e0(bVar1,*puVar3);
        bVar1 = *(byte *)((longlong)puVar3 + 9);
        if (bVar1 != 1) {
          (&DAT_0201382c)[bVar1] = iVar5;
          FUN_00a4a2e0(bVar1,*puVar3);
        }
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}

