/* Ghidra address: 010e3460 */
/* Ghidra symbol: FUN_010e3460 */


ulonglong FUN_010e3460(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  iVar6 = 1;
  do {
    iVar7 = 0;
    do {
      lVar8 = (longlong)iVar6;
      lVar9 = (longlong)iVar7;
      if (*(longlong *)(DAT_0202f9c0 + -0x18 + lVar8 * 0x40 + lVar9 * 8) != 0) {
        uVar4 = FUN_0065b870(*(undefined8 *)(DAT_0202f9c0 + -0x18 + lVar8 * 0x40 + lVar9 * 8));
        iVar3 = thunk_FUN_041de4d6(uVar4);
        if ((iVar3 != 0) &&
           (plVar1 = *(longlong **)(DAT_0202f9c0 + -0x18 + lVar8 * 0x40 + lVar9 * 8),
           *(char *)((longlong)plVar1 + 0x7f9) == '\x01')) {
          if ((char)uVar5 != '\0') {
            cVar2 = (**(code **)(*plVar1 + 0x480))(plVar1);
            if (cVar2 != '\0') {
              uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
              goto LAB_010e3502;
            }
          }
          uVar5 = 0;
        }
      }
LAB_010e3502:
      iVar7 = iVar7 + 1;
    } while (iVar7 != 4);
    iVar6 = iVar6 + 1;
    if (iVar6 == 0x11) {
      return uVar5 & 0xffffffff;
    }
  } while( true );
}

