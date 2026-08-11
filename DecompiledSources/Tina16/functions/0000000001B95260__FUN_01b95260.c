/* Ghidra address: 01b95260 */
/* Ghidra symbol: FUN_01b95260 */


void FUN_01b95260(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  short *local_48;
  char local_3d;
  int local_3c;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_80 = auStack_108;
  local_d8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_48 = (short *)0x0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  FUN_006df690(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550));
  local_3d = '\0';
  local_38 = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_30 = 0;
  iVar2 = (**(code **)(*param_2 + 0x28))();
  local_3c = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,&local_88,local_3c);
      FUN_0043ea00(&local_48,local_88);
      FUN_00414b50(&local_50,local_48);
      if ((local_48 != (short *)0x0) && (*local_48 != 0x3b)) {
        FUN_00416dc0(&local_90,local_48,1,2);
        iVar3 = FUN_00416db0(local_90,&DAT_01b95d6c);
        if (iVar3 == 0) {
          FUN_01b950d0(&local_68,local_48);
          iVar3 = FUN_004170c0(L"id_group",local_68,1);
          if (iVar3 < 1) {
            FUN_00414b50(&local_70,local_68);
          }
          else {
            FUN_00c848f0(*(undefined8 *)(*(longlong *)PTR_DAT_02002c40 + 0x30),&local_70,local_68,
                         *(undefined8 *)PTR_DAT_02001f18);
          }
          if (local_70 != 0) {
            iVar3 = FUN_004170c0(&DAT_01b95da0,local_48,1);
            FUN_00416e20(&local_48,3,iVar3 + -3);
            FUN_00416ea0(local_70,&local_48,3);
          }
          uVar5 = FUN_006df4b0(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550));
          local_20 = (longlong *)FUN_01b95170(uVar5,local_70);
          if (local_20 != (longlong *)0x0) {
            FUN_006de140(local_20);
          }
          local_3d = '\x01';
          uVar5 = FUN_01b95080(local_48,local_50,0);
          local_28 = (longlong *)
                     FUN_006def30(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550),local_28,
                                  local_70,uVar5);
          FUN_006dcbd0(local_28,0xffffffff);
          FUN_006dcca0(local_28,0xffffffff);
          if (local_38 == (longlong *)0x0) {
            local_38 = local_28;
          }
        }
        else {
          FUN_00416dc0(&local_98,local_48,1,2);
          iVar3 = FUN_00416db0(local_98,&DAT_01b95db0);
          if (iVar3 == 0) {
            local_3d = '\x02';
            FUN_01b950d0(&local_68,local_48);
            iVar3 = FUN_004170c0(L"id_group",local_68,1);
            if (iVar3 < 1) {
              FUN_00414b50(&local_70,local_68);
            }
            else {
              FUN_00c848f0(*(undefined8 *)(*(longlong *)PTR_DAT_02002c40 + 0x30),&local_70,local_68,
                           *(undefined8 *)PTR_DAT_02001f18);
            }
            if (local_70 != 0) {
              iVar3 = FUN_004170c0(&DAT_01b95da0,local_48,1);
              FUN_00416e20(&local_48,3,iVar3 + -3);
              FUN_00416ea0(local_70,&local_48,3);
            }
            uVar5 = FUN_01b95080(local_48,local_50,0);
            local_30 = FUN_006dee70(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550),local_28
                                    ,local_70,uVar5);
            FUN_006dcbd0(local_30,0xffffffff);
            FUN_006dcca0(local_30,0xffffffff);
          }
          else {
            FUN_00416dc0(&local_a0,local_48,1,2);
            iVar3 = FUN_00416db0(local_a0,&DAT_01b95dc4);
            if (iVar3 == 0) {
              local_3d = '\x03';
              if (*(char *)(param_1 + 0x8ab) == '\0') {
                (**(code **)(**(longlong **)(param_1 + 0x888) + 0x78))
                          (*(longlong **)(param_1 + 0x888),0);
                (**(code **)(**(longlong **)(param_1 + 0x888) + 0x78))
                          (*(longlong **)(param_1 + 0x888),local_48);
              }
            }
            else {
              local_20 = (longlong *)0x0;
              if (local_3d == '\x01') {
                if (*local_48 == 0x25) {
                  local_78 = 0;
                  if (local_48 != (short *)0x0) {
                    local_78 = *(undefined4 *)(local_48 + -2);
                  }
                  FUN_00416dc0(&local_d0,local_48,2,local_78);
                  FUN_0043ea00(&local_c8,local_d0);
                  FUN_00b928f0(&local_c0,local_c8,0);
                  FUN_00441920(&local_b8,local_c0);
                  local_b0 = local_b8;
                  local_a8 = 0x11;
                  FUN_00442f70(&local_60,L"Include file: %s",&local_b0,0);
                  uVar5 = FUN_01b95080(local_48,local_50,0);
                  local_20 = (longlong *)
                             FUN_006dee70(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550),
                                          local_28,local_60,uVar5);
                  FUN_006dcbd0(local_20,0xffffffff);
                  FUN_006dcca0(local_20,0xffffffff);
                }
                else {
                  FUN_01b1cbc0(&local_58,local_48,1);
                  iVar3 = FUN_004170c0(L"id_component",local_58,1);
                  if (iVar3 < 1) {
                    FUN_00414b50(&local_60,local_58);
                  }
                  else {
                    local_e8 = *(undefined8 *)PTR_DAT_02001f18;
                    FUN_00c84070(*(undefined8 *)(*(longlong *)PTR_DAT_02002c40 + 0x30),&local_60,
                                 local_58,local_68);
                  }
                  if (local_60 != 0) {
                    iVar3 = FUN_004170c0(&LAB_01b95e30,local_48,1);
                    FUN_00416e20(&local_48,1,iVar3 + -1);
                    FUN_00416ea0(local_60,&local_48,1);
                  }
                  uVar5 = FUN_01b95080(local_48,local_50,0);
                  local_20 = (longlong *)
                             FUN_006dee70(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550),
                                          local_28,local_60,uVar5);
                }
              }
              else if (local_3d == '\x02') {
                FUN_01b1cbc0(&local_58,local_48,1);
                iVar3 = FUN_004170c0(L"id_component",local_58,1);
                if (iVar3 < 1) {
                  FUN_00414b50(&local_60,local_58);
                }
                else {
                  local_e8 = *(undefined8 *)PTR_DAT_02001f18;
                  FUN_00c84070(*(undefined8 *)(*(longlong *)PTR_DAT_02002c40 + 0x30),&local_60,
                               local_58,local_68);
                }
                if (local_60 != 0) {
                  iVar3 = FUN_004170c0(&LAB_01b95e30,local_48,1);
                  FUN_00416e20(&local_48,1,iVar3 + -1);
                  FUN_00416ea0(local_60,&local_48,1);
                }
                uVar5 = FUN_01b95080(local_48,local_50,0);
                local_20 = (longlong *)
                           FUN_006dee70(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550),
                                        local_30,local_60,uVar5);
              }
              else if ((local_3d == '\x03') && (*(char *)(param_1 + 0x8ab) == '\0')) {
                (**(code **)(**(longlong **)(param_1 + 0x888) + 0x78))
                          (*(longlong **)(param_1 + 0x888),local_48);
              }
              if (local_20 != (longlong *)0x0) {
                FUN_01b1cbc0(&local_d8,local_48,5);
                uVar4 = FUN_00c85dd0(*(undefined8 *)PTR_DAT_02002c40,local_d8,*PTR_DAT_02002480,0);
                FUN_006dcbd0(local_20,uVar4);
                if (-1 < (int)local_20[5]) {
                  FUN_006dcca0(local_20,(int)local_20[5]);
                }
              }
            }
          }
        }
      }
      local_3c = local_3c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (local_38 != (longlong *)0x0) {
    local_28 = (longlong *)FUN_006df4b0(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550));
    while ((cVar1 = FUN_01b95130(local_28), cVar1 != '\0' && (local_28 != local_38))) {
      local_20 = (longlong *)FUN_006dd3e0(local_28);
      (**(code **)(*local_28 + 0x20))(local_28,local_38,0);
      local_28 = local_20;
    }
  }
  FUN_006df710(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550));
  FUN_006e23c0(*(undefined8 *)(param_1 + 0x7e8));
  *(undefined1 *)(param_1 + 0x8ab) = 1;
  FUN_00414560(&local_d8,5);
  FUN_00414560(&local_a0,4);
  FUN_00414560(&local_70,6);
  return;
}

