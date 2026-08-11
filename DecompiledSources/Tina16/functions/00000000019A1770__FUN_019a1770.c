/* Ghidra address: 019a1770 */
/* Ghidra symbol: FUN_019a1770 */


undefined8 FUN_019a1770(longlong param_1,uint param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      plVar5 = (longlong *)FUN_00b94e60(param_1,iVar6);
      cVar2 = FUN_0198a580(plVar5);
      if (cVar2 == '\x04') {
        uVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
        if ((uVar3 == param_2) &&
           (iVar4 = (**(code **)(*plVar5 + 0x210))(plVar5,param_3), iVar4 == param_4)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          return 1;
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return 0;
}

