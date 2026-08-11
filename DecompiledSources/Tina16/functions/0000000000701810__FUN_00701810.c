/* Ghidra address: 00701810 */
/* Ghidra symbol: FUN_00701810 */


longlong * FUN_00701810(undefined8 param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  
  iVar2 = DAT_02012490;
  lVar1 = DAT_02012480;
  if (DAT_02012480 != 0) {
    iVar4 = FUN_006fca40(DAT_02012480);
    iVar6 = iVar2;
    if (param_2 == '\0') {
      do {
        if (iVar6 == 0) {
          iVar6 = iVar4;
        }
        iVar6 = iVar6 + -1;
        plVar5 = (longlong *)FUN_006fca20(lVar1,iVar6);
        if (((*(char *)((longlong)plVar5 + 0xa9) != '\0') &&
            (cVar3 = (**(code **)(*plVar5 + 0xf0))(plVar5), cVar3 != '\0')) &&
           (*(char *)((longlong)plVar5 + 0x31b) != '\0')) {
          return plVar5;
        }
      } while (iVar6 != iVar2);
    }
    else {
      do {
        if (iVar6 == iVar4 + -1) {
          iVar6 = 0;
        }
        else {
          iVar6 = iVar6 + 1;
        }
        plVar5 = (longlong *)FUN_006fca20(lVar1,iVar6);
        if (((*(char *)((longlong)plVar5 + 0xa9) != '\0') &&
            (cVar3 = (**(code **)(*plVar5 + 0xf0))(plVar5), cVar3 != '\0')) &&
           (*(char *)((longlong)plVar5 + 0x31b) != '\0')) {
          return plVar5;
        }
      } while (iVar6 != iVar2);
    }
  }
  return (longlong *)0x0;
}

