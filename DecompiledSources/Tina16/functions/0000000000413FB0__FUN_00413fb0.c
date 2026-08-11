/* Ghidra address: 00413fb0 */
/* Ghidra symbol: FUN_00413fb0 */


void FUN_00413fb0(void)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (DAT_01db9008 != 0) {
    FUN_00413d80();
    FUN_00413ed0();
    DAT_01db9008 = 0;
  }
  if ((DAT_0200adb0 != 0) && (iVar2 = FUN_00406e30(), iVar2 == DAT_0200addc)) {
    DAT_0200adb0 = 0;
    FUN_00413e70(&DAT_0200ada8);
  }
  pcVar1 = (code *)PTR_FUN_020060a0;
  if (DAT_0200acb0 == 0) {
    while (PTR_FUN_020060a0 = pcVar1, pcVar1 != (code *)0x0) {
      PTR_FUN_020060a0 = (undefined *)0x0;
      (*pcVar1)();
      pcVar1 = (code *)PTR_FUN_020060a0;
    }
  }
  do {
    if ((DAT_0200acb0 == 2) && (DAT_01db9000 == 0)) {
      DAT_0200ac98 = 0;
    }
    if (DAT_0200acb0 == 0) {
      lVar3 = FUN_00409810();
      while (lVar3 != 0) {
        FUN_00410f20(lVar3);
        lVar3 = FUN_00409810();
      }
    }
    FUN_00413650();
    if (((DAT_0200acb0 < 2) || (DAT_01db9000 != 0)) && (PTR_DAT_0200aca0 != (undefined *)0x0)) {
      FUN_0041b700(PTR_DAT_0200aca0);
      if ((*(longlong *)(PTR_DAT_0200aca0 + 0x20) != *(longlong *)(PTR_DAT_0200aca0 + 8)) &&
         (*(longlong *)(PTR_DAT_0200aca0 + 0x20) != 0)) {
        thunk_FUN_041c8c2f();
      }
    }
    DAT_0200ac88 = 0;
    if (DAT_0200acb0 == 1) {
      (*DAT_0200aca8)();
    }
    if (DAT_0200acb0 != 0) {
      FUN_00413e70(&DAT_0200ac80);
    }
    if (DAT_0200ac80 == (undefined8 *)0x0) {
      if (DAT_02006068 != (code *)0x0) {
        (*DAT_02006068)();
      }
      thunk_FUN_0418b370(DAT_01db9000);
    }
    puVar4 = DAT_0200ac80;
    puVar5 = &DAT_0200ac80;
    for (lVar3 = 0x25; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  } while( true );
}

