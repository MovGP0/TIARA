/* Ghidra address: 01b9e760 */
/* Ghidra symbol: FUN_01b9e760 */


void FUN_01b9e760(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0xc;
  puVar2 = &DAT_02110e00;
  do {
    iVar5 = 3;
    puVar1 = &DAT_01fdc790;
    puVar3 = puVar2;
    do {
      *puVar3 = *puVar1;
      puVar3 = puVar3 + 1;
      puVar1 = puVar1 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar2 = puVar2 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar5 = 1;
  iVar4 = 0xc;
  puVar2 = &DAT_02110e90;
  do {
    iVar6 = 3;
    puVar1 = &DAT_01fdc790;
    puVar3 = puVar2;
    do {
      *puVar3 = puVar1[(longlong)iVar5 * 3];
      puVar3 = puVar3 + 1;
      puVar1 = puVar1 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 1;
    puVar2 = puVar2 + 3;
  } while (iVar4 != 0x1f);
  return;
}

