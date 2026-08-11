/* Ghidra address: 0099ba00 */
/* Ghidra symbol: FUN_0099ba00 */


undefined8 FUN_0099ba00(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  undefined1 local_39;
  
  local_60 = auStack_88;
  plVar1 = *(longlong **)(param_1 + 0x18);
  cVar2 = FUN_004113d0(plVar1,&PTR_FUN_0092d680);
  if ((cVar2 != '\0') &&
     (cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x20),&PTR_FUN_0092ded8), cVar2 != '\0')) {
    local_48 = (longlong *)0x0;
    uVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4);
    local_50 = (longlong *)FUN_00948cc0(uVar3);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))
                      (*(longlong **)(param_1 + 0x20),param_2,param_3,param_4);
    local_48 = (longlong *)FUN_00948cc0(uVar3);
    local_39 = FUN_005274e0(0x3f);
    dVar5 = (double)(**(code **)(*local_50 + 0x100))(local_50);
    dVar6 = (double)(**(code **)(*local_50 + 0x100))(local_50);
    dVar7 = (double)(**(code **)(*local_48 + 0x100))(local_48);
    lVar4 = FUN_0040c840(dVar6 / dVar7);
    dVar6 = (double)(**(code **)(*local_48 + 0x100))(local_48);
    local_58 = FUN_00990420(&PTR_FUN_00927180,1,dVar5 - (double)lVar4 * dVar6);
    FUN_005274e0(local_39);
    FUN_00410f20(local_48);
    FUN_00410f20(local_50);
    return local_58;
  }
  cVar2 = FUN_004113d0(plVar1,&PTR_FUN_0092ded8);
  if (cVar2 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
    FUN_004134c0(uVar3);
  }
  else {
    local_58 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4);
  }
  return local_58;
}

