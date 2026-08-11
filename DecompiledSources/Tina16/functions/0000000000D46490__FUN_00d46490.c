/* Ghidra address: 00d46490 */
/* Ghidra symbol: FUN_00d46490 */


void FUN_00d46490(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_138 [32];
  int *local_118;
  uint local_110;
  undefined4 local_108;
  undefined4 local_100;
  int local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 *local_e0;
  longlong *local_d8;
  longlong local_d0;
  undefined1 local_c4 [8];
  ulonglong local_bc;
  undefined8 uStack_b4;
  char local_a9;
  undefined8 local_a8;
  undefined1 local_a0 [12];
  undefined1 local_94 [12];
  undefined8 local_88;
  uint local_80;
  ulonglong local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  int local_5c;
  undefined4 uStack_58;
  undefined8 local_54;
  ulonglong local_4c;
  undefined8 uStack_44;
  int local_3c;
  longlong *local_38;
  longlong local_30;
  
  local_e0 = auStack_138;
  local_88 = 0;
  local_38 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  uVar2 = FUN_00787fa0(*(undefined8 *)(param_1 + 0x18));
  uVar3 = FUN_00787c80(*(undefined8 *)(param_1 + 0x18));
  (**(code **)(*local_38 + 0xe0))(local_38,uVar2,uVar3);
  lVar5 = FUN_00609e10(local_38);
  uVar2 = FUN_00788c10(param_1);
  FUN_005fdab0(*(undefined8 *)(lVar5 + 0x80),uVar2);
  uVar2 = (**(code **)(*local_38 + 0x60))(local_38);
  uVar3 = (**(code **)(*local_38 + 0x48))(local_38);
  local_118 = (int *)CONCAT44(local_118._4_4_,uVar3);
  FUN_004238d0(&local_4c,0,0,uVar2);
  plVar6 = (longlong *)FUN_00609e10(local_38);
  (**(code **)(*plVar6 + 0xa8))(plVar6,&local_4c);
  uVar7 = FUN_00609e10(local_38);
  local_a8 = FUN_005ffa40(uVar7);
  plVar6 = (longlong *)FUN_00781840();
  (**(code **)(*plVar6 + 0x138))(plVar6,local_a0,2);
  uVar7 = FUN_00781840();
  local_118 = (int *)0x0;
  local_110 = 0;
  FUN_00778dc0(uVar7,local_a8,local_a0,&local_4c);
  iVar4 = FUN_00d463d0();
  local_f4 = iVar4 + -1;
  local_3c = 0;
  if (-1 < local_f4) {
    do {
      local_f4 = iVar4;
      local_d0 = FUN_00d463f0(param_1,local_3c);
      local_7c = *(ulonglong *)(local_d0 + 0x28);
      local_74 = *(undefined8 *)(local_d0 + 0x30);
      local_80 = *(uint *)(local_d0 + 0x41);
      FUN_00414b50(&local_88,*(undefined8 *)(local_d0 + 0x20));
      local_bc = *(ulonglong *)(local_d0 + 0x48);
      uStack_b4 = *(undefined8 *)(local_d0 + 0x50);
      local_a9 = '\0';
      if ((*(char *)(param_1 + 0x60) != '\0') && (*(char *)(param_1 + 0x7c) == '\0')) {
        thunk_FUN_03cc0d62(local_c4);
        thunk_FUN_0417e313(*(undefined8 *)(param_1 + 8),local_c4);
        cVar1 = FUN_00423210(&local_7c,local_c4);
        if (cVar1 != '\0') {
          local_a9 = '\x01';
        }
      }
      plVar6 = (longlong *)FUN_00781840();
      (**(code **)(*plVar6 + 0x138))(plVar6,local_a0,2);
      if (local_a9 != '\0') {
        plVar6 = (longlong *)FUN_00781840();
        (**(code **)(*plVar6 + 0x138))(plVar6,local_a0,3);
      }
      if (*(int *)(param_1 + 0x78) == local_3c) {
        plVar6 = (longlong *)FUN_00781840();
        (**(code **)(*plVar6 + 0x138))(plVar6,local_a0,4);
      }
      uVar7 = FUN_00781840();
      local_118 = (int *)0x0;
      local_110 = 0;
      FUN_00778dc0(uVar7,local_a8,local_a0,&local_7c);
      local_54 = local_74;
      local_5c = (int)local_7c;
      uStack_58 = (undefined4)(local_7c >> 0x20);
      _local_5c = CONCAT44(uStack_58,local_5c + 4);
      lVar5 = FUN_00d463f0(param_1,local_3c);
      if (*(char *)(lVar5 + 0x40) != '\0') {
        plVar6 = (longlong *)FUN_00781840();
        (**(code **)(*plVar6 + 0x200))(plVar6,local_94,0x33);
        local_4c = local_bc;
        uStack_44 = uStack_b4;
        if (local_a9 != '\0') {
          uVar7 = FUN_00781840();
          local_118 = (int *)0x0;
          local_110 = 0;
          FUN_00778dc0(uVar7,local_a8,local_94,&local_4c);
          local_d8 = (longlong *)FUN_00609e10(local_38);
          uVar7 = FUN_00781840();
          uVar2 = FUN_007793c0(uVar7,0xff000010);
          FUN_005fd4e0(local_d8[0xf],uVar2);
          (**(code **)(*local_d8 + 200))(local_d8,local_4c & 0xffffffff,3);
          iVar4 = FUN_004230c0(&local_4c);
          (**(code **)(*local_d8 + 0xc0))(local_d8,local_4c & 0xffffffff,iVar4 + -3);
          uVar7 = FUN_00781840();
          uVar2 = FUN_007793c0(uVar7,0xff000014);
          FUN_005fd4e0(local_d8[0xf],uVar2);
          (**(code **)(*local_d8 + 200))(local_d8,(int)local_4c + -1,3);
          iVar4 = FUN_004230c0(&local_4c);
          (**(code **)(*local_d8 + 0xc0))(local_d8,(int)local_4c + -1,iVar4 + -3);
        }
        iVar4 = FUN_004230a0(&local_4c);
        local_54 = CONCAT44(local_54._4_4_,(int)local_54 - iVar4);
      }
      lVar5 = FUN_00d463f0(param_1,local_3c);
      if (*(char *)(lVar5 + 0x46) != '\0') {
        lVar5 = FUN_00d463f0(param_1,local_3c);
        if (*(longlong *)(lVar5 + 0x18) != 0) {
          local_30 = FUN_007d5080(&PTR_FUN_006441f8,1,0);
          lVar5 = FUN_00d463f0(param_1,local_3c);
          FUN_007d5670(local_30,*(undefined8 *)(lVar5 + 0x18));
          *(undefined1 *)(local_30 + 0xa9) = 1;
          FUN_007d6470(local_30,0x1fffffff);
          local_4c = local_7c;
          uStack_44 = local_74;
          local_118 = (int *)CONCAT44(local_118._4_4_,*(undefined4 *)(local_30 + 0x90));
          FUN_004238d0(&local_6c,0,0,*(undefined4 *)(local_30 + 0x94));
          FUN_004238f0(&local_f0,&local_6c,&local_4c);
          local_6c = local_f0;
          local_64 = uStack_e8;
          lVar5 = FUN_00d463f0(param_1,local_3c);
          if (*(char *)(lVar5 + 0x45) == '\0') {
            local_6c = CONCAT44(local_6c._4_4_,(int)local_4c + 2);
            local_64 = CONCAT44(local_64._4_4_,(int)local_4c + 2 + *(int *)(local_30 + 0x94) + 2);
            iVar4 = FUN_004230a0(&local_6c);
            _local_5c = CONCAT44(uStack_58,local_5c + iVar4 + 2);
          }
          else {
            local_6c = CONCAT44(local_6c._4_4_,((int)local_74 - *(int *)(local_30 + 0x94)) + -2);
            local_64 = CONCAT44(local_64._4_4_,(int)local_74);
            iVar4 = FUN_004230a0(&local_6c);
            local_54 = CONCAT44(local_54._4_4_,((int)local_54 - iVar4) + -2);
          }
          uVar7 = FUN_00609e10(local_38);
          lVar5 = FUN_00d463f0(param_1,local_3c);
          local_118 = (int *)CONCAT44(local_118._4_4_,*(undefined4 *)(lVar5 + 0x10));
          local_110 = CONCAT31(local_110._1_3_,1);
          FUN_007d6c70(local_30,uVar7,local_6c & 0xffffffff,local_6c._4_4_);
          FUN_00410f20(local_30);
        }
      }
      local_80 = local_80 | 0x14000;
      uVar7 = FUN_00781840();
      local_118 = &local_5c;
      local_110 = local_80;
      local_108 = 0x1fffffff;
      local_100 = 0;
      FUN_00778f70(uVar7,local_a8,local_a0,local_88);
      local_3c = local_3c + 1;
      local_f4 = local_f4 + -1;
      iVar4 = local_f4;
    } while (local_f4 != 0);
  }
  (**(code **)(*param_2 + 0x88))(param_2,0,0,local_38);
  FUN_00410f20(local_38);
  FUN_00414480(&local_88);
  return;
}

