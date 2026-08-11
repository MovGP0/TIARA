/* Ghidra address: 00806050 */
/* Ghidra symbol: FUN_00806050 */


void FUN_00806050(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  if ((*(char *)(param_2 + 0x391) != '\0') && ((*(ushort *)(param_2 + 0x34) & 0x10) == 0)) {
    iVar2 = FUN_00654c00();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        plVar4 = (longlong *)FUN_00654bc0(param_2,iVar5);
        if (((*(uint *)(plVar4 + 0x14) & 0x8000) != 0) &&
           (*(char *)((longlong)plVar4 + 0xa9) != '\0')) {
          (**(code **)(*plVar4 + 0x178))(plVar4);
        }
        cVar1 = FUN_004113d0(plVar4,&PTR_FUN_00640c18);
        if ((cVar1 != '\0') && (iVar3 = FUN_00654c00(plVar4), 0 < iVar3)) {
          FUN_00806050(param_1,plVar4);
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

