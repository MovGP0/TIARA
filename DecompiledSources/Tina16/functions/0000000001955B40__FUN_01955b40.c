/* Ghidra address: 01955b40 */
/* Ghidra symbol: FUN_01955b40 */


void FUN_01955b40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  
  plVar1 = (longlong *)param_1[0x34];
  if (plVar1 != (longlong *)0x0) {
    lVar2 = param_1[0x1e];
    cVar4 = FUN_004113d0(lVar2,&PTR_FUN_0191c328);
    if (cVar4 == '\0') {
      cVar4 = FUN_004113d0(lVar2,&PTR_FUN_01936058);
      if (cVar4 == '\0') {
        uVar3 = FUN_0194df00();
        (**(code **)(*plVar1 + 0x130))(plVar1,uVar3);
      }
      else {
        (**(code **)(*plVar1 + 0x130))(plVar1,*(undefined8 *)(lVar2 + 0x180));
      }
    }
    else {
      (**(code **)(*plVar1 + 0x130))(plVar1,*(undefined8 *)(lVar2 + 0x1a0));
    }
  }
  if (param_1[0x1e] != 0) {
    (**(code **)(*param_1 + 0x2b0))(param_1);
  }
  lVar2 = param_1[0x34];
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x78) != 0)) {
    cVar4 = FUN_004113d0(lVar2,&PTR_FUN_00640c18);
    if (cVar4 != '\0') {
      FUN_0065b830(lVar2);
    }
  }
  return;
}

