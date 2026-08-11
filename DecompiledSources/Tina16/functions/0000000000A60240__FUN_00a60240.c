/* Ghidra address: 00a60240 */
/* Ghidra symbol: FUN_00a60240 */


longlong * FUN_00a60240(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  int iVar3;
  
  if (DAT_02014700 == (longlong *)0x0) {
    DAT_02014700 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    iVar3 = 0xb2;
    ppuVar1 = &PTR_u_none_01e759d0;
    puVar2 = &DAT_01e75f60;
    do {
      (**(code **)(*DAT_02014700 + 0x80))(DAT_02014700,*ppuVar1,puVar2);
      puVar2 = puVar2 + 4;
      ppuVar1 = ppuVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    (**(code **)(*DAT_02014700 + 0x148))(DAT_02014700);
  }
  return DAT_02014700;
}

