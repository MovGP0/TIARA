/* Ghidra address: 01569ce0 */
/* Ghidra symbol: FUN_01569ce0 */


undefined8 FUN_01569ce0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x938) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x938),iVar3);
      cVar1 = FUN_00e0ecf0(*(undefined8 *)(lVar2 + 0x828));
      if (cVar1 != '\0') {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

