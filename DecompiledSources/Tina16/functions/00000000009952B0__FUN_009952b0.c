/* Ghidra address: 009952b0 */
/* Ghidra symbol: FUN_009952b0 */


longlong * FUN_009952b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_2 == (longlong *)0x0) {
    uVar4 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
    FUN_004134c0(uVar4);
  }
  cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_00928ef0);
  if (cVar2 == '\0') {
    uVar4 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
    param_2 = (longlong *)FUN_004134c0(uVar4);
  }
  else {
    iVar3 = (**(code **)(*param_2 + 0x118))(param_2);
    if (0 < iVar3) {
      param_2 = (longlong *)
                (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
                          (*(longlong **)(param_1 + 0x18),param_2);
      plVar1 = *(longlong **)(param_1 + 0x20);
      cVar2 = FUN_004113d0(plVar1,&PTR_FUN_00928cc0);
      if (cVar2 != '\0') {
        param_2 = (longlong *)(**(code **)(*plVar1 + 0x48))(plVar1,param_2);
      }
    }
  }
  return param_2;
}

