/* Ghidra address: 01336970 */
/* Ghidra symbol: FUN_01336970 */


void FUN_01336970(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  double local_58;
  double local_50;
  char local_42;
  char local_41;
  int local_40;
  int local_3c;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_60 = auStack_d8;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_005b85d0(&local_68,&LAB_01337104,(longlong)*(char *)(param_1 + 0x728));
  FUN_00416ba0(&local_38,L"##0.",local_68);
  local_3c = 0;
  local_40 = *(int *)(*(longlong *)(param_1 + 0x6c0) + 0x4c0);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x6c0) + 0x4e0) + -1;
  if (local_40 <= iVar4) {
    iVar4 = (iVar4 - local_40) + 1;
    do {
      plVar3 = (longlong *)FUN_0084e3c0(*(undefined8 *)(param_1 + 0x6c0),local_40);
      (**(code **)(*plVar3 + 0x90))(plVar3);
      local_40 = local_40 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_42 = '\0';
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x28))();
  local_a4 = iVar4 + -1;
  local_40 = 0;
  if (-1 < local_a4) {
    do {
      local_a4 = iVar4;
      local_30 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0x700) + 0x30))
                           (*(longlong **)(param_1 + 0x700),local_40);
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                        (*(longlong **)(param_1 + 0x6f0));
      if ((cVar2 == '\0') &&
         ((cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                             (*(longlong **)(param_1 + 0x6f0)), cVar2 != '\0' ||
          (*(char *)(*local_30 + 0x540) == '\0')))) {
        local_41 = '\0';
      }
      else {
        local_41 = '\x01';
      }
      if ((local_42 == '\0') && (*(char *)(*local_30 + 0x540) == '\0')) {
        local_42 = '\0';
      }
      else {
        local_42 = '\x01';
      }
      if (local_41 != '\0') {
        lVar1 = *(longlong *)(param_1 + 0x6c0);
        (**(code **)(*(longlong *)*local_30 + 0x288))((longlong *)*local_30,&local_70);
        FUN_0084e3e0(lVar1,0,*(int *)(lVar1 + 0x4c0) + local_3c,local_70);
        lVar1 = *(longlong *)(param_1 + 0x6c0);
        (**(code **)(*DAT_02107868 + 0x18))
                  (DAT_02107868,&local_78,*(undefined1 *)(*local_30 + 0x540));
        FUN_0084e3e0(lVar1,1,*(int *)(lVar1 + 0x4c0) + local_3c,local_78);
        lVar1 = *(longlong *)(param_1 + 0x6c0);
        local_b8 = 1;
        FUN_00b8fd60(&local_80,local_30[3],*(undefined1 *)(param_1 + 0x728),0);
        FUN_0084e3e0(lVar1,2,*(int *)(lVar1 + 0x4c0) + local_3c,local_80);
        if (*(double *)(param_1 + 0x718) == 0.0) {
          FUN_0084e3e0(*(longlong *)(param_1 + 0x6c0),3,
                       *(int *)(*(longlong *)(param_1 + 0x6c0) + 0x4c0) + local_3c,0);
        }
        else {
          FUN_00414480(&local_20);
          local_50 = ((double)local_30[3] / *(double *)(param_1 + 0x718)) * 100.0;
          FUN_004485a0(&local_20,local_38,local_50,PTR_DAT_02004830);
          FUN_0084e3e0(*(longlong *)(param_1 + 0x6c0),3,
                       *(int *)(*(longlong *)(param_1 + 0x6c0) + 0x4c0) + local_3c,local_20);
          FUN_00414480(&local_20);
        }
        if ((char)local_30[4] == '\x01') {
          lVar1 = *(longlong *)(param_1 + 0x6c0);
          FUN_0041ddd0(&local_88,&PTR_PTR_01335478);
          FUN_0084e3e0(lVar1,4,*(int *)(lVar1 + 0x4c0) + local_3c,local_88);
        }
        else if ((char)local_30[4] == '\0') {
          lVar1 = *(longlong *)(param_1 + 0x6c0);
          FUN_0041ddd0(&local_90,&PTR_PTR_01335488);
          FUN_0084e3e0(lVar1,4,*(int *)(lVar1 + 0x4c0) + local_3c,local_90);
        }
        else {
          lVar1 = *(longlong *)(param_1 + 0x6c0);
          FUN_0041ddd0(&local_98,&PTR_PTR_01335498);
          FUN_0084e3e0(lVar1,4,*(int *)(lVar1 + 0x4c0) + local_3c,local_98);
        }
        lVar1 = *(longlong *)(param_1 + 0x6c0);
        local_b8 = 1;
        FUN_00b8fd60(&local_a0,local_30[2],*(undefined1 *)(param_1 + 0x728),0);
        FUN_0084e3e0(lVar1,5,*(int *)(lVar1 + 0x4c0) + local_3c,local_a0);
        if ((double)local_30[2] == 0.0) {
          FUN_0084e3e0(*(longlong *)(param_1 + 0x6c0),6,
                       *(int *)(*(longlong *)(param_1 + 0x6c0) + 0x4c0) + local_3c,0);
        }
        else {
          FUN_00414480(&local_28);
          local_58 = (1.0 - (double)local_30[3] / (double)local_30[2]) * 100.0;
          FUN_004485a0(&local_28,local_38,local_58,PTR_DAT_02004830);
          FUN_0084e3e0(*(longlong *)(param_1 + 0x6c0),6,
                       *(int *)(*(longlong *)(param_1 + 0x6c0) + 0x4c0) + local_3c,local_28);
          FUN_00414480(&local_28);
        }
        local_3c = local_3c + 1;
      }
      local_40 = local_40 + 1;
      local_a4 = local_a4 + -1;
      iVar4 = local_a4;
    } while (local_a4 != 0);
  }
  FUN_00848a70(*(longlong *)(param_1 + 0x6c0),
               *(int *)(*(longlong *)(param_1 + 0x6c0) + 0x4c0) + local_3c);
  FUN_01337730(param_1,1,0);
  **(undefined1 **)(param_1 + 0x708) = 1;
  *(undefined4 *)(param_1 + 0x710) = 0;
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f0),local_42);
  FUN_00414560(&local_a0,8);
  FUN_00414480(&local_38);
  FUN_00414560(&local_28,2);
  return;
}

