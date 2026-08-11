/* Ghidra address: 00c47a50 */
/* Ghidra symbol: FUN_00c47a50 */


longlong FUN_00c47a50(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 *param_6)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_res8;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_f8 [32];
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_60 = auStack_f8;
  local_c0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_38 = *param_6;
  uStack_30 = param_6[1];
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_00410e60(local_res8,0);
  FUN_00416ba0(local_res8 + 8,L"DS_FileMapComm_",local_res18);
  *(undefined8 *)(local_res8 + 0x70) = local_38;
  *(undefined8 *)(local_res8 + 0x78) = uStack_30;
  FUN_00414ad0(local_res8 + 0x10,local_res20);
  FUN_00414ad0(local_res8 + 0x18,param_5);
  local_d8 = &DAT_00c48218;
  local_d0 = *(undefined8 *)(local_res8 + 0x10);
  FUN_00416cd0(&local_68,4,L"SharedMem create ",*(undefined8 *)(local_res8 + 0x18));
  FUN_00c4c420(local_68);
  FUN_00416ba0(local_res8 + 0x20,*(undefined8 *)(local_res8 + 8),*(undefined8 *)(local_res8 + 0x18))
  ;
  FUN_00416ba0(local_res8 + 0x28,*(undefined8 *)(local_res8 + 8),*(undefined8 *)(local_res8 + 0x10))
  ;
  uVar2 = FUN_00416740(*(undefined8 *)(local_res8 + 0x20));
  uVar2 = FUN_00427870(0,0,uVar2);
  *(undefined8 *)(local_res8 + 0xa8) = uVar2;
  iVar1 = thunk_FUN_03ce33a6();
  if (iVar1 == 0xb7) {
    FUN_00416ba0(&local_70,L"Other program already connected to ",*(undefined8 *)(local_res8 + 0x20)
                );
    FUN_00c48570(local_res8,local_70);
  }
  else {
    local_50[0] = 0;
    local_48 = 0;
    local_40 = 0xffffffff;
    FUN_00416ba0(&local_78,local_res18,*(undefined8 *)(local_res8 + 0x18));
    uVar2 = FUN_00416740(local_78);
    uVar2 = thunk_FUN_03a8f811(0xf001f,0xffffffff,uVar2);
    *(undefined8 *)(local_res8 + 0x90) = uVar2;
    if (*(longlong *)(local_res8 + 0x90) == 0) {
      FUN_00416ba0(&local_80,local_res18,*(undefined8 *)(local_res8 + 0x18));
      local_d0 = FUN_00416740(local_80);
      local_d8 = (undefined *)CONCAT44(local_d8._4_4_,0x100038);
      uVar2 = thunk_FUN_0416eccf(0xffffffffffffffff,local_50,0x8000004,0);
      *(undefined8 *)(local_res8 + 0x90) = uVar2;
    }
    if (*(longlong *)(local_res8 + 0x90) == 0) {
      FUN_00c48570(local_res8,L"Could not open or create file mapping OUT");
    }
    else {
      local_d8 = (undefined *)0x0;
      lVar3 = thunk_FUN_03c0fec3(*(longlong *)(local_res8 + 0x90),0xf001f,0,0);
      *(longlong *)(local_res8 + 0xa0) = lVar3;
      if (lVar3 == 0) {
        FUN_00c48570(local_res8,L"Could not get shared memory pointer OUT");
      }
      else {
        *(longlong *)(local_res8 + 0x38) = lVar3;
        local_d8 = (undefined *)((ulonglong)local_d8 & 0xffffffffffffff00);
        local_d0 = CONCAT71(local_d0._1_7_,1);
        uVar2 = FUN_00c46730(&PTR_FUN_00c46278,1,lVar3 + 0x31,0x100000);
        *(undefined8 *)(local_res8 + 0x48) = uVar2;
        FUN_004b6dc0(uVar2,**(undefined8 **)(local_res8 + 0x38));
      }
    }
    FUN_00416ba0(&local_88,local_res18,*(undefined8 *)(local_res8 + 0x10));
    uVar2 = FUN_00416740(local_88);
    uVar2 = thunk_FUN_03a8f811(0xf001f,0xffffffff,uVar2);
    *(undefined8 *)(local_res8 + 0x88) = uVar2;
    if (*(longlong *)(local_res8 + 0x88) == 0) {
      FUN_00416ba0(&local_90,local_res18,*(undefined8 *)(local_res8 + 0x10));
      local_d0 = FUN_00416740(local_90);
      local_d8 = (undefined *)CONCAT44(local_d8._4_4_,0x100038);
      uVar2 = thunk_FUN_0416eccf(0xffffffffffffffff,local_50,0x8000004,0);
      *(undefined8 *)(local_res8 + 0x88) = uVar2;
    }
    if (*(longlong *)(local_res8 + 0x88) == 0) {
      FUN_00c48570(local_res8,L"Could not create or open file mapping IN");
    }
    else {
      local_d8 = (undefined *)0x0;
      lVar3 = thunk_FUN_03c0fec3(*(longlong *)(local_res8 + 0x88),0xf001f,0,0);
      *(longlong *)(local_res8 + 0x98) = lVar3;
      if (lVar3 == 0) {
        FUN_00c48570(local_res8,L"Could not get shared memory pointer IN");
      }
      else {
        *(longlong *)(local_res8 + 0x30) = lVar3;
        local_d8 = (undefined *)((ulonglong)local_d8 & 0xffffffffffffff00);
        local_d0 = CONCAT71(local_d0._1_7_,1);
        uVar2 = FUN_00c46730(&PTR_FUN_00c46278,1,lVar3 + 0x31,0x100000);
        *(undefined8 *)(local_res8 + 0x40) = uVar2;
        FUN_004b6dc0(uVar2,*(undefined8 *)(*(longlong *)(local_res8 + 0x30) + 8));
      }
    }
    if (*(longlong *)(local_res8 + 0x80) == 0) {
      FUN_00c48c40(local_res8);
      uVar2 = FUN_004d0ba0(&PTR_FUN_00c47608,1,1);
      *(undefined8 *)(local_res8 + 0x68) = uVar2;
      FUN_004d1350(uVar2,3);
      FUN_004d1400(*(undefined8 *)(local_res8 + 0x68),1);
      lVar3 = *(longlong *)(local_res8 + 0x68);
      *(longlong *)(lVar3 + 0x48) = local_res8;
      FUN_004d1ec0(lVar3);
    }
    local_b8 = local_res8 + 0x88;
    local_b0 = 0x10;
    local_a8 = local_res8 + 0x90;
    local_a0 = 0x10;
    FUN_00442f70(&local_98,L"SharedMem handles %x / %x",&local_b8,1);
    FUN_00c4c420(local_98);
    local_b8 = local_res8 + 0x98;
    local_b0 = 0x10;
    local_a8 = local_res8 + 0xa0;
    local_a0 = 0x10;
    FUN_00442f70(&local_c0,L"SharedMem pointers %x / %x",&local_b8,1);
    FUN_00c4c420(local_c0);
    FUN_00c479d0(local_res8);
  }
  FUN_00414480(&local_c0);
  FUN_00414560(&local_98,7);
  FUN_00414560(&local_res18,3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

