/* Ghidra address: 019a16d0 */
/* Ghidra symbol: FUN_019a16d0 */


undefined8 FUN_019a16d0(longlong param_1,uint param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      plVar4 = (longlong *)FUN_00b94e60(param_1,iVar5);
      cVar2 = FUN_0198a580(plVar4);
      if (cVar2 == '\x04') {
        uVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        if ((uVar3 == param_2) || (uVar3 == param_3)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          return 1;
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}

