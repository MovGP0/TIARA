/* Ghidra address: 013b3e30 */
/* Ghidra symbol: FUN_013b3e30 */


undefined8 FUN_013b3e30(longlong param_1,byte *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined1 auStack_148 [32];
  byte local_128 [256];
  
  lVar3 = (ulonglong)*param_2 + 1;
  pbVar5 = local_128;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar5 = *param_2;
    param_2 = param_2 + 1;
    pbVar5 = pbVar5 + 1;
  }
  iVar6 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar2 = FUN_00b94e60(param_1,iVar4);
      cVar1 = FUN_013b3dd0(auStack_148,uVar2);
      if (cVar1 != '\0') {
        uVar2 = FUN_00b94e60(param_1,iVar4);
        return uVar2;
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}

