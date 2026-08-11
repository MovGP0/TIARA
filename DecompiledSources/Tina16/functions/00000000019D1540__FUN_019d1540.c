/* Ghidra address: 019d1540 */
/* Ghidra symbol: FUN_019d1540 */


void FUN_019d1540(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_res18 [2];
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  undefined8 local_b0 [2];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_48;
  undefined8 local_40 [6];
  
  local_b8 = 0;
  local_b0[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_019d14b0(param_1,0xff,0);
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (*(short *)(lVar3 + 0x1fa4) == 0x50) {
    iVar4 = FUN_00416db0(local_res18[0],L"Passband");
    if (iVar4 == 0) {
      uVar1 = *(undefined8 *)(lVar3 + 0x20);
      uVar5 = FUN_0123b200(uVar1,*(undefined8 *)(param_1 + 0x28));
      local_90 = uVar1;
      local_88 = uVar5;
      FUN_019d0160(param_1,&local_90,local_40);
      local_90 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x28);
      local_88 = uVar5;
      FUN_019d0160(param_1,&local_90,&local_48);
      FUN_019d05d0(param_1,local_40,&local_48);
      _local_60 = CONCAT44(*(undefined4 *)(param_1 + 0xac),(undefined4)local_40[0]);
      FUN_019d05d0(param_1,local_40,&local_60);
      local_60 = (undefined4)local_48;
      _local_60 = CONCAT44(*(undefined4 *)(param_1 + 0xac),local_60);
      FUN_019d05d0(param_1,&local_48,&local_60);
      local_c0 = 10;
      local_bc = 10;
    }
    else {
      iVar4 = FUN_00416db0(local_res18[0],L"Stopband");
      if (iVar4 == 0) {
        uVar1 = *(undefined8 *)(lVar3 + 0x38);
        local_88 = FUN_0123b200(uVar1,*(undefined8 *)(param_1 + 0x20));
        local_90 = uVar1;
        FUN_019d0160(param_1,&local_90,local_40);
        uStack_5c = (undefined4)((ulonglong)local_40[0] >> 0x20);
        _local_60 = CONCAT44(uStack_5c,*(undefined4 *)(param_1 + 0xa8));
        FUN_019d05d0(param_1,local_40,&local_60);
        local_60 = (undefined4)local_40[0];
        _local_60 = CONCAT44(*(undefined4 *)(param_1 + 0xa4),local_60);
        FUN_019d05d0(param_1,local_40,&local_60);
        uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x30);
        local_88 = FUN_0123b200(uVar1,*(undefined8 *)(param_1 + 0x28));
        local_90 = uVar1;
        FUN_019d0160(param_1,&local_90,local_40);
        uStack_5c = (undefined4)((ulonglong)local_40[0] >> 0x20);
        _local_60 = CONCAT44(uStack_5c,*(undefined4 *)(param_1 + 0xa0));
        FUN_019d05d0(param_1,local_40,&local_60);
        local_60 = (undefined4)local_40[0];
        _local_60 = CONCAT44(*(undefined4 *)(param_1 + 0xa4),local_60);
        FUN_019d05d0(param_1,local_40,&local_60);
        local_48 = local_40[0];
        local_c0 = 10;
        local_bc = 10;
      }
    }
  }
  else if (*(short *)(lVar3 + 0x1fa4) == 0x53) {
    iVar4 = FUN_00416db0(local_res18[0],L"Passband");
    if (iVar4 == 0) {
      uVar1 = *(undefined8 *)(lVar3 + 0x20);
      local_88 = FUN_0123b200(uVar1,*(undefined8 *)(param_1 + 0x20));
      local_90 = uVar1;
      FUN_019d0160(param_1,&local_90,local_40);
      uStack_5c = (undefined4)((ulonglong)local_40[0] >> 0x20);
      _local_60 = CONCAT44(uStack_5c,*(undefined4 *)(param_1 + 0xa0));
      FUN_019d05d0(param_1,local_40,&local_60);
      local_60 = (undefined4)local_40[0];
      _local_60 = CONCAT44(*(undefined4 *)(param_1 + 0xac),local_60);
      FUN_019d05d0(param_1,local_40,&local_60);
      local_48 = local_40[0];
      local_c0 = 10;
      local_bc = 10;
    }
    else {
      iVar4 = FUN_00416db0(local_res18[0],L"Stopband");
      if (iVar4 == 0) {
        uVar1 = *(undefined8 *)(lVar3 + 0x30);
        local_88 = FUN_0123b200(uVar1,*(undefined8 *)(param_1 + 0x20));
        local_90 = uVar1;
        FUN_019d0160(param_1,&local_90,local_40);
        uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x38);
        local_88 = FUN_0123b200(uVar1,*(undefined8 *)(param_1 + 0x28));
        local_90 = uVar1;
        FUN_019d0160(param_1,&local_90,&local_48);
        FUN_019d05d0(param_1,local_40,&local_48);
        _local_60 = CONCAT44(*(undefined4 *)(param_1 + 0xa4),(undefined4)local_40[0]);
        FUN_019d05d0(param_1,local_40,&local_60);
        local_60 = (undefined4)local_48;
        _local_60 = CONCAT44(*(undefined4 *)(param_1 + 0xa4),local_60);
        FUN_019d05d0(param_1,&local_48,&local_60);
      }
    }
  }
  else {
    iVar4 = FUN_00416db0(local_res18[0],L"Passband");
    if (iVar4 == 0) {
      FUN_019d0660(param_1,param_2[4],&local_7c);
    }
    else {
      iVar4 = FUN_00416db0(local_res18[0],L"Stopband");
      if (iVar4 == 0) {
        FUN_019d0660(param_1,param_2[6],&local_7c);
      }
    }
    local_90 = *(undefined8 *)(param_1 + 0xb0 + (longlong)local_7c * 0x10);
    local_88 = *(undefined8 *)(param_1 + 0x700 + (longlong)local_7c * 8);
    FUN_019d0160(param_1,&local_90,&local_48);
    iVar4 = FUN_00416db0(local_res18[0],L"Passband");
    if (iVar4 == 0) {
      local_60 = (undefined4)local_48;
      _local_60 = CONCAT44(*(undefined4 *)(param_1 + 0xac),local_60);
      FUN_019d05d0(param_1,&local_48,&local_60);
      uStack_5c = (undefined4)((ulonglong)local_48 >> 0x20);
      if (*(short *)((longlong)param_2 + 0x1fa4) == 0x4c) {
        uVar2 = *(undefined4 *)(param_1 + 0xa0);
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0xa8);
      }
      _local_60 = CONCAT44(uStack_5c,uVar2);
      FUN_019d05d0(param_1,&local_48,&local_60);
      local_c0 = 10;
      local_bc = 10;
    }
    else {
      iVar4 = FUN_00416db0(local_res18[0],L"Stopband");
      if (iVar4 == 0) {
        local_60 = (undefined4)local_48;
        _local_60 = CONCAT44(*(undefined4 *)(param_1 + 0xa4),local_60);
        FUN_019d05d0(param_1,&local_48,&local_60);
        uStack_5c = (undefined4)((ulonglong)local_48 >> 0x20);
        if (*(short *)((longlong)param_2 + 0x1fa4) == 0x4c) {
          uVar2 = *(undefined4 *)(param_1 + 0xa8);
        }
        else {
          uVar2 = *(undefined4 *)(param_1 + 0xa0);
        }
        _local_60 = CONCAT44(uStack_5c,uVar2);
        FUN_019d05d0(param_1,&local_48,&local_60);
        local_c0 = 0;
        local_bc = 5;
      }
    }
  }
  local_98 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x118))
                       (*(longlong **)(param_1 + 0x30),local_res18[0]);
  local_78 = (int)local_98 + local_c0;
  local_74 = -local_bc;
  FUN_019d1380(param_1,0xffffff,0xff,local_res18[0],&local_48,&local_98,&local_78);
  local_a0 = local_98;
  iVar4 = FUN_00416db0(local_res18[0],L"Passband");
  if (iVar4 == 0) {
    FUN_00b8fd60(local_b0,*param_2,1,0,1);
    FUN_00416ba0(local_res18,local_b0[0],L" dB/d");
  }
  else {
    iVar4 = FUN_00416db0(local_res18[0],L"Stopband");
    if (iVar4 == 0) {
      FUN_00b8fd60(&local_b8,param_2[2],1,0,1);
      FUN_00416ba0(local_res18,local_b8,L" dB/d");
    }
  }
  local_48 = CONCAT44(local_48._4_4_ + local_a0._4_4_,(undefined4)local_48);
  local_98 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x118))
                       (*(longlong **)(param_1 + 0x30),local_res18[0]);
  local_78 = (int)local_98 + local_c0;
  local_74 = -local_bc;
  FUN_019d1380(param_1,0xffffff,0xff,local_res18[0],&local_48,&local_98,&local_78);
  FUN_019d1510(param_1);
  FUN_00414560(&local_b8,2);
  FUN_00414480(local_res18);
  return;
}

