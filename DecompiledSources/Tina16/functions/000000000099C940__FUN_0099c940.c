/* Ghidra address: 0099c940 */
/* Ghidra symbol: FUN_0099c940 */


longlong * FUN_0099c940(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 local_20;
  
  local_20 = 0;
  if (param_2 == (longlong *)0x0) {
    uVar4 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
    FUN_004134c0(uVar4);
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    iVar2 = (**(code **)(*param_2 + 0x118))(param_2);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      plVar5 = (longlong *)(**(code **)(*param_2 + 0x110))(param_2,iVar2);
      cVar1 = (**(code **)(*plVar5 + 0x168))(plVar5);
      if (cVar1 != '\x06') {
        (**(code **)(*param_2 + 0x158))(param_2,iVar2);
      }
    }
  }
  else {
    cVar1 = FUN_004113d0(*(longlong *)(param_1 + 0x18),&PTR_FUN_0092ee58);
    if (cVar1 == '\0') {
      FUN_00410f20(param_2);
      uVar4 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
      FUN_004134c0(uVar4);
    }
    else {
      iVar2 = (**(code **)(*param_2 + 0x118))(param_2);
joined_r0x0099c9c0:
      iVar2 = iVar2 + -1;
      if (-1 < iVar2) {
        plVar5 = (longlong *)(**(code **)(*param_2 + 0x110))(param_2,iVar2);
        cVar1 = (**(code **)(*plVar5 + 0x168))(plVar5);
        if (cVar1 == '\x06') goto code_r0x0099c9e6;
        goto LAB_0099ca22;
      }
    }
  }
  FUN_00414520(&local_20);
  return param_2;
code_r0x0099c9e6:
  plVar5 = (longlong *)(**(code **)(*param_2 + 0x110))(param_2,iVar2);
  (**(code **)(*plVar5 + 0x160))(plVar5,&local_20);
  iVar3 = FUN_00416420(local_20,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x28));
  if (iVar3 != 0) {
LAB_0099ca22:
    (**(code **)(*param_2 + 0x158))(param_2,iVar2);
  }
  goto joined_r0x0099c9c0;
}

