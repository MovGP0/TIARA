/* Ghidra address: 00998180 */
/* Ghidra symbol: FUN_00998180 */


void FUN_00998180(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  cVar1 = FUN_004113d0(plVar2,&PTR_FUN_0092b928);
  if ((cVar1 != '\0') &&
     (cVar1 = FUN_004113d0(*(undefined8 *)(param_1 + 0x20),&PTR_FUN_0092aae0), cVar1 != '\0')) {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
    cVar1 = FUN_004113d0(plVar2,&PTR_FUN_00926660);
    if (cVar1 == '\0') {
      FUN_00410f20(plVar2);
      uVar3 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
      FUN_004134c0(uVar3);
    }
    cVar1 = FUN_004113d0(plVar2,&PTR_FUN_00926660);
    if (cVar1 != '\0') {
      (**(code **)(*plVar2 + 0xf0))(plVar2,0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))(*(longlong **)(param_1 + 0x20),plVar2);
    return;
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  cVar1 = FUN_004113d0(plVar2,&PTR_FUN_0092aec0);
  if ((cVar1 == '\0') || (*(longlong *)(param_1 + 0x20) != 0)) {
    uVar3 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
    FUN_004134c0(uVar3);
  }
  else {
    (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
  }
  return;
}

