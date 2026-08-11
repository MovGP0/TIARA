/* Ghidra address: 007e51a0 */
/* Ghidra symbol: FUN_007e51a0 */


undefined8 FUN_007e51a0(longlong param_1,char param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  uVar5 = 0;
  if ((param_2 != '\0') ||
     (((*(ushort *)(param_1 + 0x34) & 0x10) == 0 && (cVar1 = FUN_007e5580(param_1), cVar1 != '\0')))
     ) {
    lVar8 = 0;
    iVar2 = FUN_007e2ef0(param_1);
    iVar7 = 0;
    iVar6 = 0;
    if (-1 < iVar2 + -1) {
      do {
        iVar7 = iVar6;
        lVar3 = FUN_007e2f10(param_1,iVar7);
        if (*(char *)(lVar3 + 0x86) != '\0') {
          uVar4 = FUN_007e2f10(param_1,iVar7);
          cVar1 = FUN_007e4e10(uVar4);
          if (cVar1 == '\0') break;
          lVar3 = FUN_007e2f10(param_1,iVar7);
          *(undefined1 *)(lVar3 + 0x86) = 0;
          uVar5 = 1;
        }
        iVar6 = iVar7 + 1;
        iVar2 = iVar2 + -1;
        iVar7 = 0;
      } while (iVar2 != 0);
    }
    iVar6 = FUN_007e2ef0(param_1);
    if (iVar7 <= iVar6 + -1) {
      iVar2 = ((iVar6 + -1) - iVar7) + 1;
      iVar6 = iVar7;
      do {
        uVar4 = FUN_007e2f10(param_1,iVar6);
        cVar1 = FUN_007e4e10(uVar4);
        if (cVar1 == '\0') {
          lVar3 = FUN_007e2f10(param_1,iVar6);
          if (*(char *)(lVar3 + 0x86) != '\0') {
            if ((lVar8 != 0) && (*(char *)(lVar8 + 0x86) == '\0')) {
              *(undefined1 *)(lVar8 + 0x86) = 1;
              uVar5 = 1;
            }
            lVar8 = 0;
            iVar7 = iVar6;
          }
        }
        else {
          if ((lVar8 != 0) && (*(char *)(lVar8 + 0x86) != '\0')) {
            *(undefined1 *)(lVar8 + 0x86) = 0;
            uVar5 = 1;
          }
          lVar8 = FUN_007e2f10(param_1,iVar6);
        }
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar6 = FUN_007e2ef0(param_1);
    iVar6 = iVar6 + -1;
    if (iVar7 <= iVar6) {
      iVar7 = (iVar7 - iVar6) + -1;
      do {
        lVar8 = FUN_007e2f10(param_1,iVar6);
        if (*(char *)(lVar8 + 0x86) != '\0') {
          uVar4 = FUN_007e2f10(param_1,iVar6);
          cVar1 = FUN_007e4e10(uVar4);
          if (cVar1 == '\0') {
            return uVar5;
          }
          lVar8 = FUN_007e2f10(param_1,iVar6);
          *(undefined1 *)(lVar8 + 0x86) = 0;
          uVar5 = 1;
        }
        iVar6 = iVar6 + -1;
        iVar7 = iVar7 + 1;
      } while (iVar7 != 0);
    }
  }
  return uVar5;
}

