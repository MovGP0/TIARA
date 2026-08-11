/* Ghidra address: 019dc380 */
/* Ghidra symbol: FUN_019dc380 */


longlong FUN_019dc380(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  ushort uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined8 local_d0;
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  uint local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_e0 = auStack_108;
  local_e8 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_a0 = FUN_00f33100(&LAB_00f256b8,1);
  local_b0 = FUN_0198b200(0,&PTR_FUN_01984d18,1,0);
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_28 + 0xd8))(local_28,param_1);
  FUN_019dc160(local_28,local_b0);
  local_c0 = local_b0;
  iVar4 = *(int *)(local_b0 + 0x10);
  local_74 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar3 = FUN_00b94e60(local_c0,local_74);
      cVar1 = FUN_0198a580(uVar3);
      if (cVar1 == '\x04') {
        local_b8 = (longlong *)FUN_00b94e60(local_c0,local_74);
        uVar2 = (**(code **)(*local_b8 + 0xf8))(local_b8);
        local_84 = (uint)uVar2;
        local_7c = (**(code **)(*local_b8 + 0x1c8))(local_b8);
        (**(code **)(*local_b8 + 0x288))(local_b8,&local_60);
        local_98 = FUN_00f309b0(&LAB_00f23b78,1);
        FUN_00f30ec0(local_98,L"label",local_60);
        uVar3 = FUN_00f2f8e0(&LAB_00f22f08,1,local_84);
        FUN_00f30e70(local_98,L"classID",uVar3);
        local_a8 = FUN_00f33100(&LAB_00f256b8,1);
        local_78 = 0;
        iVar5 = local_7c;
        if (-1 < local_7c + -1) {
          do {
            local_80 = (**(code **)(*local_b8 + 0x210))(local_b8,local_78);
            local_d0 = FUN_00f2f8e0(&LAB_00f22f08,1,local_80);
            FUN_00f335b0(local_a8,local_d0);
            local_78 = local_78 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        FUN_00f30e70(local_98,&DAT_019dc800,local_a8);
        FUN_00f335b0(local_a0,local_98);
      }
      local_74 = local_74 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_90 = FUN_00f309b0(&LAB_00f23b78,1);
  FUN_00f30e70(local_90,L"components",local_a0);
  local_30 = FUN_00f309b0(&LAB_00f23b78,1);
  FUN_00f30e70(local_30,L"graph",local_90);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00f2d260(local_30,&local_e8,2);
  (**(code **)(*local_20 + 0x60))(local_20,local_e8);
  (**(code **)(*local_20 + 0x100))(local_20,param_2);
  FUN_00410f20(local_20);
  local_38 = local_b0;
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  FUN_00414480(&local_e8);
  FUN_00419430(&local_70,&DAT_004210c0);
  FUN_00414560(&local_68,4);
  return local_38;
}

