/* Ghidra address: 00996c90 */
/* Ghidra symbol: FUN_00996c90 */


longlong * FUN_00996c90(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auStack_78 [36];
  int local_54;
  undefined1 *local_50;
  int local_44;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_50 = auStack_78;
  puVar2 = auStack_78;
  if (param_2 == (longlong *)0x0) {
    uVar5 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
    FUN_004134c0(uVar5);
    puVar2 = local_50;
  }
  local_50 = puVar2;
  cVar3 = FUN_004113d0(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_0092acb8);
  if (cVar3 == '\0') {
    FUN_00410f20(param_2);
    uVar5 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
    FUN_004134c0(uVar5);
  }
  local_20 = (longlong *)FUN_0098cda0(&PTR_FUN_00926660,1);
  uVar4 = (**(code **)(*param_2 + 0xe8))(param_2);
  (**(code **)(*local_20 + 0xf0))(local_20,uVar4);
  local_54 = (**(code **)(*param_2 + 0x118))(param_2);
  local_44 = 1;
  if (0 < local_54) {
    do {
      local_28 = (**(code **)(*param_2 + 0x110))(param_2,local_44 + -1);
      uVar4 = (**(code **)(*param_2 + 0x118))(param_2);
      local_38 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))
                           (*(longlong **)(param_1 + 0x18),local_28,local_44,uVar4);
      cVar3 = FUN_004113d0(local_38,&PTR_FUN_00927180);
      if (cVar3 == '\0') {
        local_40 = (longlong *)FUN_00948c00(local_38);
        cVar3 = (**(code **)(*local_40 + 0xf8))(local_40);
        if (cVar3 != '\0') {
          (**(code **)(*local_20 + 0x140))(local_20,local_28);
        }
        FUN_00410f20(local_40);
      }
      else {
        dVar6 = (double)(**(code **)(*local_38 + 0x100))(local_38);
        if (dVar6 == (double)local_44) {
          (**(code **)(*local_20 + 0x140))(local_20,local_28);
        }
        FUN_00410f20(local_38);
      }
      local_44 = local_44 + 1;
      local_54 = local_54 + -1;
    } while (local_54 != 0);
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    cVar3 = FUN_004113d0(plVar1,&PTR_FUN_0092aae0);
    if (cVar3 == '\0') {
      FUN_00410f20(local_20);
      uVar5 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
      FUN_004134c0(uVar5);
    }
    else {
      local_30 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1,local_20);
      local_20 = local_30;
    }
  }
  FUN_00410f20(param_2);
  return local_20;
}

