/* Ghidra address: 019a02e0 */
/* Ghidra symbol: FUN_019a02e0 */


ulonglong FUN_019a02e0(longlong param_1)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  iVar6 = *(int *)(param_1 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      plVar3 = (longlong *)FUN_00b94e60(param_1,iVar5);
      cVar1 = FUN_0198a580(plVar3);
      if (cVar1 == '\x04') {
        sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        cVar1 = FUN_01d3f4b0(plVar3,0);
        if (cVar1 == '\0') {
          cVar1 = FUN_01d3f6f0(sVar2);
          if ((cVar1 != '\0') || (cVar1 = FUN_01d3fc30(sVar2), cVar1 != '\0')) goto LAB_019a036c;
          cVar1 = '\0';
        }
        else {
LAB_019a036c:
          cVar1 = '\x01';
        }
        if (((sVar2 == 0x39) && ((char)plVar3[0x34] == '\x01')) &&
           (*(longlong *)(plVar3[0x35] + 8) != 0)) {
          cVar1 = FUN_019a02e0(*(undefined8 *)(plVar3[0x35] + 8));
        }
        if (cVar1 == '\0') {
          uVar4 = 0;
          break;
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return uVar4 & 0xffffffff;
}

