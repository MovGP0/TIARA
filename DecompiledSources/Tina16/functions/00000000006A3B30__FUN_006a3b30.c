/* Ghidra address: 006a3b30 */
/* Ghidra symbol: FUN_006a3b30 */


void FUN_006a3b30(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  
  if ((param_2 == 0) || ((*(ushort *)(param_1 + 0x34) & 1) == 0)) {
    if (*(longlong *)(param_1 + 0x140) != param_2) {
      *(longlong *)(param_1 + 0x140) = param_2;
      iVar2 = FUN_004d4cf0();
      iVar5 = 0;
      if (-1 < iVar2 + -1) {
        do {
          uVar3 = FUN_004d4cc0(param_1,iVar5);
          cVar1 = FUN_004113d0(uVar3,&PTR_FUN_006a2f58);
          if (cVar1 != '\0') {
            plVar4 = (longlong *)FUN_004d4cc0(param_1,iVar5);
            (**(code **)(*plVar4 + 0x158))(plVar4,param_2);
          }
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  else {
    *(longlong *)(param_1 + 0x150) = param_2;
  }
  return;
}

