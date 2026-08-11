/* Ghidra address: 01bbe480 */
/* Ghidra symbol: FUN_01bbe480 */


void FUN_01bbe480(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  int local_f0;
  int local_ec;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [5];
  
  local_b0[0] = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_f0 = 0;
  do {
    (**(code **)(*plVar6 + 0x90))(plVar6);
    if (*(char *)(param_2 + 0x68 + (longlong)local_f0) != '\0') {
      FUN_01bbdd70(param_1,&local_70,local_f0,1);
      lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x48 + (longlong)local_f0 * 8) + 0x10);
      lVar7 = FUN_004aeac0(lVar2,0);
      lVar8 = FUN_004aeac0(lVar2,*(int *)(lVar2 + 0x10) + -1);
      dVar11 = (*(double *)(lVar8 + 0x18) - *(double *)(lVar7 + 0x18)) / 10.0;
      bVar3 = dVar11 < 0.0;
      local_ec = -1;
      if (-2 < *(int *)(lVar2 + 0x10)) {
        iVar9 = *(int *)(lVar2 + 0x10) + 2;
        do {
          if (local_ec == -1) {
            iVar5 = 0;
          }
          else {
            iVar5 = local_ec;
            if (local_ec == *(int *)(lVar2 + 0x10)) {
              iVar5 = *(int *)(lVar2 + 0x10) + -1;
            }
          }
          lVar7 = FUN_004aeac0(lVar2,iVar5);
          puVar1 = (undefined8 *)(lVar7 + 0x20 + (longlong)*(int *)(param_1 + 0x20) * 0x18);
          local_a0 = *puVar1;
          uStack_98 = puVar1[1];
          local_90 = puVar1[2];
          if ((int)local_90 != 0) {
            FUN_00416cd0(local_b0,3,L"Cannot export clamp/pullup/pulldown: ",
                         *(undefined8 *)(param_2 + 8),L"(wrong typ/min/max user selection)");
            FUN_01bbc400(param_1,local_b0[0]);
          }
          uVar4 = local_a0;
          dVar10 = *(double *)(lVar7 + 0x18);
          if (local_ec == -1) {
            dVar10 = dVar10 - dVar11;
          }
          else if (local_ec == *(int *)(lVar2 + 0x10)) {
            dVar10 = dVar10 + dVar11;
          }
          FUN_00b8fd60(&local_58,dVar10,*PTR_DAT_02005310,0,1);
          FUN_00b8fd60(&local_60,uVar4,*PTR_DAT_02005310,0,1);
          if (((!bVar3) && (local_ec < *(int *)(lVar2 + 0x10))) || ((bVar3 && (-1 < local_ec)))) {
            local_d0 = local_58;
            local_c8 = 0x11;
            local_c0 = local_60;
            local_b8 = 0x11;
            FUN_00442f70(local_50,L"+ %s, %s,",&local_d0);
          }
          else {
            local_d0 = local_58;
            local_c8 = 0x11;
            local_c0 = local_60;
            local_b8 = 0x11;
            FUN_00442f70(local_50,L"+ %s, %s",&local_d0);
          }
          (**(code **)(*plVar6 + 0x78))(plVar6,local_50[0]);
          local_ec = local_ec + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      if (bVar3) {
        FUN_01b23430(plVar6);
      }
      FUN_01bbe940(param_1,local_70,param_3,plVar6);
    }
    local_f0 = local_f0 + 1;
  } while (local_f0 != 4);
  FUN_00410f20(plVar6);
  FUN_00414480(local_b0);
  FUN_00414560(&local_70,5);
  return;
}

