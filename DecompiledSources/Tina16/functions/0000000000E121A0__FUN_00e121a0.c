/* Ghidra address: 00e121a0 */
/* Ghidra symbol: FUN_00e121a0 */


byte FUN_00e121a0(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  
  bVar5 = 0;
  bVar6 = 0;
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar4 = 0;
  bVar1 = 0;
  bVar2 = 0;
  if (-1 < iVar7 + -1) {
    do {
      bVar5 = bVar2;
      bVar6 = bVar1;
      lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar4);
      if ((*(int *)(lVar3 + 0xc) == 1) || (*(int *)(lVar3 + 0xc) == 3)) {
        bVar5 = 1;
      }
      if ((*(int *)(lVar3 + 0xc) == 2) || (*(int *)(lVar3 + 0xc) == 3)) {
        bVar6 = 1;
      }
      iVar4 = iVar4 + 1;
      iVar7 = iVar7 + -1;
      bVar1 = bVar6;
      bVar2 = bVar5;
    } while (iVar7 != 0);
  }
  return bVar5 & bVar6;
}

