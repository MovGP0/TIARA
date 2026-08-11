/* Ghidra address: 00413d80 */
/* Ghidra symbol: FUN_00413d80 */


void FUN_00413d80(void)

{
  int iVar1;
  ulonglong uVar2;
  byte bVar3;
  
  bVar3 = 0x10;
  iVar1 = DAT_01db9000;
  do {
    (&DAT_01dbc02c)[bVar3] = (char)(iVar1 % 10) + '0';
    iVar1 = iVar1 / 10;
    bVar3 = bVar3 - 1;
  } while (iVar1 != 0);
  bVar3 = 0x24;
  uVar2 = DAT_01db9008;
  do {
    (&DAT_01dbc02c)[bVar3] = (&DAT_01dbc0f0)[uVar2 & 0xf];
    uVar2 = uVar2 / 0x10;
    bVar3 = bVar3 - 1;
  } while (uVar2 != 0);
  return;
}

