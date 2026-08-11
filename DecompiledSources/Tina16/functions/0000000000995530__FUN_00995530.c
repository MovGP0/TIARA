/* Ghidra address: 00995530 */
/* Ghidra symbol: FUN_00995530 */


longlong * FUN_00995530(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18);
  if (lVar1 == 0) {
    uVar5 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
    param_2 = (longlong *)FUN_004134c0(uVar5);
  }
  else {
    cVar3 = FUN_004113d0(lVar1,&PTR_FUN_0092a8e8);
    if (cVar3 == '\0') {
      FUN_00410f20(param_2);
      uVar5 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
      param_2 = (longlong *)FUN_004134c0(uVar5);
    }
    else {
      iVar4 = (**(code **)(*param_2 + 0x118))(param_2);
      if (0 < iVar4) {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x18);
        param_2 = (longlong *)
                  (**(code **)(*plVar2 + 0x40))
                            (plVar2,param_2,*(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x31));
      }
    }
  }
  return param_2;
}

