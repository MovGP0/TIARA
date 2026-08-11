/* Ghidra address: 00997f40 */
/* Ghidra symbol: FUN_00997f40 */


longlong * FUN_00997f40(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  cVar2 = FUN_004113d0(plVar3,&PTR_FUN_0092b928);
  if (cVar2 == '\0') {
    cVar2 = FUN_004113d0(plVar3,&PTR_FUN_00928b30);
    if (cVar2 == '\0') {
      cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x20),&PTR_FUN_00928cc0);
      if (cVar2 == '\0') {
        uVar4 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
        FUN_004134c0(uVar4);
      }
      if (param_2 == (longlong *)0x0) {
        uVar4 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
        FUN_004134c0(uVar4);
      }
      plVar3 = (longlong *)FUN_0098cda0(&PTR_FUN_00926660,1);
      (**(code **)(*plVar3 + 0x140))(plVar3,param_2);
      plVar3 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x20) + 0x48))
                         (*(longlong **)(param_1 + 0x20),plVar3);
    }
    else {
      if (param_2 == (longlong *)0x0) {
        uVar4 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
        FUN_004134c0(uVar4);
      }
      lVar5 = (**(code **)(*param_2 + 0x188))(param_2);
      if (lVar5 == 0) {
        uVar4 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
        FUN_004134c0(uVar4);
      }
      plVar3 = (longlong *)FUN_0098cda0(&PTR_FUN_00926660,1);
      uVar4 = (**(code **)(*param_2 + 0x188))(param_2);
      (**(code **)(*plVar3 + 0x140))(plVar3,uVar4);
      plVar1 = *(longlong **)(param_1 + 0x20);
      cVar2 = FUN_004113d0(plVar1,&PTR_FUN_00928cc0);
      if (cVar2 != '\0') {
        plVar3 = (longlong *)(**(code **)(*plVar1 + 0x48))(plVar1,plVar3);
      }
    }
  }
  else {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3,param_2,param_3,param_4);
    cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x20),&PTR_FUN_00928cc0);
    if (cVar2 != '\0') {
      cVar2 = FUN_004113d0(plVar3,&PTR_FUN_00926660);
      if (cVar2 == '\0') {
        FUN_00410f20(plVar3);
        uVar4 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
        FUN_004134c0(uVar4);
      }
      plVar3 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x20) + 0x48))
                         (*(longlong **)(param_1 + 0x20),plVar3);
    }
  }
  return plVar3;
}

