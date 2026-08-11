/* Ghidra address: 0160ed90 */
/* Ghidra symbol: FUN_0160ed90 */


longlong * FUN_0160ed90(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  
  sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (((sVar3 == 0x39) && ((char)param_1[0x34] == '\x01')) &&
     (*(longlong *)(param_1[0x35] + 8) != 0)) {
    lVar1 = *(longlong *)(param_1[0x35] + 8);
    iVar6 = *(int *)(lVar1 + 0x10);
    iVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        plVar4 = (longlong *)FUN_00b94e60(lVar1,iVar5);
        cVar2 = FUN_0198a580(plVar4);
        if (((cVar2 == '\x04') && (sVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4), sVar3 == 0x39)) &&
           ((char)plVar4[0x34] == '\x03')) {
          return plVar4;
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return (longlong *)0x0;
}

