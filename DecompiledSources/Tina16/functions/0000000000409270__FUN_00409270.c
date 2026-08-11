/* Ghidra address: 00409270 */
/* Ghidra symbol: FUN_00409270 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409270(void)

{
  ushort uVar1;
  uint uVar2;
  undefined **ppuVar3;
  int iVar4;
  
  iVar4 = 0x2e;
  ppuVar3 = &PTR_FUN_01db9128;
  do {
    if (*ppuVar3 == (undefined *)0x0) {
      *ppuVar3 = FUN_004073a0;
    }
    ppuVar3[-4] = (undefined *)(ppuVar3 + -6);
    ppuVar3[-5] = (undefined *)(ppuVar3 + -6);
    ppuVar3[-2] = (undefined *)0x0;
    ppuVar3[-3] = (undefined *)0x1;
    uVar2 = ((uint)*(ushort *)((longlong)ppuVar3 + -0x2e) * 0xc + 0xff & 0xffffff00) + 0x30;
    if (uVar2 < 0xb30) {
      uVar2 = 0xb30;
    }
    uVar2 = (uVar2 + 0x4d0) / 0x2000;
    if (7 < uVar2) {
      uVar2 = 7;
    }
    *(char *)((longlong)ppuVar3 + -0x2f) = (char)(0xff << ((byte)uVar2 & 0x1f));
    *(short *)((longlong)ppuVar3 + -0x2c) = (short)(uVar2 << 0xd) + 0xb30;
    uVar1 = *(ushort *)((longlong)ppuVar3 + -0x2e);
    uVar2 = ((uint)uVar1 * 0x30 + 0xff & 0xffffff00) + 0x30;
    if (uVar2 < 0x7330) {
      uVar2 = 0x7330;
    }
    if (0xff30 < uVar2) {
      uVar2 = 0xff30;
    }
    *(ushort *)((longlong)ppuVar3 + -0x2a) =
         ((short)((uVar2 - 0x30) / (uint)uVar1) * uVar1 + 0xff & 0xff00) + 0x30;
    ppuVar3 = ppuVar3 + 8;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_00409200();
  _DAT_02006b88 = &DAT_02006b88;
  DAT_02006b90 = &DAT_02006b88;
  iVar4 = 0x400;
  ppuVar3 = &PTR_LOOP_02006c40;
  do {
    *ppuVar3 = (undefined *)ppuVar3;
    ppuVar3[1] = (undefined *)ppuVar3;
    ppuVar3 = ppuVar3 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  _DAT_0200ac48 = &DAT_0200ac48;
  DAT_0200ac50 = &DAT_0200ac48;
  return;
}

