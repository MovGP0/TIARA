/* Ghidra address: 0099b5a0 */
/* Ghidra symbol: FUN_0099b5a0 */


undefined8 FUN_0099b5a0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  undefined1 local_29;
  
  local_50 = auStack_78;
  plVar1 = *(longlong **)(param_1 + 0x18);
  cVar2 = FUN_004113d0(plVar1,&PTR_FUN_0092d680);
  if ((cVar2 != '\0') &&
     (cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x20),&PTR_FUN_0092ded8), cVar2 != '\0')) {
    local_38 = (longlong *)0x0;
    uVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4);
    local_40 = (longlong *)FUN_00948cc0(uVar3);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))
                      (*(longlong **)(param_1 + 0x20),param_2,param_3,param_4);
    local_38 = (longlong *)FUN_00948cc0(uVar3);
    local_29 = FUN_005274e0(0x3f);
    dVar4 = (double)(**(code **)(*local_40 + 0x100))(local_40);
    dVar5 = (double)(**(code **)(*local_38 + 0x100))(local_38);
    local_48 = FUN_00990420(&PTR_FUN_00927180,1,dVar4 * dVar5);
    FUN_005274e0(local_29);
    FUN_00410f20(local_38);
    FUN_00410f20(local_40);
    return local_48;
  }
  cVar2 = FUN_004113d0(plVar1,&PTR_FUN_0092ded8);
  if (cVar2 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
    FUN_004134c0(uVar3);
  }
  else {
    local_48 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4);
  }
  return local_48;
}

