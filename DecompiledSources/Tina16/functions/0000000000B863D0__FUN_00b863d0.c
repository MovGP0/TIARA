/* Ghidra address: 00b863d0 */
/* Ghidra symbol: FUN_00b863d0 */


void FUN_00b863d0(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  
  iVar9 = 0x100;
  pbVar6 = &DAT_01e939c0;
  puVar8 = &DAT_020188ec;
  do {
    bVar1 = *pbVar6;
    uVar7 = (uint)bVar1;
    uVar2 = FUN_00b84ab0(uVar7);
    uVar3 = FUN_00b84ad0(bVar1);
    bVar1 = pbVar6[0x100];
    uVar4 = FUN_00b84ab0(bVar1);
    iVar5 = FUN_00b84ad0(bVar1);
    *puVar8 = (uint)bVar1 | uVar4 << 8 | iVar5 << 0x10 | iVar5 << 0x18;
    puVar8[0x100] = uVar3 | uVar3 << 8 | uVar2 << 0x10 | uVar7 << 0x18;
    puVar8[0x200] = uVar4 | iVar5 << 8 | (uint)bVar1 << 0x10 | iVar5 << 0x18;
    puVar8[0x300] = uVar2 | uVar7 << 8 | uVar3 << 0x10 | uVar2 << 0x18;
    puVar8 = puVar8 + 1;
    pbVar6 = pbVar6 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  return;
}

