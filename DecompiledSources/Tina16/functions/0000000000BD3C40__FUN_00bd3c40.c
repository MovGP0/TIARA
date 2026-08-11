/* Ghidra address: 00bd3c40 */
/* Ghidra symbol: FUN_00bd3c40 */


longlong FUN_00bd3c40(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar3);
      cVar1 = FUN_0043e2c0(lVar2 + 0x10,param_2,0x5c);
      if (cVar1 != '\0') {
        return lVar2;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

