/* Ghidra address: 010e3150 */
/* Ghidra symbol: FUN_010e3150 */


ulonglong FUN_010e3150(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  int iVar6;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  iVar6 = 0;
  do {
    uVar3 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,iVar6);
    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_010dee68);
    if (cVar1 != '\0') {
      uVar3 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,iVar6);
      uVar3 = FUN_0065b870(uVar3);
      iVar2 = thunk_FUN_041de4d6(uVar3);
      if (iVar2 != 0) {
        uVar3 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,iVar6);
        plVar4 = (longlong *)FUN_004113f0(uVar3,&PTR_FUN_010dee68);
        if ((char)uVar5 != '\0') {
          cVar1 = (**(code **)(*plVar4 + 0x480))(plVar4);
          if (cVar1 != '\0') {
            uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
            goto LAB_010e31dd;
          }
        }
        uVar5 = 0;
      }
    }
LAB_010e31dd:
    iVar6 = iVar6 + 1;
    iVar2 = FUN_00808090(*(undefined8 *)PTR_DAT_02005950);
    if (iVar2 <= iVar6) {
      return uVar5 & 0xffffffff;
    }
  } while( true );
}

