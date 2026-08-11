/* Ghidra address: 019a1540 */
/* Ghidra symbol: FUN_019a1540 */


undefined1 FUN_019a1540(longlong param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined1 local_29;
  
  local_29 = 0;
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      plVar3 = (longlong *)FUN_00b94e60(param_1,iVar4);
      if (*param_2 != 0) {
        return 1;
      }
      cVar1 = FUN_0198a580(plVar3);
      if (cVar1 == '\x04') {
        sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        cVar1 = FUN_0160bff0(plVar3);
        if (cVar1 != '\0') {
          *param_2 = (longlong)plVar3;
          return 1;
        }
        if (((sVar2 == 0x39) && ((char)plVar3[0x34] == '\x01')) &&
           (*(longlong *)(plVar3[0x35] + 8) != 0)) {
          local_29 = FUN_019a1540(*(undefined8 *)(plVar3[0x35] + 8),param_2);
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return local_29;
}

