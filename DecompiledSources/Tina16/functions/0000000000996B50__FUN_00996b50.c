/* Ghidra address: 00996b50 */
/* Ghidra symbol: FUN_00996b50 */


longlong FUN_00996b50(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    param_1 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
    FUN_004134c0();
  }
  plVar1 = *(longlong **)(param_1 + 0x18);
  cVar2 = FUN_004113d0(plVar1,&PTR_FUN_00930cc0);
  if (cVar2 == '\0') {
    cVar2 = FUN_004113d0(plVar1,&PTR_FUN_00930f88);
    if (cVar2 == '\0') {
      cVar2 = FUN_004113d0(plVar1,&PTR_FUN_009314d8);
      if (cVar2 == '\0') {
        cVar2 = FUN_004113d0(plVar1,&PTR_FUN_009312f0);
        if (cVar2 == '\0') {
          cVar2 = FUN_004113d0(plVar1,&PTR_FUN_00931170);
          if (cVar2 == '\0') {
            FUN_00410f20(param_2);
            uVar3 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
            param_2 = FUN_004134c0(uVar3);
          }
        }
        else {
          param_2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
        }
      }
      else {
        param_2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
      }
    }
    else {
      param_2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
    }
  }
  else {
    param_2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
  }
  return param_2;
}

