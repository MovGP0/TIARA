/* Ghidra address: 0163e040 */
/* Ghidra symbol: FUN_0163e040 */


longlong * FUN_0163e040(longlong param_1,int param_2,int param_3,undefined1 *param_4)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  
  *param_4 = 0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  iVar9 = *(int *)(lVar1 + 0x10);
  iVar8 = 0;
  if (-1 < iVar9 + -1) {
    do {
      uVar6 = FUN_00b94e60(lVar1,iVar8);
      cVar2 = FUN_0198a580(uVar6);
      if (cVar2 == '\x04') {
        plVar7 = (longlong *)FUN_00b94e60(lVar1,iVar8);
        sVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
        iVar4 = (**(code **)(*plVar7 + 0x1c8))(plVar7);
        if ((iVar4 == 2) && (sVar3 == 0xe)) {
          iVar4 = (**(code **)(*plVar7 + 0x210))(plVar7,0);
          iVar5 = (**(code **)(*plVar7 + 0x210))(plVar7,1);
          if ((iVar4 == param_2) && (iVar5 == param_3)) {
            return plVar7;
          }
          if ((iVar4 == param_3) && (iVar5 == param_2)) {
            *param_4 = 1;
            return plVar7;
          }
        }
      }
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return (longlong *)0x0;
}

