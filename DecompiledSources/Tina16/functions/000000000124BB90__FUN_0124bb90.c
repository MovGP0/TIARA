/* Ghidra address: 0124bb90 */
/* Ghidra symbol: FUN_0124bb90 */


void FUN_0124bb90(undefined4 param_1,longlong *param_2,longlong *param_3,char param_4,
                 undefined8 param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  short sVar4;
  short sVar5;
  char cVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  ulonglong in_stack_fffffffffffffed0;
  undefined4 uVar12;
  longlong *plVar13;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  byte local_d2;
  int local_d0;
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
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined4 local_52;
  char local_4e;
  undefined8 local_4d;
  undefined8 uStack_45;
  undefined4 uStack_3d;
  undefined1 uStack_39;
  int local_38;
  int local_34;
  longlong *local_30;
  
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70[0] = 0;
  local_30 = (longlong *)0x0;
  local_60 = 0;
  FUN_00414610(param_5);
  if (param_4 == '\0') {
    lVar7 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,param_1);
    local_d2 = *(byte *)(lVar7 + 0xbb);
    if (local_d2 == 0) {
      lVar7 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,param_1);
      local_d2 = *(byte *)(lVar7 + 0xb5);
      lVar7 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,param_1);
      local_d8 = *(int *)(lVar7 + 0x9a);
    }
    else {
      lVar7 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,param_1);
      local_d8 = *(int *)(lVar7 + 0xb7);
    }
  }
  else {
    lVar7 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,param_1);
    local_d2 = *(byte *)(lVar7 + 0xb5);
    lVar7 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,param_1);
    local_d8 = *(int *)(lVar7 + 0x9a);
  }
  local_dc = -1;
  lVar7 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,param_1);
  iVar8 = (int)*(short *)(lVar7 + 0x81);
  lVar7 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,param_1);
  iVar9 = (int)*(short *)(lVar7 + 0x83);
  local_34 = 0;
  local_38 = 0;
  cVar6 = '\x01';
  while (local_dc < (int)(uint)local_d2) {
    local_34 = local_34 + iVar8;
    local_38 = local_38 + iVar9;
    if (cVar6 == '\0') {
      in_stack_fffffffffffffed0 = CONCAT44((int)(in_stack_fffffffffffffed0 >> 0x20),1);
      FUN_01243890(local_70,param_2,param_3,local_e0,local_e4,local_34,local_38,
                   in_stack_fffffffffffffed0,0x8000);
    }
    local_e0 = local_34;
    local_e4 = local_38;
    local_dc = local_dc + 1;
    if (local_dc < (int)(uint)local_d2) {
      puVar1 = (undefined4 *)
               (*(longlong *)PTR_DAT_020033c8 + -5 + (longlong)(local_d8 + local_dc) * 5);
      uVar12 = *puVar1;
      local_4e = *(char *)(puVar1 + 1);
      local_52._0_2_ = (short)uVar12;
      iVar8 = (int)(short)local_52;
      local_52._2_2_ = (short)((uint)uVar12 >> 0x10);
      iVar9 = (int)local_52._2_2_;
      local_52 = uVar12;
      cVar6 = local_4e;
    }
  }
  lVar7 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,param_1);
  iVar8 = *(int *)(lVar7 + 0xaf);
  local_dc = 0;
  while( true ) {
    uVar12 = (undefined4)(in_stack_fffffffffffffed0 >> 0x20);
    lVar7 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,param_1);
    if ((int)(uint)*(byte *)(lVar7 + 0xb3) <= local_dc) break;
    local_34 = 0;
    local_38 = 0;
    puVar2 = (undefined8 *)
             (*(longlong *)PTR_DAT_02001338 + -0x15 + (longlong)(iVar8 + local_dc) * 0x15);
    uVar3 = *puVar2;
    uStack_45 = puVar2[1];
    uStack_3d = *(undefined4 *)(puVar2 + 2);
    uStack_39 = *(undefined1 *)((longlong)puVar2 + 0x14);
    local_4d._0_1_ = (char)uVar3;
    cVar6 = (char)local_4d;
    local_4d._1_2_ = (short)((ulonglong)uVar3 >> 8);
    sVar4 = local_4d._1_2_;
    local_4d._3_2_ = (short)((ulonglong)uVar3 >> 0x18);
    sVar5 = local_4d._3_2_;
    local_4d = uVar3;
    FUN_004169a0(&local_60,(longlong)&local_4d + 5);
    local_34 = local_34 + sVar4;
    local_38 = local_38 + sVar5;
    if (cVar6 == '\0') {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\x02';
    }
    if (cVar6 == '\0') {
      local_34 = local_34 + 2;
    }
    else if (cVar6 == '\x02') {
      local_34 = local_34 + -2;
    }
    uVar11 = 0x3feccccc;
    in_stack_fffffffffffffed0 = CONCAT44(uVar12,0x808000);
    plVar13 = param_3;
    FUN_01244970(&local_60,&local_34,&local_38,0,cVar6,1,0x3feccccccccccccd,
                 in_stack_fffffffffffffed0,param_2,param_3);
    in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffffff00000000;
    FUN_012444f0(&local_78,param_2,param_3,local_60,L"Arial",local_34,CONCAT44(uVar11,local_38),
                 in_stack_fffffffffffffed0,10,(ulonglong)plVar13 & 0xffffffffffffff00,0,0x808000);
    local_dc = local_dc + 1;
  }
  lVar7 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,param_1);
  uVar10 = (uint)*(byte *)(lVar7 + 0xb4);
  local_d0 = 0;
  if (-1 < (int)(uVar10 - 1)) {
    do {
      lVar7 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,param_1);
      sVar4 = *(short *)(*(longlong *)PTR_DAT_02003718 + -5 +
                        (longlong)(*(int *)(lVar7 + 0x96) + local_d0) * 5);
      lVar7 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,param_1);
      sVar5 = *(short *)(*(longlong *)PTR_DAT_02003718 + -3 +
                        (longlong)(*(int *)(lVar7 + 0x96) + local_d0) * 5);
      (**(code **)(*param_2 + 0x148))(param_2,&local_30,&DAT_0124c4e0);
      (**(code **)(*param_3 + 0x98))(param_3,&local_80,local_30);
      (**(code **)(*local_30 + 0x108))(local_30,L"type",&DAT_0124c50c);
      FUN_0043f750(&local_90,(int)sVar4);
      FUN_0043f750(&local_98,(int)sVar5);
      FUN_00416cd0(&local_88,3,local_90,&DAT_0124c53c,local_98);
      (**(code **)(*local_30 + 0x108))(local_30,L"position",local_88);
      (**(code **)(*local_30 + 0x108))(local_30,L"length",&DAT_0124c50c);
      (**(code **)(*local_30 + 0x108))(local_30,&DAT_0124c568,&DAT_0124c50c);
      local_d0 = local_d0 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  (**(code **)(*param_2 + 0x148))(param_2,&local_30,L"hotzone");
  (**(code **)(*param_3 + 0x98))(param_3,&local_a0,local_30);
  lVar7 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,param_1);
  FUN_0043f750(&local_b0,
               (longlong)
               *(short *)(*(longlong *)PTR_DAT_020015b0 + -4 + (longlong)*(int *)(lVar7 + 0x85) * 4)
              );
  FUN_0043f750(&local_b8,
               (longlong)
               *(short *)(*(longlong *)PTR_DAT_020015b0 + -2 + (longlong)*(int *)(lVar7 + 0x85) * 4)
              );
  FUN_0043f750(&local_c0,
               (longlong)
               *(short *)(*(longlong *)PTR_DAT_020015b0 + -4 +
                         (longlong)(*(int *)(lVar7 + 0x85) + 1) * 4));
  FUN_0043f750(&local_c8,
               (longlong)
               *(short *)(*(longlong *)PTR_DAT_020015b0 + -2 +
                         (longlong)(*(int *)(lVar7 + 0x85) + 1) * 4));
  FUN_00416cd0(&local_a8,7,local_b0,&DAT_0124c53c,local_b8,&DAT_0124c53c,local_c0,&DAT_0124c53c,
               local_c8);
  (**(code **)(*local_30 + 0x108))(local_30,L"points",local_a8);
  FUN_00414560(&local_c8,5);
  FUN_0041b800(&local_a0);
  FUN_00414560(&local_98,3);
  FUN_0041b800(&local_80);
  FUN_00417840(&local_78,&LAB_00b9fca0,2);
  FUN_00414480(&local_60);
  FUN_0041b800(&local_30);
  FUN_00414480(&param_5);
  return;
}

