/* Ghidra address: 00665700 */
/* Ghidra symbol: FUN_00665700 */


void FUN_00665700(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar1 = param_1[0x27];
  if (lVar1 != param_2) {
    if (lVar1 != 0) {
      FUN_004d2d90(lVar1,param_1);
    }
    iVar3 = FUN_004d4cf0();
    iVar6 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar4 = FUN_004d4cc0(param_1,iVar6);
        cVar2 = FUN_004113d0(uVar4,&PTR_FUN_00639400);
        if ((cVar2 != '\0') &&
           (plVar5 = (longlong *)FUN_004d4cc0(param_1,iVar6), plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 0x128))(plVar5,param_2);
        }
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    param_1[0x27] = param_2;
    if (param_2 != 0) {
      FUN_004d26c0(param_2,param_1);
    }
    (**(code **)(*param_1 + 0x88))(param_1);
  }
  return;
}

