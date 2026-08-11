/* Ghidra address: 013361e0 */
/* Ghidra symbol: FUN_013361e0 */


void FUN_013361e0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  int local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  double local_78;
  double local_70;
  int local_60;
  char local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined2 local_32;
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_80 = auStack_118;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_20[0] = 0;
  local_28 = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0xa8))(*(longlong **)(param_1 + 0x6e8));
  if (cVar1 != '\0') {
    local_32 = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
    *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
    FUN_005b85d0(&local_88,&DAT_01336930,(longlong)*(char *)(param_1 + 0x728));
    FUN_00416ba0(&local_50,L"##0.",local_88);
    local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x28))();
    local_cc = iVar2 + -1;
    local_60 = 0;
    if (-1 < local_cc) {
      do {
        local_cc = iVar2;
        local_40 = (longlong *)
                   (**(code **)(**(longlong **)(param_1 + 0x700) + 0x30))
                             (*(longlong **)(param_1 + 0x700),local_60);
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                          (*(longlong **)(param_1 + 0x6f0));
        if ((cVar1 == '\0') &&
           ((cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                               (*(longlong **)(param_1 + 0x6f0)), cVar1 != '\0' ||
            (*(char *)(*local_40 + 0x540) == '\0')))) {
          local_59 = '\0';
        }
        else {
          local_59 = '\x01';
        }
        if (local_59 != '\0') {
          (**(code **)(*(longlong *)*local_40 + 0x288))((longlong *)*local_40,&local_90);
          (**(code **)(*DAT_02107868 + 0x18))
                    (DAT_02107868,&local_98,*(undefined1 *)(*local_40 + 0x540));
          local_f8 = CONCAT71(local_f8._1_7_,1);
          FUN_00b8fd60(&local_a0,local_40[3],*(undefined1 *)(param_1 + 0x728),0);
          local_f8 = local_98;
          local_f0 = &LAB_01336940;
          local_e8 = local_a0;
          FUN_00416cd0(&local_48,5,local_90,&LAB_01336940);
          if (*(double *)(param_1 + 0x718) == 0.0) {
            FUN_00416ad0(&local_48,&LAB_01336940);
          }
          else {
            FUN_00414480(local_20);
            local_70 = ((double)local_40[3] / *(double *)(param_1 + 0x718)) * 100.0;
            FUN_004485a0(local_20,local_50,local_70,PTR_DAT_02004830);
            local_f8 = local_20[0];
            FUN_00416cd0(&local_48,3,local_48,&LAB_01336940);
            FUN_00414480(local_20);
          }
          if ((char)local_40[4] == '\x01') {
            FUN_0041ddd0(&local_a8,&PTR_PTR_01335478);
            local_f8 = local_a8;
            FUN_00416cd0(&local_48,3,local_48,&LAB_01336940);
          }
          else if ((char)local_40[4] == '\0') {
            FUN_0041ddd0(&local_b0,&PTR_PTR_01335488);
            local_f8 = local_b0;
            FUN_00416cd0(&local_48,3,local_48,&LAB_01336940);
          }
          else {
            FUN_0041ddd0(&local_b8,&PTR_PTR_01335498);
            local_f8 = local_b8;
            FUN_00416cd0(&local_48,3,local_48,&LAB_01336940);
          }
          local_f8 = CONCAT71(local_f8._1_7_,1);
          FUN_00b8fd60(&local_c0,local_40[2],*(undefined1 *)(param_1 + 0x728),0);
          local_f8 = local_c0;
          FUN_00416cd0(&local_48,3,local_48);
          if ((double)local_40[2] == 0.0) {
            FUN_00416ad0(&local_48,&LAB_01336940);
          }
          else {
            FUN_00414480(&local_28);
            local_78 = (1.0 - (double)local_40[3] / (double)local_40[2]) * 100.0;
            FUN_004485a0(&local_28,local_50,local_78,PTR_DAT_02004830);
            local_f8 = local_28;
            FUN_00416cd0(&local_48,3,local_48);
            FUN_00414480(&local_28);
          }
          (**(code **)(*local_30 + 0x78))(local_30,local_48);
        }
        local_60 = local_60 + 1;
        local_cc = local_cc + -1;
        iVar2 = local_cc;
      } while (local_cc != 0);
    }
    FUN_00724270(*(undefined8 *)(param_1 + 0x6e8),&local_c8);
    (**(code **)(*local_30 + 0x100))(local_30,local_c8);
    FUN_00410f20(local_30);
    *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = local_32;
  }
  FUN_00414480(&local_c8);
  FUN_00414560(&local_c0,8);
  FUN_00414560(&local_58,3);
  FUN_00414560(&local_28,2);
  return;
}

