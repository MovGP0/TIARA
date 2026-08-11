/* Ghidra address: 010e2d90 */
/* Ghidra symbol: FUN_010e2d90 */


ulonglong FUN_010e2d90(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar2 = FUN_01c87d20(*(undefined8 *)PTR_DAT_02004e40);
  uVar6 = (ulonglong)uVar2;
  iVar7 = 0;
  do {
    uVar4 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,iVar7);
    cVar1 = FUN_004113d0(uVar4,&PTR_FUN_010dee68);
    if (cVar1 != '\0') {
      uVar4 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,iVar7);
      uVar4 = FUN_0065b870(uVar4);
      iVar3 = thunk_FUN_041de4d6(uVar4);
      if (iVar3 != 0) {
        uVar4 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,iVar7);
        plVar5 = (longlong *)FUN_004113f0(uVar4,&PTR_FUN_010dee68);
        if (plVar5 != (longlong *)param_1[0xfe]) {
          cVar1 = (**(code **)(*param_1 + 0x490))(param_1,plVar5);
          if (cVar1 == '\0') {
            if ((*(char *)((longlong)param_1 + 0x7fa) == '\x0e') &&
               (*(char *)((longlong)plVar5 + 0x7fa) == '\x03')) {
              FUN_00805200(plVar5);
            }
            else {
              if ((char)uVar6 != '\0') {
                cVar1 = (**(code **)(*plVar5 + 0x480))(plVar5);
                if (cVar1 != '\0') {
                  uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
                  goto LAB_010e2e77;
                }
              }
              uVar6 = 0;
            }
          }
        }
      }
    }
LAB_010e2e77:
    iVar7 = iVar7 + 1;
    iVar3 = FUN_00808090(*(undefined8 *)PTR_DAT_02005950);
    if (iVar3 <= iVar7) {
      return uVar6;
    }
  } while( true );
}

