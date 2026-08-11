/* Ghidra address: 0179ee00 */
/* Ghidra symbol: FUN_0179ee00 */


void FUN_0179ee00(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  longlong local_128;
  int local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_60;
  longlong *local_58;
  int local_50;
  int local_4c;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_b0 = auStack_158;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_30[0] = 0;
  local_58 = (longlong *)
             FUN_017880a0(&PTR_FUN_01785938,1,*(undefined8 *)PTR_DAT_02004030,
                          *(undefined8 *)(param_1 + 0xcc8));
  local_38 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_60 = local_58[0xda];
  local_50 = 1;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
  local_11c = iVar5 + -1;
  local_4c = 0;
  if (-1 < local_11c) {
    do {
      local_11c = iVar5;
      local_48 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_4c);
      cVar2 = FUN_004113d0(local_48,&PTR_FUN_017a79c0);
      if (cVar2 != '\0') {
        local_128 = local_48;
        FUN_004169a0(&local_b8,local_48 + 0x40);
        FUN_0084e3e0(local_60,0,local_50,local_b8);
        (**(code **)(**(longlong **)(local_58[0xdb] + 0x4a0) + 0x18))
                  (*(longlong **)(local_58[0xdb] + 0x4a0),&local_c0,
                   *(undefined1 *)(local_128 + 0x140));
        FUN_0084e3e0(local_60,1,local_50,local_c0);
        FUN_00414480(local_30);
        local_78 = *(undefined8 *)(local_128 + 0x160);
        FUN_00448450(local_30,local_78,PTR_DAT_02004830);
        FUN_0084e3e0(local_60,2,local_50,local_30[0]);
        FUN_00414480(local_30);
        lVar1 = local_48;
        (**(code **)(**(longlong **)(local_58[0xdd] + 0x4a0) + 0x18))
                  (*(longlong **)(local_58[0xdd] + 0x4a0),&local_c8,
                   *(byte *)(local_48 + 0x145) & 0xf);
        FUN_0084e3e0(local_60,3,local_50,local_c8);
        (**(code **)(**(longlong **)(local_58[0xde] + 0x4a0) + 0x18))
                  (*(longlong **)(local_58[0xde] + 0x4a0),&local_d0,
                   (ulonglong)*(byte *)(lVar1 + 0x145) / 0x10);
        FUN_0084e3e0(local_60,4,local_50,local_d0);
        (**(code **)(**(longlong **)(local_58[0xdc] + 0x4a0) + 0x18))
                  (*(longlong **)(local_58[0xdc] + 0x4a0),&local_d8,*(undefined1 *)(lVar1 + 0x147));
        FUN_0084e3e0(local_60,5,local_50,local_d8);
        (**(code **)(**(longlong **)(local_58[0xe0] + 0x4a0) + 0x18))
                  (*(longlong **)(local_58[0xe0] + 0x4a0),&local_e0,*(undefined1 *)(lVar1 + 0x144));
        FUN_0084e3e0(local_60,6,local_50,local_e0);
        local_80 = local_58[0xe7];
        local_84 = *(undefined4 *)(lVar1 + 0x168);
        local_88 = FUN_00597de0(local_80 + 8,&local_84);
        FUN_004ae7e0(local_38,local_48);
        local_50 = local_50 + 1;
      }
      local_4c = local_4c + 1;
      local_11c = local_11c + -1;
      iVar5 = local_11c;
    } while (local_11c != 0);
  }
  FUN_00848a70(local_60,local_50);
  if (1 < local_50) {
    iVar5 = (**(code **)(*local_58 + 0x2d0))(local_58);
    if (iVar5 == 1) {
      local_138 = 2;
      local_40 = FUN_00c5c340(&DAT_00c5bba8,1,*(undefined8 *)(param_1 + 0xd10),local_38);
      FUN_00c5c790(*(undefined8 *)(param_1 + 0xd50),local_40);
      local_70 = local_58[0xda];
      local_50 = 1;
      iVar5 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
      local_4c = 0;
      if (-1 < iVar5 + -1) {
        do {
          local_48 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_4c);
          cVar2 = FUN_004113d0(local_48,&PTR_FUN_017a79c0);
          lVar1 = local_48;
          if (cVar2 != '\0') {
            FUN_0084e320(local_70,&local_e8,0,local_50);
            FUN_00416910(lVar1 + 0x40,local_e8,0xff);
            FUN_0084e320(local_70,&local_f0,1,local_50);
            uVar3 = (**(code **)(**(longlong **)(local_58[0xdb] + 0x4a0) + 0xb0))
                              (*(longlong **)(local_58[0xdb] + 0x4a0),local_f0);
            *(undefined1 *)(lVar1 + 0x140) = uVar3;
            FUN_0084e320(local_70,&local_f8,2,local_50);
            local_a0 = local_f8;
            uVar7 = FUN_00448650(local_f8,PTR_DAT_02004830);
            *(undefined8 *)(lVar1 + 0x160) = uVar7;
            FUN_0084e320(local_70,&local_100,3,local_50);
            bVar4 = (**(code **)(**(longlong **)(local_58[0xdd] + 0x4a0) + 0xb0))
                              (*(longlong **)(local_58[0xdd] + 0x4a0),local_100);
            FUN_0084e320(local_70,&local_108,4,local_50);
            cVar2 = (**(code **)(**(longlong **)(local_58[0xde] + 0x4a0) + 0xb0))
                              (*(longlong **)(local_58[0xde] + 0x4a0),local_108);
            *(byte *)(lVar1 + 0x145) = bVar4 | cVar2 * '\x10';
            FUN_0084e320(local_70,&local_110,5,local_50);
            uVar3 = (**(code **)(**(longlong **)(local_58[0xdc] + 0x4a0) + 0xb0))
                              (*(longlong **)(local_58[0xdc] + 0x4a0),local_110);
            *(undefined1 *)(lVar1 + 0x147) = uVar3;
            FUN_0084e320(local_70,&local_118,6,local_50);
            uVar3 = (**(code **)(**(longlong **)(local_58[0xe0] + 0x4a0) + 0xb0))
                              (*(longlong **)(local_58[0xe0] + 0x4a0),local_118);
            *(undefined1 *)(lVar1 + 0x144) = uVar3;
            local_a8 = local_58[0xe7];
            uVar6 = local_50 - 1;
            if (*(uint *)(local_a8 + 0x10) <= uVar6) {
              FUN_00594f90();
            }
            *(undefined4 *)(lVar1 + 0x168) =
                 *(undefined4 *)(*(longlong *)(local_a8 + 8) + (longlong)(int)uVar6 * 4);
            local_50 = local_50 + 1;
          }
          local_4c = local_4c + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      FUN_017a0190(param_1);
    }
    (**(code **)(**(longlong **)(param_1 + 0x948) + 0x180))(*(longlong **)(param_1 + 0x948));
  }
  FUN_00410f20(local_38);
  FUN_00410f20(local_58);
  FUN_00414560(&local_118,0xd);
  FUN_00414480(local_30);
  return;
}

