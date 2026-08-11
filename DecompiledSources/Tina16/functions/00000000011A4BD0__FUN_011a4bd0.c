/* Ghidra address: 011a4bd0 */
/* Ghidra symbol: FUN_011a4bd0 */


void FUN_011a4bd0(void)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  
  *(undefined4 *)PTR_DAT_02004708 = 0x1130;
  uVar1 = DAT_020c61b4;
  if ((int)DAT_020c61c0 < (int)DAT_020c61b4) {
    uVar1 = DAT_020c61c0;
  }
  if (uVar1 < 0x80000000) {
    iVar3 = uVar1 + 1;
    puVar2 = &DAT_020c6328;
    do {
      FUN_0064dbe0(*puVar2,1);
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (uVar1 - 1 < 0x80000000) {
    puVar2 = &DAT_020c6378;
    uVar4 = uVar1;
    do {
      FUN_0064dbe0(*puVar2,1);
      puVar2 = puVar2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (uVar1 - 2 < 0x80000000) {
    iVar3 = uVar1 - 1;
    puVar2 = &DAT_020c63c8;
    do {
      FUN_0064dbe0(*puVar2,1);
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (uVar1 - 3 < 0x80000000) {
    iVar3 = uVar1 - 2;
    puVar2 = &DAT_020c6418;
    do {
      FUN_0064dbe0(*puVar2,1);
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (uVar1 - 4 < 0x80000000) {
    iVar3 = uVar1 - 3;
    puVar2 = &DAT_020c6468;
    do {
      FUN_0064dbe0(*puVar2,1);
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (uVar1 - 5 < 0x80000000) {
    iVar3 = uVar1 - 4;
    puVar2 = &DAT_020c64b8;
    do {
      FUN_0064dbe0(*puVar2,1);
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (-1 < (int)(uVar1 - 6)) {
    iVar3 = uVar1 - 5;
    puVar2 = &DAT_020c6508;
    do {
      FUN_0064dbe0(*puVar2,1);
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

