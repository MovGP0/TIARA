/* Ghidra address: 009982e0 */
/* Ghidra symbol: FUN_009982e0 */


longlong * FUN_009982e0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  cVar1 = FUN_004113d0(plVar3,&PTR_FUN_0092bb40);
  if ((cVar1 == '\0') ||
     (cVar1 = FUN_004113d0(*(undefined8 *)(param_1 + 0x20),&PTR_FUN_0092bd48), cVar1 == '\0')) {
    cVar1 = FUN_004113d0(plVar3,&PTR_FUN_0092bd48);
    if (cVar1 == '\0') {
      uVar2 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
      plVar3 = (longlong *)FUN_004134c0(uVar2);
    }
    else {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3,param_2,param_3,param_4);
    }
  }
  else {
    uVar2 = (**(code **)(*plVar3 + 0x40))(plVar3,param_2,param_3,param_4);
    plVar3 = (longlong *)FUN_00948c00(uVar2);
    cVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
    if (cVar1 == '\0') {
      FUN_00410f20(plVar3);
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))
                        (*(longlong **)(param_1 + 0x20),param_2,param_3,param_4);
      plVar3 = (longlong *)FUN_00948c00(uVar2);
    }
  }
  return plVar3;
}

