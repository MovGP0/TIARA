/* Ghidra address: 007fec40 */
/* Ghidra symbol: FUN_007fec40 */


undefined8 FUN_007fec40(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = FUN_007ff9d0();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_007ffa40(*(undefined8 *)(param_1 + 0xc0),iVar3);
      if (*(char *)(lVar2 + 0x4d2) == '\x02') {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

