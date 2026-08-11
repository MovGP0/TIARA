/* Ghidra address: 00995460 */
/* Ghidra symbol: FUN_00995460 */


longlong * FUN_00995460(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x20);
  if (lVar1 != 0) {
    cVar3 = FUN_004113d0(lVar1,&PTR_FUN_0092aae0);
    if (cVar3 == '\0') {
      FUN_00410f20(param_2);
      uVar5 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
      param_2 = (longlong *)FUN_004134c0(uVar5);
    }
    else {
      iVar4 = (**(code **)(*param_2 + 0x118))(param_2);
      if (0 < iVar4) {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x20);
        param_2 = (longlong *)(**(code **)(*plVar2 + 0x40))(plVar2,param_2);
      }
    }
  }
  return param_2;
}

