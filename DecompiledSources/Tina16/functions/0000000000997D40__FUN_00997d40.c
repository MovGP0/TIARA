/* Ghidra address: 00997d40 */
/* Ghidra symbol: FUN_00997d40 */


longlong * FUN_00997d40(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_30 = auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x18);
  cVar2 = FUN_004113d0(plVar1,&PTR_FUN_0092b4c0);
  if ((cVar2 != '\0') &&
     (cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x20),&PTR_FUN_0092b6c8), cVar2 != '\0')) {
    local_20 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4);
    (**(code **)(*local_20 + 0xf0))(local_20,0);
    local_28 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x20) + 0x48))
                         (*(longlong **)(param_1 + 0x20),param_2,param_3,param_4);
    (**(code **)(*local_28 + 0x160))(local_28,local_20);
    FUN_00410f20(local_20);
    return local_28;
  }
  plVar1 = *(longlong **)(param_1 + 0x18);
  cVar2 = FUN_004113d0(plVar1,&PTR_FUN_0092b6c8);
  if ((cVar2 == '\0') || (*(longlong *)(param_1 + 0x20) != 0)) {
    uVar3 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
    FUN_004134c0(uVar3);
  }
  else {
    local_28 = (longlong *)(**(code **)(*plVar1 + 0x48))(plVar1,param_2,param_3,param_4);
    cVar2 = FUN_004113d0(local_28,&PTR_FUN_00926660);
    if (cVar2 != '\0') {
      (**(code **)(*local_28 + 0xf0))(local_28,0);
    }
  }
  return local_28;
}

