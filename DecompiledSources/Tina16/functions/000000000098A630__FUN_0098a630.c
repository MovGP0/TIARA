/* Ghidra address: 0098a630 */
/* Ghidra symbol: FUN_0098a630 */


undefined8 FUN_0098a630(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  int local_7c;
  undefined8 local_78;
  undefined *local_70;
  undefined1 local_68;
  undefined1 *local_60;
  double local_48;
  int local_3c;
  undefined8 local_38;
  longlong *local_30;
  undefined1 local_21;
  double local_20;
  
  local_60 = auStack_b8;
  local_78 = 0;
  puVar1 = auStack_b8;
  if (*(int *)(param_4 + 0x10) != 1) {
    local_70 = &DAT_0098a934;
    local_68 = 0x11;
    local_98 = 0;
    uVar4 = FUN_0044d530(&PTR_FUN_00901df0,1,L"Arguments mismatch error in %s().",&local_70);
    FUN_004134c0(uVar4);
    puVar1 = local_60;
  }
  local_60 = puVar1;
  if (*(int *)(param_4 + 0x10) == 0) {
    FUN_00594f90();
  }
  local_30 = (longlong *)
             (**(code **)(*(longlong *)**(undefined8 **)(param_4 + 8) + 0x40))
                       ((longlong *)**(undefined8 **)(param_4 + 8),param_1,param_2,param_3);
  cVar2 = FUN_004113d0(local_30,&PTR_FUN_00926660);
  if (cVar2 == '\0') {
    local_70 = &DAT_0098a934;
    local_68 = 0x11;
    local_98 = 0;
    uVar4 = FUN_0044d530(&PTR_FUN_00901df0,1,
                         L"Argument mismatch error in %s(): Expression does not evaluate to node-set."
                         ,&local_70);
    FUN_004134c0(uVar4);
  }
  local_48 = 0.0;
  local_21 = FUN_005274e0(0x3f);
  iVar3 = (**(code **)(*local_30 + 0x118))();
  local_7c = iVar3 + -1;
  local_3c = 0;
  if (-1 < local_7c) {
    do {
      local_7c = iVar3;
      plVar5 = (longlong *)(**(code **)(*local_30 + 0x110))(local_30,local_3c);
      (**(code **)(*plVar5 + 0x198))(plVar5,&local_78);
      local_20 = (double)FUN_00948a60(local_78);
      local_48 = local_48 + local_20;
      local_3c = local_3c + 1;
      local_7c = local_7c + -1;
      iVar3 = local_7c;
    } while (local_7c != 0);
  }
  FUN_005274e0(local_21);
  local_38 = FUN_00990420(&PTR_FUN_00927180,1,local_48);
  FUN_00410f20(local_30);
  FUN_00414520(&local_78);
  return local_38;
}

