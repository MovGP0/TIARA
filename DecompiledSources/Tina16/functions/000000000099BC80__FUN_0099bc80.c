/* Ghidra address: 0099bc80 */
/* Ghidra symbol: FUN_0099bc80 */


undefined8 FUN_0099bc80(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  longlong *local_28;
  undefined1 local_19;
  
  local_40 = auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x18);
  cVar2 = FUN_004113d0(plVar1,&PTR_FUN_0092f658);
  if ((cVar2 != '\0') &&
     (cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x20),&PTR_FUN_0092ded8), cVar2 != '\0')) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))
                      (*(longlong **)(param_1 + 0x20),param_2,param_3,param_4);
    local_28 = (longlong *)FUN_00948cc0(uVar3);
    local_19 = FUN_005274e0(0x3f);
    uVar4 = (**(code **)(*local_28 + 0x100))(local_28);
    local_30 = FUN_00990420(&PTR_FUN_00927180,1,uVar4 ^ 0x8000000000000000);
    FUN_005274e0(local_19);
    FUN_00410f20(local_28);
    return local_30;
  }
  cVar2 = FUN_004113d0(plVar1,&PTR_FUN_0092b4c0);
  if (cVar2 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
    FUN_004134c0(uVar3);
  }
  else {
    local_30 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4);
  }
  return local_30;
}

