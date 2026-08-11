/* Ghidra address: 0172f660 */
/* Ghidra symbol: FUN_0172f660 */


int FUN_0172f660(longlong *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  ushort *puVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  int local_9c;
  int local_98;
  undefined2 local_92;
  int local_90 [2];
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  byte local_3d;
  int local_3c;
  undefined8 local_38;
  char local_29;
  
  local_80 = 0;
  local_78 = 0;
  local_70[0] = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  (**(code **)(*param_1 + 0x78))(param_1,0);
  (**(code **)(*param_1 + 0x78))(param_1,0);
  (**(code **)(*param_1 + 0x78))(param_1,L"TINA Models");
  (**(code **)(*param_1 + 0x78))(param_1,0);
  local_3c = 0;
  local_3d = 0;
  FUN_00414480(&local_48);
  local_38 = FUN_0172a2b0(&DAT_01728b68,1,*(undefined8 *)PTR_DAT_02001f18);
  iVar9 = (int)*(short *)PTR_DAT_02004a38;
  local_9c = 1;
  if (0 < iVar9) {
    do {
      iVar2 = local_9c;
      local_29 = '\0';
      puVar5 = (undefined2 *)FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,local_9c);
      cVar1 = FUN_0172e0a0(*puVar5);
      if (cVar1 != '\0') {
        lVar6 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,iVar2);
        uVar10 = (uint)*(byte *)(lVar6 + 0xb6);
        local_98 = 0;
        if (-1 < (int)(uVar10 - 1)) {
          do {
            local_92 = (undefined2)local_9c;
            lVar6 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,local_92);
            uVar7 = FUN_01d3a410(*(undefined8 *)PTR_DAT_02001b18,
                                 *(short *)(lVar6 + 0x9e) + (short)local_98);
            puVar5 = (undefined2 *)FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,local_92);
            FUN_0172f400(auStack_d8,uVar7,*puVar5);
            local_98 = local_98 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      puVar8 = (ushort *)FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,local_9c);
      if ((9999 < *puVar8) && (local_29 == '\0')) {
        FUN_01d3a7a0(*(undefined8 *)PTR_DAT_020036c8,&local_58,local_9c,
                     *(undefined8 *)PTR_DAT_02001f18);
        iVar2 = FUN_004170c0(&DAT_0172fb50,local_58,1);
        FUN_00416dc0(&local_60,local_58,iVar2 + 1,0xff);
        cVar1 = FUN_004170c0(&DAT_0172fb60,local_60,1);
        if (cVar1 == '\0') {
          FUN_00414b50(&local_50,local_60);
        }
        else {
          iVar2 = FUN_004170c0(&DAT_0172fb50,local_58,1);
          iVar3 = FUN_004170c0(&DAT_0172fb60,local_58,1);
          iVar4 = FUN_004170c0(&DAT_0172fb50,local_58,1);
          FUN_00416dc0(&local_50,local_58,iVar2 + 1,(iVar3 - iVar4) + -1);
        }
        local_3c = local_3c + 1;
        if (local_3d < 4) {
          local_3d = local_3d + 1;
          iVar2 = 0;
          if (local_50 != 0) {
            iVar2 = *(int *)(local_50 + -4);
          }
          FUN_005b85d0(local_70,&DAT_0172fb70,0x1e - iVar2);
          local_b8 = local_70[0];
          FUN_00416cd0(&local_48,3,local_48,local_50);
        }
        else {
          (**(code **)(*param_1 + 0x78))(param_1,local_48);
          local_3d = 1;
          iVar2 = 0;
          if (local_50 != 0) {
            iVar2 = *(int *)(local_50 + -4);
          }
          FUN_005b85d0(&local_78,&DAT_0172fb70,0x1e - iVar2);
          FUN_00416ba0(&local_48,local_50,local_78);
        }
      }
      local_9c = local_9c + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  FUN_00410f20(local_38);
  (**(code **)(*param_1 + 0x78))(param_1,local_48);
  (**(code **)(*param_1 + 0x78))(param_1,0);
  local_90[0] = local_3c;
  local_88 = 0;
  FUN_00442f70(&local_80,L"#Number of TINA Models : %d",local_90,0);
  (**(code **)(*param_1 + 0x78))(param_1,local_80);
  FUN_00414560(&local_80,3);
  FUN_00414560(&local_60,4);
  return local_3c;
}

