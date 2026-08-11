/* Ghidra address: 01992120 */
/* Ghidra symbol: FUN_01992120 */


undefined8 FUN_01992120(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  while( true ) {
    do {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        return 0;
      }
      lVar3 = FUN_00b94e60(param_1,iVar1);
    } while ((lVar3 == 0) || (bVar2 = FUN_0198a580(lVar3), 9 < bVar2));
    bVar2 = FUN_0198a580(lVar3);
    if (bVar2 < 9) break;
    if ((*(int *)(lVar3 + 0xc) == param_2) && (*(int *)(lVar3 + 0x10) == param_3)) {
      uVar4 = FUN_00b94e60(param_1,iVar1);
      return uVar4;
    }
  }
  return 0;
}

