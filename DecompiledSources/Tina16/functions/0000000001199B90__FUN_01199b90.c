/* Ghidra address: 01199b90 */
/* Ghidra symbol: FUN_01199b90 */


void FUN_01199b90(void)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_020c61c0 < 0x80000000) {
    iVar2 = DAT_020c61c0 + 1;
    puVar1 = &DAT_020c6328;
    do {
      FUN_0064de00(*puVar1,0);
      FUN_0064dbe0();
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (DAT_020c61c0 - 1 < 0x80000000) {
    puVar1 = &DAT_020c6378;
    uVar3 = DAT_020c61c0;
    do {
      FUN_0064de00(*puVar1,0);
      FUN_0064dbe0();
      puVar1 = puVar1 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (DAT_020c61c0 - 2 < 0x80000000) {
    iVar2 = DAT_020c61c0 - 1;
    puVar1 = &DAT_020c63c8;
    do {
      FUN_0064de00(*puVar1,0);
      FUN_0064dbe0();
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (DAT_020c61c0 - 3 < 0x80000000) {
    iVar2 = DAT_020c61c0 - 2;
    puVar1 = &DAT_020c6418;
    do {
      FUN_0064de00(*puVar1,0);
      FUN_0064dbe0();
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (DAT_020c61c0 - 4 < 0x80000000) {
    iVar2 = DAT_020c61c0 - 3;
    puVar1 = &DAT_020c6468;
    do {
      FUN_0064de00(*puVar1,0);
      FUN_0064dbe0();
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (DAT_020c61c0 - 5 < 0x80000000) {
    iVar2 = DAT_020c61c0 - 4;
    puVar1 = &DAT_020c64b8;
    do {
      FUN_0064de00(*puVar1,0);
      FUN_0064dbe0();
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (-1 < (int)(DAT_020c61c0 - 6)) {
    iVar2 = DAT_020c61c0 - 5;
    puVar1 = &DAT_020c6508;
    do {
      FUN_0064de00(*puVar1,0);
      FUN_0064dbe0(*puVar1);
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

