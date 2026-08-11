/* Ghidra address: 019a1640 */
/* Ghidra symbol: FUN_019a1640 */


undefined8 FUN_019a1640(longlong param_1,uint param_2)

{
  char cVar1;
  ushort uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      plVar3 = (longlong *)FUN_00b94e60(param_1,iVar4);
      cVar1 = FUN_0198a580(plVar3);
      if ((cVar1 == '\x04') && (uVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3), uVar2 == param_2)) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}

