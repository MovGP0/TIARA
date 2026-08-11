/* Ghidra address: 017d2770 */
/* Ghidra symbol: FUN_017d2770 */


undefined8 FUN_017d2770(longlong param_1)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      plVar3 = (longlong *)FUN_00b94e60(param_1,iVar4);
      if (((plVar3 != (longlong *)0x0) && (cVar1 = FUN_0198a580(plVar3), cVar1 == '\x04')) &&
         ((sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3), sVar2 == 0x3d ||
          (((sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3), sVar2 == 0x65 ||
            (sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3), sVar2 == 0x3e)) ||
           (sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3), sVar2 == 0x66)))))) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}

