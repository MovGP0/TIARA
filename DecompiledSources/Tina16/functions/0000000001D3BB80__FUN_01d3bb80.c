/* Ghidra address: 01d3bb80 */
/* Ghidra symbol: FUN_01d3bb80 */


ulonglong FUN_01d3bb80(longlong *param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  bool bVar10;
  
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if ((*PTR_DAT_020023b0 != '\0') || (*PTR_DAT_02003b28 != '\0')) {
    if (((param_1 != (longlong *)0x0) && ((undefined **)*param_1 == &PTR_FUN_010b5580)) ||
       (((uVar6 = 0, *PTR_DAT_02003b28 == '\0' || (*PTR_DAT_02001098 != '\0')) ||
        (uVar6 = 0, *PTR_DAT_02001b10 == '\0')))) goto LAB_01d3bd5f;
    if (param_1 != (longlong *)0x0) {
      uVar4 = FUN_0198a580(param_1);
      if ((byte)uVar4 < 8) {
        bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)uVar4 & 0x1f) & 0x1eU) !=
                 0;
      }
      else {
        bVar10 = false;
      }
      if (bVar10) {
        iVar3 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a0) + 0x28))();
        iVar7 = 0;
        if (-1 < iVar3 + -1) {
          do {
            lVar5 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a0) + 0x30))
                              (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a0),iVar7);
            uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
            uVar6 = CONCAT71((int7)((ulonglong)lVar5 >> 8),*(uint *)(lVar5 + 0x50) == (uint)uVar2);
            if (*PTR_DAT_020023b0 == '\0') {
              uVar6 = 0;
              iVar9 = 0xf;
              puVar8 = &DAT_01ff4ef4;
              do {
                uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
                if (*puVar8 == (uint)uVar2) {
                  uVar6 = 1;
                  break;
                }
                puVar8 = puVar8 + 1;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            if ((char)uVar6 != '\0') break;
            iVar7 = iVar7 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
    if (param_1 != (longlong *)0x0) {
      uVar4 = FUN_0198a580(param_1);
      if ((byte)uVar4 < 8) {
        bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)uVar4 & 0x1f) & 0x20U) !=
                 0;
      }
      else {
        bVar10 = false;
      }
      if (bVar10) {
        uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
      }
    }
  }
  if (*PTR_DAT_020052b8 != '\0') {
    if (((char)uVar6 == '\0') || (cVar1 = FUN_01d3bd80(param_1), cVar1 == '\0')) {
      uVar6 = 0;
    }
    else {
      uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
    }
  }
LAB_01d3bd5f:
  return uVar6 & 0xffffffff;
}

