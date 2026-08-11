/* Ghidra address: 013fcd10 */
/* Ghidra symbol: FUN_013fcd10 */


void FUN_013fcd10(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_2 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      plVar3 = (longlong *)FUN_00b94e60(param_2,iVar4);
      cVar1 = FUN_0198a580(plVar3);
      if (cVar1 == '\x04') {
        FUN_017ff5f0(plVar3,param_3);
        sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        if ((((sVar2 == 0x39) && ((char)plVar3[0x34] == '\x01')) &&
            (*(char *)(plVar3[0x35] + 0xb0) == '\0')) && (*(longlong *)(plVar3[0x35] + 8) != 0)) {
          FUN_013fcd10(param_1,*(undefined8 *)(plVar3[0x35] + 8),plVar3);
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

