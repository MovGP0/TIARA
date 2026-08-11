/* Ghidra address: 00661ee0 */
/* Ghidra symbol: FUN_00661ee0 */


void FUN_00661ee0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_b8 [2];
  undefined1 local_b0;
  int local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  longlong local_78;
  undefined1 local_69;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  longlong local_40;
  longlong local_38;
  undefined1 local_29;
  
  local_90 = auStack_e8;
  local_98 = 0;
  local_38 = 0;
  FUN_00662da0(param_1,param_1[0x12]);
  local_29 = *(undefined1 *)((longlong)param_1 + 0xa4);
  FUN_00661190(param_1);
  FUN_004b84c0(param_2,&local_4c,4);
  if (local_4c == 0x40000) {
    *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
    local_69 = 0;
  }
  else if (local_4c == (int)param_1[0x14]) {
    FUN_004b84c0(param_2,(longlong)param_1 + 0xa4,1);
    FUN_004b84c0(param_2,&local_69,1);
  }
  else {
    FUN_0041ddd0(&local_98,PTR_PTR_020020a0);
    local_b8[0] = (undefined4)param_1[0x14];
    local_b0 = 0;
    local_a8 = local_4c;
    local_a0 = 0;
    local_c8 = 1;
    uVar3 = FUN_0044d530(&PTR_FUN_004334c0,1,local_98,local_b8);
    FUN_004134c0(uVar3);
  }
  FUN_004b84c0(param_2,&local_50,4);
  local_4c = 0;
  iVar6 = local_50;
  if (-1 < local_50 + -1) {
    do {
      FUN_00661d70(auStack_e8,&local_38);
      if (local_38 != 0) {
        lVar5 = param_1[5];
        pcVar4 = (code *)FUN_00411550(lVar5,0xffb4);
        (*pcVar4)(lVar5,local_38,&local_40);
        if (local_40 != 0) {
          FUN_0064dbe0(local_40,0);
          FUN_0064f3f0(local_40,param_1[5],0,0);
        }
      }
      local_4c = local_4c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_004b84c0(param_2,param_1 + 0x13,4);
  if (*(char *)((longlong)param_1 + 0xa4) != '\0') {
    uVar2 = (**(code **)(*param_1 + 0x50))(param_1,local_69);
    uVar2 = FUN_006645f0(param_1,(int)param_1[0x13],uVar2);
    *(undefined4 *)(param_1 + 0x13) = uVar2;
  }
  local_48 = 0;
  local_60 = 0;
  while( true ) {
    FUN_004b84c0(param_2,&local_44,4);
    if (local_44 == DAT_01df7484) break;
    local_58 = FUN_00660520(&DAT_006446d0,1,param_1);
    FUN_004b84c0(param_2,local_58 + 0x20,1);
    FUN_004b84c0(param_2,local_58 + 0x40,4);
    if (*(char *)((longlong)param_1 + 0xa4) != '\0') {
      uVar2 = (**(code **)(*param_1 + 0x50))(param_1,*(undefined1 *)(local_58 + 0x20));
      uVar2 = FUN_006645f0(param_1,*(undefined4 *)(local_58 + 0x40),uVar2);
      *(undefined4 *)(local_58 + 0x40) = uVar2;
    }
    FUN_00661d70(auStack_e8,&local_38);
    if ((local_38 == 0) || (cVar1 = FUN_006609f0(local_58,local_38), cVar1 != '\0')) {
      lVar5 = local_60;
      if (local_44 == 0) {
        param_1[0x12] = local_58;
      }
      else if (local_44 == local_48) {
        if ((*(longlong *)(local_60 + 0x30) != 0) && (*(longlong *)(local_60 + 8) == 0)) {
          local_78 = local_60;
          local_60 = *(longlong *)(local_60 + 0x30);
          FUN_00410f20(lVar5);
        }
        *(longlong *)(local_60 + 0x18) = local_58;
        *(longlong *)(local_58 + 0x30) = local_60;
        *(undefined8 *)(local_58 + 0x28) = *(undefined8 *)(local_60 + 0x28);
      }
      else if (local_48 < local_44) {
        *(longlong *)(local_60 + 0x10) = local_58;
        *(longlong *)(local_58 + 0x28) = local_60;
      }
      else if (local_44 < local_48) {
        local_68 = local_60;
        local_48 = local_48 - local_44;
        local_4c = 1;
        if (0 < local_48) {
          do {
            local_68 = *(longlong *)(local_68 + 0x28);
            local_4c = local_4c + 1;
            local_48 = local_48 + -1;
          } while (local_48 != 0);
        }
        *(longlong *)(local_68 + 0x18) = local_58;
        *(longlong *)(local_58 + 0x30) = local_68;
        *(undefined8 *)(local_58 + 0x28) = *(undefined8 *)(local_68 + 0x28);
      }
      local_48 = local_44;
      local_60 = local_58;
    }
    else {
      FUN_00410f20(local_58);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0xa4) = local_29;
  if (param_1[0x12] == 0) {
    lVar5 = FUN_00660520(&DAT_006446d0,1,param_1);
    param_1[0x12] = lVar5;
  }
  FUN_006611a0(param_1);
  FUN_00414480(&local_98);
  FUN_00414480(&local_38);
  return;
}

