/* Ghidra address: 01c83fb0 */
/* Ghidra symbol: FUN_01c83fb0 */


void FUN_01c83fb0(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  undefined1 local_120;
  longlong *local_110;
  undefined8 local_108;
  undefined8 local_100 [3];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong *local_28;
  longlong *local_20;
  
  local_a0 = auStack_148;
  local_108 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_100[0] = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_90 = 0;
  cVar1 = FUN_01c8cee0(param_1);
  if (cVar1 != '\0') goto LAB_01c84817;
  local_28 = (longlong *)param_1[0x323];
  cVar1 = (**(code **)(*local_28 + 0xa8))(local_28);
  if (cVar1 == '\0') goto LAB_01c84817;
  local_20 = (longlong *)FUN_00605cc0(&PTR_FUN_005f86c8,1);
  local_58 = 0;
  FUN_00724270(local_28,&local_b0);
  FUN_00441a10(&local_a8,local_b0);
  FUN_0043e130(&local_90,local_a8);
  iVar3 = FUN_00416db0(local_90,L".EMF");
  if (iVar3 == 0) {
LAB_01c84114:
    FUN_00724270(local_28,&local_b8);
    (**(code **)(*local_20 + 0xa8))(local_20,local_b8);
  }
  else {
    iVar3 = FUN_00416db0(local_90,&DAT_01c84900);
    if (iVar3 == 0) goto LAB_01c84114;
    iVar3 = FUN_00416db0(local_90,L".JPG");
    if (iVar3 == 0) {
LAB_01c841aa:
      local_70 = (longlong *)FUN_00a09e20(&PTR_FUN_00a09250,1);
      local_68 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      FUN_00724270(local_28,&local_c0);
      (**(code **)(*local_70 + 0xa8))(local_70,local_c0);
      (**(code **)(*local_68 + 0x10))(local_68,local_70);
      uVar4 = (**(code **)(*local_68 + 0x60))(local_68);
      uVar5 = (**(code **)(*local_68 + 0x48))(local_68);
      FUN_01b23050(uVar4,uVar5,&local_84,&local_88);
      FUN_010b6d50(local_68,local_20,local_84,local_88);
      FUN_00410f20(local_68);
      FUN_00410f20(local_70);
    }
    else {
      iVar3 = FUN_00416db0(local_90,L".JPEG");
      if (iVar3 == 0) goto LAB_01c841aa;
      iVar3 = FUN_00416db0(local_90,L".JPE");
      if (iVar3 == 0) goto LAB_01c841aa;
      iVar3 = FUN_00416db0(local_90,L".JFIF");
      if (iVar3 == 0) goto LAB_01c841aa;
      iVar3 = FUN_00416db0(local_90,L".GIF");
      if (iVar3 == 0) {
        local_78 = (longlong *)FUN_00c32af0(&PTR_FUN_00c17678,1);
        local_68 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
        FUN_00724270(local_28,&local_c8);
        (**(code **)(*local_78 + 0xa8))(local_78,local_c8);
        (**(code **)(*local_68 + 0x10))(local_68,local_78);
        uVar4 = (**(code **)(*local_68 + 0x60))(local_68);
        uVar5 = (**(code **)(*local_68 + 0x48))(local_68);
        FUN_01b23050(uVar4,uVar5,&local_84,&local_88);
        FUN_010b6d50(local_68,local_20,local_84,local_88);
        FUN_00410f20(local_68);
        FUN_00410f20(local_78);
      }
      else {
        iVar3 = FUN_00416db0(local_90,L".PNG");
        if (iVar3 == 0) {
          local_80 = (longlong *)FUN_00a39860(&PTR_FUN_00a2f148,1);
          local_68 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
          FUN_00724270(local_28,&local_d0);
          (**(code **)(*local_80 + 0xa8))(local_80,local_d0);
          (**(code **)(*local_68 + 0x10))(local_68,local_80);
          uVar4 = (**(code **)(*local_68 + 0x60))(local_68);
          uVar5 = (**(code **)(*local_68 + 0x48))(local_68);
          FUN_01b23050(uVar4,uVar5,&local_84,&local_88);
          FUN_010b6d50(local_68,local_20,local_84,local_88);
          FUN_00410f20(local_68);
          FUN_00410f20(local_80);
        }
        else {
          local_68 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
          FUN_00724270(local_28,&local_d8);
          (**(code **)(*local_68 + 0xa8))(local_68,local_d8);
          uVar4 = (**(code **)(*local_68 + 0x60))(local_68);
          uVar5 = (**(code **)(*local_68 + 0x48))(local_68);
          FUN_01b23050(uVar4,uVar5,&local_84,&local_88);
          FUN_010b6d50(local_68,local_20,local_84,local_88);
          FUN_00410f20(local_68);
        }
      }
    }
  }
  local_50 = 8;
  local_4c = FUN_006061d0(local_20);
  local_48 = FUN_006061a0(local_20);
  local_40 = FUN_006060c0(local_20);
  uVar6 = FUN_0198d430(param_1[0x4f5]);
  FUN_01a9a4e0(uVar6,&local_2c,&local_30);
  local_128 = &local_50;
  local_38 = (longlong *)FUN_010b7590(0,&PTR_FUN_010b6978,local_2c,local_30);
  local_38[0xb] = 0x3ff0000000000000;
  local_38[0xc] = 0x3ff0000000000000;
  iVar3 = FUN_00416db0(local_90,L".EMF");
  if (iVar3 == 0) {
LAB_01c846cc:
    uVar2 = 0;
  }
  else {
    iVar3 = FUN_00416db0(local_90,&DAT_01c84900);
    if (iVar3 == 0) goto LAB_01c846cc;
    uVar2 = 1;
  }
  *(undefined1 *)((longlong)local_38 + 0x81) = uVar2;
  FUN_00410f20(local_58);
  FUN_0041ddd0(&local_108,PTR_PTR_020011a8);
  local_110 = local_38;
  uVar6 = FUN_017baf50(&local_110,0);
  FUN_017baeb0(&PTR_FUN_017ba4c0,local_108,param_1[0x4f5],uVar6);
  (**(code **)(*(longlong *)param_1[0x4f5] + 0x20))((longlong *)param_1[0x4f5],local_38);
  FUN_0199e310(param_1[0x4f5],0,1,0);
  FUN_01994230(param_1[0x4f5]);
  FUN_01993f30(param_1[0x4f5],local_38,1,0);
  uVar6 = FUN_0198d430(param_1[0x4f5]);
  (**(code **)(*local_38 + 0xa0))(local_38,uVar6);
  local_128 = (undefined4 *)((ulonglong)local_128 & 0xffffffffffffff00);
  local_120 = 0;
  (**(code **)(*param_1 + 0x2f8))(param_1,local_2c,local_30,0);
  FUN_01c6d670(param_1,param_1[0x177]);
LAB_01c84817:
  FUN_00414480(&local_108);
  FUN_00414480(local_100);
  FUN_00414560(&local_e8,2);
  FUN_00414560(&local_d8,6);
  FUN_00414480(&local_a8);
  FUN_00414480(&local_90);
  return;
}

