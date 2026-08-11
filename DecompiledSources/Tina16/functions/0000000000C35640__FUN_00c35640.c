/* Ghidra address: 00c35640 */
/* Ghidra symbol: FUN_00c35640 */


void FUN_00c35640(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 auStack_d8 [32];
  uint local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined1 *local_60;
  int local_4c;
  longlong *local_40;
  longlong *local_38;
  undefined4 local_2c;
  
  local_60 = auStack_d8;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  puVar1 = auStack_d8;
  if (param_2 != param_1) {
    if (param_2 == (longlong *)0x0) {
      local_60 = auStack_d8;
      FUN_00c32d00(param_1);
    }
    else {
      cVar2 = FUN_004113d0(param_2,&PTR_FUN_00c17678);
      if (cVar2 == '\0') {
        cVar2 = FUN_004113d0(param_2,&PTR_FUN_006a4a28);
        if (cVar2 == '\0') {
          cVar2 = FUN_004113d0(param_2,&DAT_005f7500);
          if (cVar2 == '\0') {
            FUN_00c32d00(param_1);
            local_40 = (longlong *)FUN_00c28640(&LAB_00c14270,1,param_1);
            (**(code **)(*local_40 + 0x10))(local_40,param_2);
          }
          else {
            (**(code **)(*param_1 + 0x10))(param_1,param_2[3]);
          }
        }
        else {
          local_90 = param_2;
          (**(code **)(*param_2 + 0x30))(param_2);
          cVar2 = FUN_006a5ff0(local_90,*(undefined2 *)PTR_DAT_02004c80);
          if (cVar2 == '\0') {
            FUN_004b1060(param_1,param_2);
          }
          else {
            local_38 = (longlong *)FUN_00603960(&DAT_005f7500,1);
            (**(code **)(*local_38 + 0x10))(local_38,param_2);
            (**(code **)(*param_1 + 0x10))(param_1,local_38[3]);
            FUN_00410f20(local_38);
          }
          (**(code **)(*param_2 + 0x28))(param_2);
        }
      }
      else {
        FUN_00c32d00(param_1);
        param_1[5] = param_2[5];
        param_1[6] = param_2[6];
        param_1[0xe] = param_2[0xe];
        param_1[0xf] = param_2[0xf];
        local_2c = 0;
        local_b8 = 0;
        local_98 = param_2;
        FUN_004238d0(local_70,0,0,0);
        FUN_0041ddd0(&local_78,PTR_PTR_02002800);
        pcVar5 = (code *)FUN_00411550(param_1,0xfffd);
        local_b8 = local_b8 & 0xffffff00;
        local_b0 = local_70;
        local_a8 = local_78;
        (*pcVar5)(param_1,param_1,0,(undefined1)local_2c);
        (**(code **)(*(longlong *)param_1[0xb] + 0x10))((longlong *)param_1[0xb],local_98[0xb]);
        *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)local_98 + 0x8c);
        *(char *)(param_1 + 9) = (char)local_98[9];
        *(int *)(param_1 + 0x11) = (int)local_98[0x11];
        uVar3 = (**(code **)(*local_98 + 0x58))(local_98);
        (**(code **)(*param_1 + 0x80))(param_1,uVar3);
        *(undefined1 *)((longlong)param_1 + 0x4a) = *(undefined1 *)((longlong)local_98 + 0x4a);
        *(undefined1 *)((longlong)param_1 + 0x49) = *(undefined1 *)((longlong)local_98 + 0x49);
        *(char *)(param_1 + 0xd) = (char)local_98[0xd];
        *(char *)(param_1 + 0x1d) = (char)local_98[0x1d];
        iVar4 = FUN_00c1aa10();
        local_4c = 0;
        if (-1 < iVar4 + -1) {
          do {
            uVar6 = FUN_00c2fce0(param_2[10],local_4c);
            FUN_00c34e50(param_1,uVar6);
            uVar3 = FUN_00c1aa10(param_2[10]);
            thunk_FUN_03f3ed25(local_4c + 1,100,uVar3);
            local_b8 = 0;
            FUN_004238d0(local_70,0,0,0);
            FUN_0041ddd0(&local_80,PTR_PTR_02002800);
            pcVar5 = (code *)FUN_00411550(param_1,0xfffd);
            local_b8 = local_b8 & 0xffffff00;
            local_b0 = local_70;
            local_a8 = local_80;
            (*pcVar5)(param_1,param_1,1);
            local_4c = local_4c + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        local_2c = 100;
        local_b8 = 0;
        FUN_004238d0(local_70,0,0,0);
        FUN_0041ddd0(&local_88,PTR_PTR_02002800);
        pcVar5 = (code *)FUN_00411550(param_1,0xfffd);
        local_b8 = local_b8 & 0xffffff00;
        local_b0 = local_70;
        local_a8 = local_88;
        (*pcVar5)(param_1,param_1,2,(undefined1)local_2c);
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
      }
    }
    (**(code **)(*param_1 + 0x20))(param_1,param_1);
    puVar1 = local_60;
  }
  local_60 = puVar1;
  FUN_00414560(&local_88,3);
  return;
}

