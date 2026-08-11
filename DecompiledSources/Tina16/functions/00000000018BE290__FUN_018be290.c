/* Ghidra address: 018be290 */
/* Ghidra symbol: FUN_018be290 */


undefined1 FUN_018be290(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 auStack_108 [32];
  double local_e8;
  int *local_e0;
  int *local_d8;
  char *local_d0;
  int local_c8;
  int local_c4;
  undefined1 *local_c0;
  byte local_ab;
  char local_aa;
  char local_a9;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  int *local_78;
  int *local_70;
  double local_68;
  double local_60;
  int local_58;
  int local_54 [5];
  undefined1 local_3d;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  local_c0 = auStack_108;
  local_3d = 1;
  iVar5 = FUN_018bdfc0(*(undefined8 *)(param_1 + 0x70),param_2);
  if ((((iVar5 != -1) &&
       (puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x70) + 0xd0),
       iVar6 = (**(code **)*puVar2)(puVar2), iVar5 < iVar6)) &&
      ((*(char *)(*(longlong *)
                   (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x20) +
                   0x228) + 0x30) != '\x01' || ((iVar5 + 1) % 2 != 0)))) &&
     ((*(char *)(*(longlong *)
                  (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x20) + 0x228
                  ) + 0x30) != '\x02' || ((iVar5 + 1) % 2 != 1)))) {
    if (*(char *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x20) + 0x288)
        == '\0') {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0xd0);
      uVar10 = (**(code **)(*plVar3 + 8))(plVar3,iVar5);
      *(undefined8 *)(param_1 + 0x30) = uVar10;
      lVar4 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x20) + 0x228);
      if (*(char *)(lVar4 + 0xc) == '\0') {
        local_54[3] = *(undefined4 *)(lVar4 + 8);
        *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x38) = 1;
      }
      else {
        local_54[3] = 1;
        *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x38) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x98);
      }
      lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x20);
      if (*(longlong *)(lVar4 + 1000) != 0) {
        (**(code **)(lVar4 + 1000))
                  (*(undefined8 *)(lVar4 + 0x3f0),*(undefined8 *)(param_1 + 0x30),
                   *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x38));
      }
      if (iVar5 == 0) {
        local_54[4] = *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x170);
      }
      else {
        local_54[4] = *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x174);
      }
      local_e8 = *(double *)(*(longlong *)(param_1 + 0x70) + 0x88);
      local_e0 = local_54;
      local_d8 = &local_58;
      local_d0 = &local_aa;
      FUN_018be1e0(*(undefined8 *)(param_1 + 0x70),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x238),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x228),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x90));
      local_a0 = 0.0;
      local_a8 = 0.0;
      if (1 < local_54[0]) {
        local_a0 = *(double *)(*(longlong *)(param_1 + 0x70) + 0x80);
      }
      if (1 < local_58) {
        local_a8 = *(double *)(*(longlong *)(param_1 + 0x70) + 0x80);
      }
      if (local_aa != '\0') {
        FUN_018be280(auStack_108,&local_a0,&local_a8);
      }
      local_e8 = *(double *)(*(longlong *)(param_1 + 0x70) + 0x88) - local_a8;
      local_e0 = local_54;
      local_d8 = &local_58;
      local_d0 = &local_aa;
      FUN_018be1e0(*(undefined8 *)(param_1 + 0x70),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x238),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x228),
                   *(double *)(*(longlong *)(param_1 + 0x70) + 0x90) - local_a0);
      local_a9 = local_aa != '\0';
      local_ab = *(byte *)(*(longlong *)(param_1 + 0x30) + 0x1a0);
      if (*(char *)(*(longlong *)(param_1 + 0x70) + 0x7f) != '\0') {
        local_ab = *(byte *)(*(longlong *)(param_1 + 0x70) + 0x7f);
      }
      if ((*(char *)(param_1 + 0x2f) == '\0') ||
         (local_a9 != *(char *)(*(longlong *)(param_1 + 0x70) + 0x7e))) {
        local_e8 = (double)CONCAT71(local_e8._1_7_,local_a9);
        local_e0 = (int *)CONCAT44(local_e0._4_4_,local_54[4]);
        local_d8 = (int *)CONCAT44(local_d8._4_4_,(uint)local_ab);
        local_d0 = (char *)CONCAT44(local_d0._4_4_,local_54[3]);
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x58))
                  (*(longlong **)(param_1 + 0x38),
                   *(undefined4 *)
                    (*(longlong *)
                      (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x20) +
                      0x228) + 0x2c),*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x90),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x88));
      }
      if (*(char *)(param_1 + 0x2f) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))(*(longlong **)(param_1 + 0x38));
      }
      if (local_a9 == '\0') {
        local_60 = *(double *)(*(longlong *)(param_1 + 0x70) + 0x90) *
                   ((double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x40) /
                   (double)0x4039666666666666);
        local_68 = *(double *)(*(longlong *)(param_1 + 0x70) + 0x88) *
                   ((double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x44) /
                   (double)0x4039666666666666);
      }
      else {
        local_60 = *(double *)(*(longlong *)(param_1 + 0x70) + 0x88) *
                   ((double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x40) /
                   (double)0x4039666666666666);
        local_68 = *(double *)(*(longlong *)(param_1 + 0x70) + 0x90) *
                   ((double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x44) /
                   (double)0x4039666666666666);
      }
      local_98 = 0.0;
      local_78 = (int *)((-*(double *)(*(longlong *)(param_1 + 0x38) + 0x90) *
                         (double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x44)) /
                        (double)0x4039666666666666);
      local_a8 = 0.0;
      local_c8 = local_58;
      local_54[1] = 1;
      if (0 < local_58) {
        do {
          local_90 = 0.0;
          local_70 = (int *)((-*(double *)(*(longlong *)(param_1 + 0x38) + 0x88) *
                             (double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x40)) /
                            (double)0x4039666666666666);
          local_a0 = 0.0;
          local_c4 = local_54[0];
          local_54[2] = 1;
          if (0 < local_54[0]) {
            do {
              uVar10 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18));
              local_3c = thunk_FUN_03b57162(uVar10);
              local_30 = thunk_FUN_03976db5(0,0,10000,10000);
              uVar10 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18));
              thunk_FUN_0411a732(uVar10,local_30);
              uVar7 = FUN_0040c770(local_a0 +
                                   (*(double *)(*(longlong *)(param_1 + 0x38) + 0x88) *
                                   (double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x40)) /
                                   (double)0x4039666666666666);
              uVar8 = FUN_0040c770(local_a8 +
                                   (*(double *)(*(longlong *)(param_1 + 0x38) + 0x90) *
                                   (double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x44)) /
                                   (double)0x4039666666666666);
              iVar6 = FUN_0040c770((*(double *)(*(longlong *)(param_1 + 0x30) + 0x238) *
                                    *(double *)PTR_DAT_02002c30 *
                                   (double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x40)) / 96.0 -
                                   (*(double *)(*(longlong *)(param_1 + 0x38) + 0x98) *
                                   (double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x40)) /
                                   (double)0x4039666666666666);
              iVar9 = FUN_0040c770((*(double *)(*(longlong *)(param_1 + 0x30) + 0x228) *
                                    *(double *)PTR_DAT_02002c30 *
                                   (double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x44)) / 96.0 -
                                   (*(double *)(*(longlong *)(param_1 + 0x38) + 0xa0) *
                                   (double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x44)) /
                                   (double)0x4039666666666666);
              local_38 = thunk_FUN_03976db5(uVar7,uVar8,iVar6 + -1,iVar9 + -1);
              uVar10 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18));
              thunk_FUN_039bba01(uVar10,local_38);
              uVar10 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18));
              thunk_FUN_03c9551a(uVar10);
              (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))(*(longlong **)(param_1 + 0x38));
              plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0xd0);
              local_e8 = (double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x44) / 96.0;
              local_e0 = local_70;
              local_d8 = local_78;
              local_d0 = (char *)((ulonglong)local_d0 & 0xffffffffffffff00);
              (**(code **)(*plVar3 + 0x118))
                        (plVar3,iVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18),
                         (double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x40) / 96.0);
              (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))(*(longlong **)(param_1 + 0x38));
              uVar10 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18));
              thunk_FUN_039bba01(uVar10,local_30);
              thunk_FUN_0416f828(local_38);
              thunk_FUN_0416f828(local_30);
              uVar10 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18));
              thunk_FUN_0402759f(uVar10);
              local_a0 = (*(double *)(*(longlong *)(param_1 + 0x70) + 0x80) *
                         (double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x40)) /
                         (double)0x4039666666666666;
              local_80 = (*(double *)(*(longlong *)(param_1 + 0x38) + 0x88) *
                         (double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x40)) /
                         (double)0x4039666666666666;
              local_90 = (local_90 +
                         ((local_60 - local_80) -
                         (*(double *)(*(longlong *)(param_1 + 0x38) + 0x98) *
                         (double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x40)) /
                         (double)0x4039666666666666)) - local_a0;
              local_70 = (int *)-local_90;
              local_c4 = local_c4 + -1;
            } while (local_c4 != 0);
          }
          local_88 = (*(double *)(*(longlong *)(param_1 + 0x38) + 0x90) *
                     (double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x44)) /
                     (double)0x4039666666666666;
          local_a8 = (*(double *)(*(longlong *)(param_1 + 0x70) + 0x80) *
                     (double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x44)) /
                     (double)0x4039666666666666;
          local_98 = (local_98 +
                     ((local_68 - local_88) -
                     (*(double *)(*(longlong *)(param_1 + 0x38) + 0xa0) *
                     (double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x44)) /
                     (double)0x4039666666666666)) - local_a8;
          local_78 = (int *)-local_98;
          local_c8 = local_c8 + -1;
        } while (local_c8 != 0);
      }
      plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x20);
      (**(code **)(*plVar3 + 0x260))(plVar3,2,iVar5 + 1);
      if (*(char *)(*(longlong *)
                     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x20) +
                     0x1a8) + 0x20) == '\0') {
        FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      }
      *(undefined1 *)(param_1 + 0x2f) = 1;
      piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0x78);
      *piVar1 = *piVar1 + 1;
      *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x7e) =
           *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x1b1);
      FUN_018b7df0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xd0));
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))(*(longlong **)(param_1 + 0x38));
      local_3d = 0;
    }
  }
  return local_3d;
}

