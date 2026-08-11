/* Ghidra address: 0127f730 */
/* Ghidra symbol: FUN_0127f730 */


void FUN_0127f730(longlong *param_1,undefined4 param_2,int param_3,longlong *param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *local_res20;
  int local_110;
  int local_10c;
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
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  ushort *local_50;
  undefined8 local_48;
  longlong local_40 [2];
  
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
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60[0] = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_res20 = param_4;
  FUN_0041b910(param_4);
  (**(code **)(*param_1 + 0x2d0))(param_1,param_2,&local_50);
  if (param_3 == 1) {
    (**(code **)(*local_res20 + 0x100))(local_res20,local_40,L"startAddress");
    if (local_40[0] != 0) {
      local_110 = FUN_00f60db0(local_40[0]);
    }
    (**(code **)(*local_res20 + 0x100))(local_res20,local_40,L"stopAddress");
    if (local_40[0] != 0) {
      local_10c = FUN_00f60db0(local_40[0]);
    }
    uVar4 = (uint)*local_50;
    iVar5 = 0;
    if (-1 < (int)(uVar4 - 1)) {
      do {
        *(undefined2 *)(*(longlong *)(local_50 + 4) + (longlong)iVar5 * 2) = 0;
        iVar5 = iVar5 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    (**(code **)(*local_res20 + 0xb8))(local_res20,local_60);
    FUN_0043ea00(local_40,local_60[0]);
    FUN_00450070(&local_68,local_40[0],&DAT_01280298,&DAT_012802a8,1);
    FUN_00414b50(local_40,local_68);
    plVar3 = (longlong *)FUN_01b21480(local_40[0]);
    if (local_110 <= local_10c) {
      iVar5 = (local_10c - local_110) + 1;
      do {
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_48,local_110);
        uVar1 = FUN_00f60db0(local_48);
        *(undefined2 *)(*(longlong *)(local_50 + 4) + (longlong)local_110 * 2) = uVar1;
        local_110 = local_110 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_00410f20(plVar3);
  }
  else if (param_3 == 2) {
    (**(code **)(*local_res20 + 0x100))(local_res20,local_40,L"startAddress");
    if (local_40[0] != 0) {
      uVar2 = FUN_00f60db0(local_40[0]);
      *(undefined4 *)(local_50 + 0xc) = uVar2;
    }
    (**(code **)(*local_res20 + 0x100))(local_res20,local_40,L"stopAddress");
    if (local_40[0] != 0) {
      uVar2 = FUN_00f60db0(local_40[0]);
      *(undefined4 *)(local_50 + 0xe) = uVar2;
    }
    (**(code **)(*local_res20 + 0x100))(local_res20,&local_70,L"stepTime");
    uVar7 = FUN_00b8f2f0(local_70,0x3eb0c6f7a0b5ed8d);
    *(undefined8 *)(local_50 + 0x10) = uVar7;
    (**(code **)(*local_res20 + 0x100))(local_res20,&local_78,L"pattern_method");
    uVar2 = FUN_0043fc50(local_78,0);
    *(undefined4 *)(local_50 + 0x14) = uVar2;
    (**(code **)(*local_res20 + 0x100))(local_res20,local_40,L"pattern_startAddress");
    if (local_40[0] != 0) {
      uVar2 = FUN_00f60db0(local_40[0]);
      *(undefined4 *)(local_50 + 0x16) = uVar2;
    }
    (**(code **)(*local_res20 + 0x100))(local_res20,local_40,L"pattern_stopAddress");
    if (local_40[0] != 0) {
      uVar2 = FUN_00f60db0(local_40[0]);
      *(undefined4 *)(local_50 + 0x18) = uVar2;
    }
    (**(code **)(*local_res20 + 0x100))(local_res20,&local_80,L"pattern_initvalue");
    uVar2 = FUN_0043fc50(local_80,0);
    *(undefined4 *)(local_50 + 0x1a) = uVar2;
    (**(code **)(*local_res20 + 0x100))(local_res20,&local_88,L"pattern_LSB");
    uVar2 = FUN_0043fc50(local_88,1);
    *(undefined4 *)(local_50 + 0x1c) = uVar2;
    (**(code **)(*local_res20 + 0x100))(local_res20,&local_90,L"pattern_MSB");
    uVar2 = FUN_0043fc50(local_90,local_50[1]);
    *(undefined4 *)(local_50 + 0x1e) = uVar2;
    iVar5 = 0;
    uVar4 = (uint)*local_50;
    if (-1 < (int)(uVar4 - 1)) {
      do {
        *(undefined2 *)(*(longlong *)(local_50 + 4) + (longlong)iVar5 * 2) = 0;
        iVar5 = iVar5 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    (**(code **)(*local_res20 + 0xb8))(local_res20,&local_98);
    FUN_0043ea00(local_40,local_98);
    FUN_00450070(&local_a0,local_40[0],&DAT_01280298,&DAT_012802a8,1);
    FUN_00414b50(local_40,local_a0);
    plVar3 = (longlong *)FUN_01b21480(local_40[0]);
    iVar5 = (**(code **)(*plVar3 + 0x28))();
    iVar6 = 0;
    if (-1 < iVar5 + -1) {
      do {
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_48,iVar6);
        uVar1 = FUN_00f60db0(local_48);
        *(undefined2 *)
         (*(longlong *)(local_50 + 4) + (longlong)(*(int *)(local_50 + 0xc) + iVar6) * 2) = uVar1;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_00410f20(plVar3);
    (**(code **)(*local_res20 + 0x100))(local_res20,&local_a8,L"repeat");
    iVar5 = FUN_0043fc50(local_a8,0);
    *(bool *)(local_50 + 0x20) = 0 < iVar5;
    (**(code **)(*local_res20 + 0x100))(local_res20,&local_b0,L"display_mode");
    uVar2 = FUN_0043fc50(local_b0,0);
    *(undefined4 *)(local_50 + 8) = uVar2;
  }
  else if (param_3 == 3) {
    (**(code **)(*local_res20 + 0x100))(local_res20,local_40,L"startAddress");
    if (local_40[0] != 0) {
      uVar2 = FUN_00f60db0(local_40[0]);
      *(undefined4 *)(local_50 + 0xe) = uVar2;
    }
    (**(code **)(*local_res20 + 0x100))(local_res20,local_40,L"stopAddress");
    if (local_40[0] != 0) {
      uVar2 = FUN_00f60db0(local_40[0]);
      *(undefined4 *)(local_50 + 0x10) = uVar2;
    }
    (**(code **)(*local_res20 + 0x100))(local_res20,&local_b8,L"stepTime");
    uVar7 = FUN_00b8f2f0(local_b8,0x3eb0c6f7a0b5ed8d);
    *(undefined8 *)(local_50 + 0x14) = uVar7;
    (**(code **)(*local_res20 + 0x100))(local_res20,&local_c0,L"bitCount");
    uVar2 = FUN_0043fc50(local_c0,0x12);
    *(undefined4 *)(local_50 + 0xc) = uVar2;
    (**(code **)(*local_res20 + 0x100))(local_res20,&local_c8,L"frameTime");
    uVar7 = FUN_00b8f2f0(local_c8,0x3ef4f8b588e368f1);
    *(undefined8 *)(local_50 + 0x18) = uVar7;
    (**(code **)(*local_res20 + 0x100))(local_res20,&local_d0,L"pattern_method");
    uVar2 = FUN_0043fc50(local_d0,0);
    *(undefined4 *)(local_50 + 0x1c) = uVar2;
    (**(code **)(*local_res20 + 0x100))(local_res20,local_40,L"pattern_startAddress");
    if (local_40[0] != 0) {
      uVar2 = FUN_00f60db0(local_40[0]);
      *(undefined4 *)(local_50 + 0x1e) = uVar2;
    }
    (**(code **)(*local_res20 + 0x100))(local_res20,local_40,L"pattern_stopAddress");
    if (local_40[0] != 0) {
      uVar2 = FUN_00f60db0(local_40[0]);
      *(undefined4 *)(local_50 + 0x20) = uVar2;
    }
    (**(code **)(*local_res20 + 0x100))(local_res20,&local_d8,L"pattern_initvalue");
    uVar2 = FUN_0043fc50(local_d8,0);
    *(undefined4 *)(local_50 + 0x22) = uVar2;
    (**(code **)(*local_res20 + 0x100))(local_res20,&local_e0,L"pattern_LSB");
    uVar2 = FUN_0043fc50(local_e0,1);
    *(undefined4 *)(local_50 + 0x24) = uVar2;
    (**(code **)(*local_res20 + 0x100))(local_res20,&local_e8,L"pattern_MSB");
    uVar2 = FUN_0043fc50(local_e8,*(undefined4 *)(local_50 + 2));
    *(undefined4 *)(local_50 + 0x26) = uVar2;
    iVar6 = 0;
    iVar5 = *(int *)local_50;
    if (-1 < iVar5 + -1) {
      do {
        *(undefined4 *)(*(longlong *)(local_50 + 4) + (longlong)iVar6 * 4) = 0;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    (**(code **)(*local_res20 + 0xb8))(local_res20,&local_f0);
    FUN_0043ea00(local_40,local_f0);
    FUN_00450070(&local_f8,local_40[0],&DAT_01280298,&DAT_012802a8,1);
    FUN_00414b50(local_40,local_f8);
    plVar3 = (longlong *)FUN_01b21480(local_40[0]);
    iVar5 = (**(code **)(*plVar3 + 0x28))();
    iVar6 = 0;
    if (-1 < iVar5 + -1) {
      do {
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_48,iVar6);
        uVar2 = FUN_00f60db0(local_48);
        *(undefined4 *)
         (*(longlong *)(local_50 + 4) + (longlong)(*(int *)(local_50 + 0xe) + iVar6) * 4) = uVar2;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_00410f20(plVar3);
    (**(code **)(*local_res20 + 0x100))(local_res20,&local_100,L"repeat");
    iVar5 = FUN_0043fc50(local_100,0);
    *(bool *)(local_50 + 0x28) = 0 < iVar5;
    (**(code **)(*local_res20 + 0x100))(local_res20,&local_108,L"display_mode");
    uVar2 = FUN_0043fc50(local_108,0);
    *(undefined4 *)(local_50 + 8) = uVar2;
  }
  FUN_00414560(&local_108,0x16);
  FUN_00414560(&local_48,2);
  FUN_0041b800(&local_res20);
  return;
}

