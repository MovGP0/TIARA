/* Ghidra address: 0119a6c0 */
/* Ghidra symbol: FUN_0119a6c0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0119a6c0(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  
  DAT_01f29e90 = 10 - DAT_01f29ea4;
  iVar1 = 0;
  if (-1 < param_1 + -1) {
    piVar3 = &DAT_020c61ec;
    puVar4 = &DAT_020c6378;
    iVar5 = param_1;
    do {
      iVar2 = iVar1;
      if (param_1 / 2 < iVar1) {
        iVar2 = param_1 - iVar1;
      }
      if (param_2 == '\0') {
        iVar2 = *(int *)(&DAT_01f29e30 + (longlong)(iVar2 + 1) * 4);
      }
      else {
        iVar2 = *piVar3 * 0xf + 0x19;
      }
      FUN_0064cb30(*puVar4,DAT_01f29e5c - _DAT_01f29ea8);
      FUN_0064cb90(*puVar4,DAT_01f29e90 + _DAT_020c6558);
      FUN_0064cbf0(*puVar4,DAT_01f29e78);
      FUN_0064cc50(*puVar4,iVar2);
      DAT_01f29e90 = DAT_01f29e90 + iVar2 + 1;
      if (DAT_01f29e90 < 1) {
        FUN_0064dbe0(*puVar4,0);
      }
      else {
        FUN_0064dbe0(*puVar4,0);
      }
      iVar1 = iVar1 + 1;
      puVar4 = puVar4 + 1;
      piVar3 = piVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

