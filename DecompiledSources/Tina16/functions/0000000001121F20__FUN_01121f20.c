/* Ghidra address: 01121f20 */
/* Ghidra symbol: FUN_01121f20 */


void FUN_01121f20(wchar_t *param_1)

{
  undefined1 *puVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  byte *pbVar12;
  bool bVar13;
  uint local_c8;
  int local_c4;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  byte local_90 [48];
  undefined8 local_60 [2];
  short local_4c [2];
  short local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_60[0] = 0;
  local_30 = 0;
  local_38 = 0;
  FUN_00c0fae0(*(undefined8 *)(param_1 + 0x404));
  pwVar10 = (wchar_t *)(ulonglong)*(uint *)(param_1 + 0x474);
  (**(code **)(**(longlong **)(param_1 + 0x470) + 0x2d0))
            (*(longlong **)(param_1 + 0x470),pwVar10,param_1 + 0x480);
  pbVar2 = *(byte **)(param_1 + 0x480);
  local_c8 = 1;
  pbVar12 = PTR_DAT_02001408;
  do {
    if (local_c8 - 8 < 8) {
      uVar9 = (int)CONCAT71((int7)((ulonglong)pwVar10 >> 8),1) << ((byte)(local_c8 - 8) & 0x1f);
      pwVar10 = (wchar_t *)(ulonglong)uVar9;
      bVar13 = (uVar9 & 0xf) != 0;
    }
    else {
      bVar13 = false;
    }
    if (bVar13) {
      if (local_c8 == 8) {
        *(undefined1 *)((longlong)param_1 + 0x9ef) = 8;
        param_1[0x4f8] = L'\0';
        param_1[0x4f9] = L'\0';
        param_1[0x4fa] = L'\0';
        param_1[0x4fb] = L'\0';
        uVar7 = FUN_004b6930(&PTR_FUN_00478280,1);
        *(undefined8 *)(param_1 + 0x4fc) = uVar7;
        lVar11 = FUN_017e1bd0(&DAT_017df868,1,0,0,0,0,0);
        *(longlong *)(param_1 + 0x6f0) = lVar11;
        *(undefined8 *)(lVar11 + 0x640) = *(undefined8 *)(PTR_DAT_02004010 + 0x2b8);
        *(undefined4 *)(lVar11 + 0x648) = 100;
        *(undefined1 *)(lVar11 + 0x64c) = 0;
        FUN_01695540(lVar11,*(undefined8 *)(param_1 + 0x4fc));
        FUN_010c2250(local_60,0);
        FUN_00414ad0(param_1 + 0x5b4,local_60[0]);
        *(undefined1 *)(param_1 + 0x5b8) = 1;
        FUN_00414ad0(param_1 + 0x5ac,L"noname.exc");
        if (*pbVar2 == 8) {
          uVar6 = FUN_010d7540(*(undefined8 *)(*(longlong *)(param_1 + 0x480) + 9));
          *(undefined4 *)(param_1 + 0x47c) = uVar6;
        }
        else {
          uVar6 = FUN_010d7540(*(undefined8 *)(param_1 + 0x4fc));
          *(undefined4 *)(param_1 + 0x47c) = uVar6;
        }
        *(bool *)(*(longlong *)(param_1 + 0x6f0) + 0x530) = *(int *)(param_1 + 0x47c) == 1;
        pwVar10 = (wchar_t *)(ulonglong)*(uint *)(param_1 + 0x47c);
        FUN_01125540(param_1,pwVar10);
      }
      else if (local_c8 == 9) {
        *(undefined1 *)(param_1 + 0x508) = 9;
        *(undefined4 *)((longlong)param_1 + 0xa11) = 0;
        *(undefined8 *)((longlong)param_1 + 0xa19) = 0;
        uVar7 = FUN_004b6930(&PTR_FUN_00478280,1);
        *(undefined8 *)((longlong)param_1 + 0xa21) = uVar7;
        *(undefined4 *)((longlong)param_1 + 0xa15) = 0;
        *(undefined1 *)((longlong)param_1 + 0xa29) = 0;
        pwVar10 = L"noname.pwl";
        FUN_00414ad0(param_1 + 0x5b0,L"noname.pwl");
      }
      else if (local_c8 == 10) {
        *(undefined1 *)((longlong)param_1 + 0xa31) = 10;
        *(undefined1 *)(param_1 + 0x519) = 0;
        *(undefined8 *)((longlong)param_1 + 0xa33) = 0;
        *(undefined4 *)((longlong)param_1 + 0xa3b) = 0;
        *(undefined8 *)((longlong)param_1 + 0xa3f) = 0;
        *(undefined8 *)((longlong)param_1 + 0xa47) = 0x3ff0000000000000;
      }
      else {
        puVar1 = (undefined1 *)((longlong)param_1 + (longlong)(int)local_c8 * 0x21 + 0x8e7);
        *puVar1 = (char)local_c8;
        puVar1[1] = 0;
        puVar1[2] = 1;
        *(undefined8 *)(puVar1 + 3) = 0x3eb0c6f7a0b5ed8d;
        *(undefined8 *)(puVar1 + 0xb) = 0x416312d000000000;
        *(undefined4 *)(puVar1 + 0x13) = 0;
        *(undefined8 *)(puVar1 + 0x17) = 0;
      }
    }
    else {
      puVar1 = (undefined1 *)((longlong)param_1 + (longlong)(int)local_c8 * 0x21 + 0x8e7);
      *puVar1 = (char)local_c8;
      if (local_c8 == **(byte **)(param_1 + 0x480)) {
        *(undefined2 *)(puVar1 + 0x11) = *(undefined2 *)(*(byte **)(param_1 + 0x480) + 0x11);
      }
      else {
        *(ushort *)(puVar1 + 0x11) = (ushort)*pbVar12 * 8;
      }
      uVar7 = FUN_00409570(*(undefined2 *)(puVar1 + 0x11));
      *(undefined8 *)(puVar1 + 1) = uVar7;
      FUN_016d7ec0(uVar7,*puVar1);
      uVar7 = FUN_00409570((ulonglong)*pbVar12 << 3);
      *(undefined8 *)(puVar1 + 9) = uVar7;
      uVar9 = (uint)*pbVar12;
      local_c4 = 0;
      if (-1 < (int)(uVar9 - 1)) {
        do {
          FUN_01d3a230(*(longlong *)(puVar1 + 1),*(undefined8 *)(puVar1 + 9),local_c4,
                       *(undefined8 *)(*(longlong *)(puVar1 + 1) + (longlong)local_c4 * 8));
          local_c4 = local_c4 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      uVar7 = FUN_00409570((ulonglong)*pbVar12 << 4);
      *(undefined8 *)(param_1 + (longlong)(int)local_c8 * 4 + 0x568) = uVar7;
      pwVar10 = param_1;
    }
    local_c8 = local_c8 + 1;
    pbVar12 = pbVar12 + 1;
  } while (local_c8 != 0xf);
  FUN_010dba00(local_90);
  iVar5 = FUN_00414f50(local_90,&DAT_01123096,(ulonglong)local_90[0] + 1);
  if (iVar5 == 0) {
    FUN_00416ba0(&local_30,*(undefined8 *)PTR_DAT_020049a0,L"\\UNITRAIN.EXC");
  }
  else {
    FUN_00416ba0(&local_30,*(undefined8 *)PTR_DAT_020049a0,L"\\DEFAULT.EXC");
  }
  bVar4 = *pbVar2;
  if (bVar4 == 8) {
    if (*(longlong *)(pbVar2 + 9) == 0) {
      cVar3 = FUN_00440a20(local_30,1);
      if (cVar3 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x4fc) + 0xd8))
                  (*(longlong **)(param_1 + 0x4fc),local_30);
        FUN_00414ad0(param_1 + 0x5ac,local_30);
      }
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x4fc) + 0x10))
                (*(longlong **)(param_1 + 0x4fc),*(longlong *)(pbVar2 + 9));
    }
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x404) + 0x4e8) + 0x10))
              (*(longlong **)(*(longlong *)(param_1 + 0x404) + 0x4e8),
               *(undefined8 *)(param_1 + 0x4fc));
    FUN_01126b30(param_1);
    lVar11 = *(longlong *)(param_1 + 0x6f0);
    *(undefined8 *)(lVar11 + 0x640) = *(undefined8 *)(pbVar2 + 0x11);
    *(undefined4 *)(lVar11 + 0x648) = *(undefined4 *)(pbVar2 + 0x19);
    *(byte *)(lVar11 + 0x64c) = pbVar2[0x1d];
  }
  else if (bVar4 == 9) {
    cVar3 = FUN_00440a20(local_30,1);
    if (cVar3 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x4fc) + 0xd8))
                (*(longlong **)(param_1 + 0x4fc),local_30);
      FUN_00414ad0(param_1 + 0x5ac,local_30);
    }
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x404) + 0x4e8) + 0x10))
              (*(longlong **)(*(longlong *)(param_1 + 0x404) + 0x4e8),
               *(undefined8 *)(param_1 + 0x4fc));
    FUN_01126b30(param_1);
    if (*(longlong *)(pbVar2 + 0x11) != 0) {
      (**(code **)(**(longlong **)((longlong)param_1 + 0xa21) + 0x10))
                (*(longlong **)((longlong)param_1 + 0xa21),*(longlong *)(pbVar2 + 0x11));
    }
    (**(code **)(**(longlong **)((longlong)param_1 + 0xa21) + 0x38))
              (*(longlong **)((longlong)param_1 + 0xa21),&local_98);
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x404) + 0x4e8) + 0x60))
              (*(longlong **)(*(longlong *)(param_1 + 0x404) + 0x4e8),local_98);
    FUN_01127350(param_1);
  }
  else if (bVar4 == 10) {
    cVar3 = FUN_00440a20(local_30,1);
    if (cVar3 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x4fc) + 0xd8))
                (*(longlong **)(param_1 + 0x4fc),local_30);
      FUN_00414ad0(param_1 + 0x5ac,local_30);
    }
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x404) + 0x4e8) + 0x10))
              (*(longlong **)(*(longlong *)(param_1 + 0x404) + 0x4e8),
               *(undefined8 *)(param_1 + 0x4fc));
    FUN_01126b30(param_1);
    FUN_004167d0(&local_a0,*(undefined8 *)(pbVar2 + 2));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x41c),local_a0);
    bVar4 = pbVar2[1] & 0x3f;
    if (bVar4 == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x424) + 0x268))(*(longlong **)(param_1 + 0x424),1);
    }
    else if (bVar4 == 1) {
      (**(code **)(**(longlong **)(param_1 + 0x428) + 0x268))(*(longlong **)(param_1 + 0x428),1);
    }
    else if (bVar4 == 2) {
      (**(code **)(**(longlong **)(param_1 + 0x42c) + 0x268))(*(longlong **)(param_1 + 0x42c),1);
    }
    (**(code **)(**(longlong **)(param_1 + 0x430) + 0x268))
              (*(longlong **)(param_1 + 0x430),(pbVar2[1] & 0x80) != 0);
    (**(code **)(**(longlong **)(param_1 + 0x444) + 0x268))
              (*(longlong **)(param_1 + 0x444),(pbVar2[1] & 0x40) != 0);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x41c),&local_a8);
    cVar3 = FUN_00440a20(local_a8,1);
    if (cVar3 != '\0') {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x41c),&local_b0);
      FUN_011143a0(*(undefined8 *)(param_1 + 0x3ec),local_b0);
      FUN_01112a40(*(undefined8 *)(param_1 + 0x3ec));
    }
    (**(code **)(**(longlong **)(param_1 + 0x438) + 0x268))
              (*(longlong **)(param_1 + 0x438),*(longlong *)(pbVar2 + 0xe) != 0);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x43c),*(undefined8 *)(pbVar2 + 0x16));
  }
  else if (bVar4 == 0xb) {
    cVar3 = FUN_00440a20(local_30,1);
    if (cVar3 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x4fc) + 0xd8))
                (*(longlong **)(param_1 + 0x4fc),local_30);
      FUN_00414ad0(param_1 + 0x5ac,local_30);
    }
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x404) + 0x4e8) + 0x10))
              (*(longlong **)(*(longlong *)(param_1 + 0x404) + 0x4e8),
               *(undefined8 *)(param_1 + 0x4fc));
    FUN_01126b30(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x460) + 0x268))
              (*(longlong **)(param_1 + 0x460),pbVar2[1]);
    (**(code **)(**(longlong **)(param_1 + 0x468) + 0x268))
              (*(longlong **)(param_1 + 0x468),pbVar2[2]);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x450),*(undefined8 *)(pbVar2 + 3));
    FUN_00b90440(*(undefined8 *)(param_1 + 0x454),*(undefined8 *)(pbVar2 + 0xb));
  }
  else {
    cVar3 = FUN_00440a20(local_30,1);
    if (cVar3 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x4fc) + 0xd8))
                (*(longlong **)(param_1 + 0x4fc),local_30);
      FUN_00414ad0(param_1 + 0x5ac,local_30);
    }
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x404) + 0x4e8) + 0x10))
              (*(longlong **)(*(longlong *)(param_1 + 0x404) + 0x4e8),
               *(undefined8 *)(param_1 + 0x4fc));
    FUN_01126b30(param_1);
    if (*(longlong *)(pbVar2 + 1) != 0) {
      FUN_00409a70(*(longlong *)(pbVar2 + 1),
                   *(undefined8 *)((longlong)param_1 + (ulonglong)*pbVar2 * 0x21 + 0x8e8),
                   *(undefined2 *)(pbVar2 + 0x11));
      uVar9 = (uint)(byte)PTR_DAT_02001408[(ulonglong)*pbVar2 - 1];
      local_c8 = 0;
      if (-1 < (int)(uVar9 - 1)) {
        do {
          lVar11 = (longlong)(int)local_c8;
          FUN_004095f0(*(undefined8 *)
                        (*(longlong *)((longlong)param_1 + (ulonglong)*pbVar2 * 0x21 + 0x8f0) +
                        lVar11 * 8));
          iVar5 = FUN_00414ce0(*(undefined8 *)(*(longlong *)(pbVar2 + 9) + lVar11 * 8));
          uVar7 = FUN_00409570(iVar5 + 1);
          *(undefined8 *)
           (*(longlong *)((longlong)param_1 + (ulonglong)*pbVar2 * 0x21 + 0x8f0) + lVar11 * 8) =
               uVar7;
          uVar7 = *(undefined8 *)(*(longlong *)(pbVar2 + 9) + lVar11 * 8);
          uVar6 = FUN_00414ce0(uVar7);
          FUN_00442450(*(undefined8 *)
                        (*(longlong *)((longlong)param_1 + (ulonglong)*pbVar2 * 0x21 + 0x8f0) +
                        lVar11 * 8),uVar7,uVar6);
          local_c8 = local_c8 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
  }
  FUN_00b0b020(*(undefined8 *)(param_1 + 0x400),0);
  bVar4 = **(byte **)(param_1 + 0x480);
  if (bVar4 < 7) {
    if (bVar4 == 6) {
      FUN_0082a6c0(*(undefined8 *)(param_1 + 0x3a8),1);
      FUN_01123730(param_1,0x23e,6);
    }
    else if (bVar4 < 4) {
      if (bVar4 == 3) {
        FUN_0082a6c0(*(undefined8 *)(param_1 + 0x3ac),1);
        FUN_01123730(param_1,0x233,3);
      }
      else if (bVar4 == 1) {
        FUN_0082a6c0(*(undefined8 *)(param_1 + 0x394),1);
        FUN_01123730(param_1,0x22b,1);
      }
      else if (bVar4 == 2) {
        FUN_0082a6c0(*(undefined8 *)(param_1 + 0x398),1);
        FUN_01123730(param_1,0x23c,2);
      }
    }
    else if (bVar4 == 4) {
      FUN_0082a6c0(*(undefined8 *)(param_1 + 0x39c),1);
      FUN_016da900(*(undefined8 *)(param_1 + 0x4b6));
      FUN_01123730(param_1,0x230,4);
    }
    else if (bVar4 == 5) {
      FUN_0082a6c0(*(undefined8 *)(param_1 + 0x3a4),1);
      FUN_01123730(param_1,0x240,5);
    }
  }
  else if (bVar4 < 10) {
    if (bVar4 == 9) {
      FUN_0082a6c0(*(undefined8 *)(param_1 + 0x3d8),1);
      FUN_01123730(param_1,0xffffffff,9);
    }
    else if (bVar4 == 7) {
      FUN_0082a6c0(*(undefined8 *)(param_1 + 0x3a0),1);
      FUN_01123730(param_1,0x22d,7);
    }
    else if (bVar4 == 8) {
      FUN_0082a6c0(*(undefined8 *)(param_1 + 0x3b0),1);
      FUN_01123730(param_1,0xffffffff,8);
    }
  }
  else if (bVar4 == 10) {
    FUN_0082a6c0(*(undefined8 *)(param_1 + 1000),1);
    FUN_01123730(param_1,0xffffffff,10);
  }
  else if (bVar4 == 0xb) {
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0x448),1);
    FUN_01123730(param_1,0xffffffff,0xb);
  }
  if (*PTR_DAT_020039a8 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x394) + 0x128))(*(longlong **)(param_1 + 0x394),0);
    (**(code **)(**(longlong **)(param_1 + 0x398) + 0x128))(*(longlong **)(param_1 + 0x398),0);
    (**(code **)(**(longlong **)(param_1 + 0x39c) + 0x128))(*(longlong **)(param_1 + 0x39c),0);
    (**(code **)(**(longlong **)(param_1 + 0x3a0) + 0x128))(*(longlong **)(param_1 + 0x3a0),0);
    (**(code **)(**(longlong **)(param_1 + 0x3a4) + 0x128))(*(longlong **)(param_1 + 0x3a4),0);
    (**(code **)(**(longlong **)(param_1 + 0x3a8) + 0x128))(*(longlong **)(param_1 + 0x3a8),0);
    (**(code **)(**(longlong **)(param_1 + 0x3ac) + 0x128))(*(longlong **)(param_1 + 0x3ac),0);
    (**(code **)(**(longlong **)(param_1 + 0x3d8) + 0x128))(*(longlong **)(param_1 + 0x3d8),0);
    (**(code **)(**(longlong **)(param_1 + 0x3b0) + 0x128))(*(longlong **)(param_1 + 0x3b0),0);
    (**(code **)(**(longlong **)(param_1 + 1000) + 0x128))(*(longlong **)(param_1 + 1000),0);
    (**(code **)(**(longlong **)(param_1 + 0x448) + 0x128))(*(longlong **)(param_1 + 0x448),0);
    lVar11 = *(longlong *)(param_1 + 0x3cc);
    FUN_0082bc30(lVar11,0);
    *(undefined4 *)(lVar11 + 0x4f0) = 0;
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_b8,0x130);
    FUN_0064de00(lVar11,local_b8);
    FUN_0082ba70(lVar11,0);
    FUN_0082bff0(lVar11,0xffffffff);
    lVar11 = *(longlong *)(param_1 + 0x400);
    FUN_008483b0(lVar11,1);
    FUN_00848a30(lVar11,0);
    *(undefined8 *)PTR_DAT_02005518 = *(undefined8 *)(param_1 + 0x470);
    *PTR_DAT_02002cb8 = 2;
    FUN_00849e90(lVar11,local_4c,*(undefined4 *)(lVar11 + 0x4a8),*(undefined4 *)(lVar11 + 0x4ac));
    local_3c = CONCAT22(local_48 + 7,local_4c[0] + 10);
    uVar7 = FUN_0065b870(param_1);
    lVar11 = (longlong)local_3c;
    thunk_FUN_0413e052(uVar7,0x202,0,lVar11);
    uVar7 = FUN_0065b870(param_1);
    thunk_FUN_0413e052(uVar7,0x201,0,lVar11);
  }
  FUN_0064cf60(param_1,0x409);
  *(undefined1 *)(param_1 + 0x5a7) = 1;
  if (*PTR_DAT_020039a8 == '\0') {
    uVar7 = FUN_01b23030();
    (**(code **)(**(longlong **)(param_1 + 0x448) + 0x128))
              (*(longlong **)(param_1 + 0x448),
               CONCAT71((int7)((ulonglong)uVar7 >> 8),(char)uVar7 == '\0') & 0xffffffff);
  }
  puVar8 = (undefined8 *)FUN_01c8a3c0(*(undefined8 *)PTR_DAT_02004e40,0);
  FUN_00414b50(&local_38,*puVar8);
  FUN_00441820(&local_c0,local_38);
  if (local_c0 == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x444) + 0x268))(*(longlong **)(param_1 + 0x444),1);
  }
  FUN_00414560(&local_c0,2);
  FUN_00414560(&local_b0,2);
  FUN_00414560(&local_a0,2);
  FUN_00414480(local_60);
  FUN_00414560(&local_38,2);
  return;
}

