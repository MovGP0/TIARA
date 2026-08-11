/* Ghidra address: 00c0c320 */
/* Ghidra symbol: FUN_00c0c320 */


bool FUN_00c0c320(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  cVar2 = FUN_00c10e70(*(undefined8 *)(param_1 + 0x90));
  if (cVar2 == '\0') {
    bVar5 = true;
  }
  else {
    iVar3 = FUN_00c11030(*(undefined8 *)(param_1 + 0x90),
                         *(int *)(*(longlong *)(param_1 + 0x90) + 0x4cc) + 1);
    do {
      iVar3 = iVar3 + -1;
      if ((iVar3 < 2) ||
         (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x5f8),
         iVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar3), iVar4 != 0)) break;
      iVar4 = FUN_00c11080(*(undefined8 *)(param_1 + 0x90),iVar3);
    } while (iVar4 == *(int *)(*(longlong *)(param_1 + 0x90) + 0x4cc));
    iVar4 = FUN_00bfaa50(*(undefined8 *)(param_1 + 0x90));
    bVar5 = iVar4 == iVar3;
  }
  return bVar5;
}

