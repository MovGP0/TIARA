/* Ghidra address: 006591f0 */
/* Ghidra symbol: FUN_006591f0 */


int FUN_006591f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = FUN_00659110(param_1);
  if ((0 < iVar1) && (iVar3 = iVar1 + -1, -1 < iVar3)) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x338),iVar3);
      if (*(char *)(lVar2 + 0xa9) == '\0') {
        iVar1 = iVar1 + -1;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return iVar1;
}

