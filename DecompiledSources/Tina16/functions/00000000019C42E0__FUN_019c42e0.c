/* Ghidra address: 019c42e0 */
/* Ghidra symbol: FUN_019c42e0 */


void FUN_019c42e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,char param_6)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_res20;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  int local_40;
  uint local_3c;
  int local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong *local_28;
  longlong *local_20;
  
  local_f0 = auStack_148;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  uVar6 = FUN_00f309b0(&LAB_00f23b78,1);
  *param_3 = uVar6;
  local_70 = FUN_00f309b0(&LAB_00f23b78,1);
  local_b0 = FUN_00f33100(&LAB_00f256b8,1);
  local_98 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_40 = 0;
  local_d8 = param_2;
  cVar1 = FUN_01995600(param_2,0,0);
  if (cVar1 != '\0') {
    if (param_6 != '\0') {
      local_98 = FUN_00f309b0(&LAB_00f23b78,1);
      local_88 = FUN_00f309b0(&LAB_00f23b78,1);
      local_90 = FUN_00f309b0(&LAB_00f23b78,1);
      local_b8 = FUN_00f33100(&LAB_00f256b8,1);
      FUN_00f30e70(local_88,L"metadata",local_90);
      FUN_00f30e70(local_88,L"components",local_b8);
      FUN_00f30e70(local_88,L"graph",local_70);
      FUN_00f30e70(local_98,L"circuit",local_88);
      local_128 = 1;
      FUN_00450070(&local_f8,*(undefined8 *)(PTR_DAT_02004010 + 0xb1),&DAT_019c4cb0,&DAT_019c4cc0);
      uVar6 = FUN_00f2e9d0(&LAB_00f22a90,1,local_f8);
      FUN_00f30e70(local_90,L"circuit_name",uVar6);
    }
    local_28 = (longlong *)FUN_01995660(local_d8,1,4);
    while (local_28 != (longlong *)0x0) {
      uVar2 = (**(code **)(*local_28 + 0xf8))(local_28);
      local_3c = (uint)uVar2;
      (**(code **)(*local_28 + 0x288))(local_28,&local_100);
      FUN_0147cfc0(&local_50,local_100);
      FUN_00414480(&local_58);
      if (local_50 == 0) {
        FUN_0043f750(&local_108,local_40);
        FUN_00416ba0(&local_50,L"AutoLab",local_108);
        local_40 = local_40 + 1;
      }
      FUN_0043e1a0(&local_60,local_50);
      iVar3 = (**(code **)(*local_20 + 0xb0))(local_20,local_60);
      if (-1 < iVar3) {
        FUN_00416ba0(&local_110,L"Get graph: duplicate label: ",local_50);
        uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,local_110);
        FUN_004134c0(uVar6);
      }
      (**(code **)(*local_20 + 0x78))(local_20,local_60);
      local_68 = FUN_00f309b0(&LAB_00f23b78,1);
      uVar6 = FUN_00f2f8e0(&LAB_00f22f08,1,local_3c);
      FUN_00f30e70(local_68,L"classID",uVar6);
      FUN_00f30ec0(local_68,L"label",local_50);
      if (param_6 != '\0') {
        local_78 = FUN_00f309b0(&LAB_00f23b78,1);
        FUN_00f335b0(local_b8,local_78);
        FUN_00f30ec0(local_78,&PTR_DAT_019c4d6c,local_50);
        FUN_0147e690(&local_118,local_3c);
        FUN_00f30ec0(local_78,L"type",local_118);
        uVar6 = FUN_00f2f8e0(&LAB_00f22f08,1,0);
        FUN_00f30e70(local_78,L"value",uVar6);
        local_a0 = FUN_00f309b0(&LAB_00f23b78,1);
        uVar6 = FUN_00f2f8e0(&LAB_00f22f08,1,*(undefined4 *)((longlong)local_28 + 0xc));
        FUN_00f30e70(local_a0,&DAT_019c4db0,uVar6);
        uVar6 = FUN_00f2f8e0(&LAB_00f22f08,1,(int)local_28[2]);
        FUN_00f30e70(local_a0,&DAT_019c4dc0,uVar6);
        FUN_00f30e70(local_78,L"position",local_a0);
        local_80 = FUN_00f309b0(&LAB_00f23b78,1);
        uVar4 = FUN_0147d7b0(*(undefined1 *)((longlong)local_28 + 0xd3));
        uVar6 = FUN_00f2f8e0(&LAB_00f22f08,1,uVar4);
        FUN_00f30e70(local_80,L"mirrored",uVar6);
        uVar6 = FUN_00f2f8e0(&LAB_00f22f08,1,*(undefined1 *)((longlong)local_28 + 0xd1));
        FUN_00f30e70(local_80,L"direction",uVar6);
        FUN_00f30e70(local_78,L"orientation",local_80);
        local_a8 = FUN_00f33100(&LAB_00f256b8,1);
        iVar3 = (**(code **)(*local_28 + 0x1c8))();
        local_38 = 0;
        if (-1 < iVar3 + -1) {
          do {
            (**(code **)(*local_28 + 0x1f0))(local_28,local_38,&local_2c,&local_30);
            local_80 = FUN_00f309b0(&LAB_00f23b78,1);
            uVar6 = FUN_00f2f8e0(&LAB_00f22f08,1,local_38);
            FUN_00f30e70(local_80,L"name",uVar6);
            uVar6 = FUN_00f2f8e0(&LAB_00f22f08,1,local_2c);
            FUN_00f30e70(local_80,&DAT_019c4db0,uVar6);
            uVar6 = FUN_00f2f8e0(&LAB_00f22f08,1,local_30);
            FUN_00f30e70(local_80,&DAT_019c4dc0,uVar6);
            FUN_00f335b0(local_a8,local_80);
            local_38 = local_38 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        FUN_00f30e70(local_78,L"pins",local_a8);
      }
      local_a8 = FUN_00f33100(&LAB_00f256b8,1);
      iVar3 = (**(code **)(*local_28 + 0x1c8))();
      local_38 = 0;
      if (-1 < iVar3 + -1) {
        do {
          iVar5 = (**(code **)(*local_28 + 0x210))(local_28,local_38);
          local_c8 = (longlong)iVar5;
          local_d0 = FUN_00f2f800(&LAB_00f22f08,1,local_c8);
          FUN_00f335b0(local_a8,local_d0);
          local_38 = local_38 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      FUN_00f30e70(local_68,L"pins",local_a8);
      FUN_00f335b0(local_b0,local_68);
      FUN_01995800(local_d8,1,4);
      local_28 = (longlong *)FUN_01995660(local_d8,1,4);
    }
  }
  FUN_00f30e70(local_70,L"components",local_b0);
  FUN_00f30e70(*param_3,L"graph",local_70);
  FUN_0147d210(local_res20,*param_3);
  if (local_98 != 0) {
    FUN_0147d210(param_5,local_98);
  }
  FUN_00410f20(local_20);
  FUN_00414560(&local_118,5);
  FUN_00414560(&local_60,4);
  FUN_00414560(&local_res20,2);
  return;
}

