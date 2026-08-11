/* Ghidra address: 019a1830 */
/* Ghidra symbol: FUN_019a1830 */


ulonglong FUN_019a1830(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  longlong *plVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  iVar7 = *(int *)(param_1 + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      plVar4 = (longlong *)FUN_00b94e60(param_1,iVar6);
      cVar2 = FUN_0198a580(plVar4);
      if (cVar2 == '\x04') {
        uVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        cVar2 = FUN_01d3f4b0(plVar4,0);
        if (cVar2 == '\0') {
          cVar2 = FUN_01d3f6f0(uVar3);
          if ((cVar2 != '\0') || (cVar2 = FUN_01d3fc30(uVar3), cVar2 != '\0')) goto LAB_019a18b8;
          bVar1 = false;
        }
        else {
LAB_019a18b8:
          bVar1 = true;
        }
        if (!bVar1) {
          uVar5 = 0;
          break;
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return uVar5 & 0xffffffff;
}

