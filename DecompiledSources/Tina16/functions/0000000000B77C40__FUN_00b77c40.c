/* Ghidra address: 00b77c40 */
/* Ghidra symbol: FUN_00b77c40 */


void FUN_00b77c40(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
  uVar3 = 0;
  puVar5 = &DAT_020148c0;
  do {
    uVar4 = uVar3 >> 1 & 0xff;
    uVar6 = (ulonglong)(uVar3 & 1 | (uVar3 & 0x200) >> 8);
    iVar1 = FUN_00b77bc0(uVar4 ^ *(uint *)(&DAT_01e8eb9c + uVar6 * 4),
                         *(undefined4 *)(&DAT_01e8eb5c + uVar6 * 4));
    uVar2 = FUN_00b77c10(iVar1 << 0x18);
    *puVar5 = uVar2;
    iVar1 = FUN_00b77bc0(uVar4 ^ *(uint *)(&DAT_01e8ebac + uVar6 * 4),
                         *(undefined4 *)(&DAT_01e8eb6c + uVar6 * 4));
    uVar2 = FUN_00b77c10(iVar1 << 0x10);
    puVar5[0x400] = uVar2;
    iVar1 = FUN_00b77bc0(uVar4 ^ *(uint *)(&DAT_01e8ebbc + uVar6 * 4),
                         *(undefined4 *)(&DAT_01e8eb7c + uVar6 * 4));
    uVar2 = FUN_00b77c10(iVar1 << 8);
    puVar5[0x800] = uVar2;
    uVar2 = FUN_00b77bc0(uVar4 ^ *(uint *)(&DAT_01e8ebcc + uVar6 * 4),
                         *(undefined4 *)(&DAT_01e8eb8c + uVar6 * 4));
    uVar2 = FUN_00b77c10(uVar2);
    puVar5[0xc00] = uVar2;
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + 1;
  } while (uVar3 != 0x400);
  return;
}

