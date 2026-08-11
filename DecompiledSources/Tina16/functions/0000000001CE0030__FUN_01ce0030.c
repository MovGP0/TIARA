/* Ghidra address: 01ce0030 */
/* Ghidra symbol: FUN_01ce0030 */


void FUN_01ce0030(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  cVar2 = (**(code **)(*param_2 + 0x58))(param_2);
  if (cVar2 != '\0') {
    lVar1 = param_2[0x1f];
    iVar5 = *(int *)(lVar1 + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        plVar3 = (longlong *)FUN_004aeac0(lVar1,iVar4);
        (**(code **)(*plVar3 + 0x70))(plVar3,*(undefined8 *)(param_1 + 0x78));
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (param_2[0x23] != 0) {
      lVar1 = *(longlong *)(param_2[0x23] + 0xf8);
      iVar5 = *(int *)(lVar1 + 0x10);
      iVar4 = 0;
      if (-1 < iVar5 + -1) {
        do {
          plVar3 = (longlong *)FUN_004aeac0(lVar1,iVar4);
          (**(code **)(*plVar3 + 0x70))(plVar3,*(undefined8 *)(param_1 + 0x78));
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  return;
}

