/* Ghidra address: 00997030 */
/* Ghidra symbol: FUN_00997030 */


void FUN_00997030(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  cVar2 = FUN_004113d0(plVar1,&PTR_FUN_00930a28);
  if (cVar2 == '\0') {
    cVar2 = FUN_004113d0(plVar1,&PTR_FUN_0092acb8);
    if (cVar2 == '\0') {
      cVar2 = FUN_004113d0(plVar1,&PTR_FUN_0092ee58);
      if (cVar2 == '\0') {
        cVar2 = FUN_004113d0(plVar1,&PTR_FUN_0092f010);
        if (cVar2 == '\0') {
          cVar2 = FUN_004113d0(plVar1,&PTR_FUN_0092b0d8);
          if (cVar2 == '\0') {
            uVar3 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
            FUN_004134c0(uVar3);
          }
          else {
            (**(code **)(*plVar1 + 0x50))(plVar1,param_2,param_3,param_4);
          }
        }
        else {
          (**(code **)(*plVar1 + 0x40))(plVar1);
        }
      }
      else {
        (**(code **)(*plVar1 + 0x40))(plVar1);
      }
    }
    else {
      (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4);
    }
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1);
  }
  return;
}

