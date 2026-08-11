/* Ghidra address: 0187a800 */
/* Ghidra symbol: FUN_0187a800 */


void FUN_0187a800(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(param_2,iVar2);
      FUN_0187a6c0(param_1,*(undefined8 *)(lVar1 + 0x218),lVar1);
      FUN_0187a780(param_1,*(undefined8 *)(lVar1 + 0x220),lVar1);
      FUN_0187a800(param_1,*(undefined8 *)(lVar1 + 0x208));
      if (*(char *)(lVar1 + 0x1cc) != '\0') {
        FUN_0187a6c0(param_1,lVar1,lVar1);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

