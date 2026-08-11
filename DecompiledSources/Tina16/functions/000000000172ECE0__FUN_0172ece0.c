/* Ghidra address: 0172ece0 */
/* Ghidra symbol: FUN_0172ece0 */


void FUN_0172ece0(byte *param_1,byte *param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  ushort *puVar7;
  longlong lVar8;
  uint uVar9;
  byte *pbVar10;
  undefined1 auStack_5e8 [32];
  uint local_5c8;
  int local_5ac;
  int local_5a8;
  int local_5a4;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined1 local_550 [128];
  undefined1 local_4d0 [256];
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined1 local_3b3 [121];
  undefined1 local_33a [121];
  undefined1 local_2c1 [121];
  undefined8 local_248;
  uint *local_240;
  byte local_231 [256];
  char local_131;
  undefined8 local_130;
  byte local_128 [264];
  
  local_5a0 = 0;
  local_590 = 0;
  local_598 = 0;
  local_580 = 0;
  local_588 = 0;
  local_578 = 0;
  local_570 = 0;
  local_568 = 0;
  local_560 = 0;
  local_558 = 0;
  local_3c8 = 0;
  local_3d0 = 0;
  local_3c0 = 0;
  local_248 = 0;
  lVar8 = (ulonglong)*param_1 + 1;
  pbVar10 = local_231;
  for (; lVar8 != 0; lVar8 = lVar8 + -1) {
    *pbVar10 = *param_1;
    param_1 = param_1 + 1;
    pbVar10 = pbVar10 + 1;
  }
  lVar8 = (ulonglong)*param_2 + 1;
  pbVar10 = local_128;
  for (; lVar8 != 0; lVar8 = lVar8 + -1) {
    *pbVar10 = *param_2;
    param_2 = param_2 + 1;
    pbVar10 = pbVar10 + 1;
  }
  FUN_004169a0(&local_3c0,local_128);
  local_130 = FUN_0172a2b0(&DAT_01728b68,1,local_3c0);
  local_5a8 = (int)*(short *)PTR_DAT_02004a38;
  local_5ac = 1;
  if (0 < local_5a8) {
    do {
      local_131 = '\0';
      lVar8 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,local_5ac);
      uVar9 = (uint)*(byte *)(lVar8 + 0xb6);
      local_5a4 = 0;
      if (-1 < (int)(uVar9 - 1)) {
        do {
          iVar2 = local_5ac;
          lVar8 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,local_5ac);
          uVar5 = FUN_01d3a410(*(undefined8 *)PTR_DAT_02001b18,
                               *(short *)(lVar8 + 0x9e) + (short)local_5a4);
          puVar6 = (undefined2 *)FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,iVar2);
          FUN_0172e7c0(auStack_5e8,local_5a4,uVar5,*puVar6);
          local_5a4 = local_5a4 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar7 = (ushort *)FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,local_5ac);
      if ((9999 < *puVar7) && (local_131 == '\0')) {
        FUN_004169a0(&local_3d0,local_128);
        FUN_01d3a7a0(*(undefined8 *)PTR_DAT_020036c8,&local_3c8,local_5ac,local_3d0);
        FUN_00416910(local_4d0,local_3c8,0xff);
        FUN_00415020(local_33a,local_4d0,0x78);
        FUN_004169a0(&local_558,local_33a);
        iVar2 = FUN_004170c0(&DAT_0172f2dc,local_558,1);
        FUN_004151b0(local_550,local_33a,iVar2 + 1,0xff);
        FUN_00415020(local_3b3,local_550,0x78);
        FUN_004169a0(&local_560,local_3b3);
        cVar1 = FUN_004170c0(&DAT_0172f2ec,local_560,1);
        if (cVar1 == '\0') {
          FUN_00415020(local_2c1,local_3b3,0x78);
        }
        else {
          FUN_004169a0(&local_568,local_33a);
          iVar2 = FUN_004170c0(&DAT_0172f2dc,local_568,1);
          FUN_004169a0(&local_570,local_33a);
          iVar3 = FUN_004170c0(&DAT_0172f2ec,local_570,1);
          FUN_004169a0(&local_578,local_33a);
          iVar4 = FUN_004170c0(&DAT_0172f2dc,local_578,1);
          FUN_004151b0(local_550,local_33a,iVar2 + 1,(iVar3 - iVar4) + -1);
          FUN_00415020(local_2c1,local_550,0x78);
        }
        FUN_004169a0(&local_588,local_2c1);
        FUN_0043e130(&local_580,local_588);
        FUN_00416910(local_4d0,local_580,0xff);
        cVar1 = FUN_0172e6e0(auStack_5e8,local_231,local_4d0);
        if (cVar1 != '\0') {
          local_240 = (uint *)FUN_00418560(0x20,&DAT_0170bbf8);
          *local_240 = (uint)*puVar7;
          uVar5 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,local_5ac);
          cVar1 = FUN_0172ec90(auStack_5e8,uVar5);
          if (cVar1 == '\0') {
            *(undefined1 *)((longlong)local_240 + 5) = 0xff;
          }
          else {
            *(undefined1 *)((longlong)local_240 + 5) = 0;
          }
          *(undefined1 *)(local_240 + 1) = 0;
          *(undefined2 *)((longlong)local_240 + 6) = 0;
          *(undefined1 *)(local_240 + 2) = 0;
          *(undefined1 *)((longlong)local_240 + 9) = 0;
          FUN_00414b50(&local_248,L"|Tina Macro");
          FUN_004169a0(&local_598,local_2c1);
          local_5c8 = (uint)*puVar7;
          FUN_0172e1a0(auStack_5e8,&local_590,local_598,0);
          FUN_00414ad0(local_240 + 4,local_590);
          FUN_004169a0(&local_5a0,local_2c1);
          FUN_00416ad0(&local_5a0,local_248);
          (**(code **)(*param_4 + 0x80))(param_4,local_5a0,local_240);
        }
      }
      local_5ac = local_5ac + 1;
      local_5a8 = local_5a8 + -1;
    } while (local_5a8 != 0);
  }
  FUN_00410f20(local_130);
  FUN_00414560(&local_5a0,10);
  FUN_00414560(&local_3d0,3);
  FUN_00414480(&local_248);
  return;
}

