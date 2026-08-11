/* Ghidra address: 013ad290 */
/* Ghidra symbol: FUN_013ad290 */


void FUN_013ad290(longlong *param_1,longlong param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  char *pcVar8;
  longlong lVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auStack_208 [32];
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  byte local_1c9;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 *local_1b0;
  undefined8 local_1a8;
  undefined1 *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined1 local_183;
  undefined1 local_182;
  undefined1 local_181;
  longlong local_180;
  undefined8 local_178;
  undefined8 local_170;
  int local_168;
  int local_164;
  longlong local_160;
  undefined8 local_157 [6];
  byte local_124;
  undefined1 local_e5 [182];
  byte local_2f;
  char local_29;
  
  local_1a0 = auStack_208;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1a8 = 0;
  local_1b0 = (undefined1 *)0x0;
  local_170 = 0;
  local_178 = 0;
  FUN_013ac900(&local_1b0,param_1,*(undefined8 *)PTR_DAT_02001f18);
  local_1e8 = local_1b0;
  FUN_00416cd0(&local_1a8,3,param_1[0x13],&DAT_013ad8b0);
  FUN_0064de00(param_2,local_1a8);
  FUN_01cfac60(param_1,local_e5);
  if (*PTR_DAT_020039a8 == '\0') {
    FUN_00848a70(*(undefined8 *)(param_2 + 0x6d0),param_3 + (uint)local_2f + 3);
    sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
    if ((sVar3 == 0x39) && (cVar1 = FUN_01d04d40(param_1), cVar1 != '\0')) {
      FUN_00848a70(*(longlong *)(param_2 + 0x6d0),
                   *(int *)(*(longlong *)(param_2 + 0x6d0) + 0x4e0) + 4);
    }
  }
  local_164 = 0;
  local_168 = 0;
  do {
    if ((int)(uint)local_2f <= local_164) {
      if (*PTR_DAT_020039a8 != '\0') {
        if (local_168 == 0) {
          FUN_0044d440();
        }
        FUN_00848a70(*(undefined8 *)(param_2 + 0x6d0),local_168);
        *(longlong **)(param_2 + 0x740) = param_1;
      }
      FUN_00414560(&local_1c8,5);
      FUN_00414560(&local_178,2);
      return;
    }
    if (*PTR_DAT_020039a8 == '\0') {
      puVar5 = (undefined8 *)FUN_01cfd090(param_1,local_164);
      puVar10 = local_157;
      for (lVar9 = 0xe; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar10 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar10 = puVar10 + 1;
      }
      *(undefined2 *)puVar10 = *(undefined2 *)puVar5;
      FUN_01cfd0f0(param_1,&local_178,local_164,*(undefined8 *)PTR_DAT_02001f18);
      lVar9 = FUN_0142fc60(local_124);
      local_180 = (**(code **)(lVar9 + 0x28))(lVar9,1,param_1,local_164);
      uVar2 = FUN_01cfdf80(param_1,local_164);
      *(undefined1 *)(local_180 + 0x39) = uVar2;
      uVar6 = FUN_00f42d60(param_2,local_178,local_180);
      if (local_124 < 8) {
        bVar11 = ((int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) << (local_124 & 0x1f) & 0x48U) != 0
        ;
      }
      else {
        bVar11 = false;
      }
      if (bVar11) {
        (**(code **)(*param_1 + 0x288))(param_1,&local_1c8);
        uVar6 = FUN_019a4600();
        cVar1 = FUN_013ad060(local_1c8,uVar6,&local_190,&local_198);
        if (cVar1 != '\0') {
          *(undefined1 *)(local_180 + 0x80) = 1;
          *(undefined8 *)(local_180 + 0x70) = local_190;
          *(undefined8 *)(local_180 + 0x78) = local_198;
        }
      }
    }
    else {
      puVar5 = (undefined8 *)FUN_01cfd090(param_1,local_164);
      puVar10 = local_157;
      for (lVar9 = 0xe; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar10 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar10 = puVar10 + 1;
      }
      *(undefined2 *)puVar10 = *(undefined2 *)puVar5;
      (**(code **)(*param_1 + 0x2d0))(param_1,local_164,&local_160);
      uVar6 = FUN_01cfd0f0(param_1,&local_178,local_164,*(undefined8 *)PTR_DAT_02001f18);
      if (local_124 < 8) {
        uVar4 = (int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) << (local_124 & 0x1f);
        bVar11 = (uVar4 & 0xf8) != 0;
        uVar7 = (ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar11);
      }
      else {
        uVar7 = 0;
        bVar11 = false;
      }
      if (bVar11) {
        if (local_124 < 8) {
          bVar11 = ((int)CONCAT71((int7)(uVar7 >> 8),1) << (local_124 & 0x1f) & 0xa0U) != 0;
        }
        else {
          bVar11 = false;
        }
        if (bVar11) {
          if (local_124 == 7) {
            local_1e8 = &local_182;
            local_1e0 = &local_183;
            lVar9 = FUN_01cfde70(param_1,local_164 + 1,0,&local_181);
            if (*(char *)(lVar9 + 0x2f) == '\0') goto LAB_013ad57b;
          }
          if (local_124 == 5) {
            local_1e8 = &local_182;
            local_1e0 = &local_183;
            pcVar8 = (char *)FUN_01cfde70(param_1,local_164 + 1,0,&local_181);
            if ((byte)(*pcVar8 - 8U) < 8) {
              bVar11 = ((int)CONCAT71((int7)((ulonglong)pcVar8 >> 8),1) << (*pcVar8 - 8U & 0x1f) &
                       0xfU) != 0;
            }
            else {
              bVar11 = false;
            }
            if (!bVar11) goto LAB_013ad57b;
          }
        }
        else {
LAB_013ad57b:
          local_29 = '\x01';
          local_1c9 = local_124;
          if (local_124 < 8 && (1 << (local_124 & 0x1f) & 0x48U) != 0) {
            if (local_124 == 3) {
              FUN_004167a0(&local_1b8,*(undefined8 *)(local_160 + 8));
              FUN_00b8f030(local_1b8);
            }
            else {
              FUN_004167a0(&local_1c0,*(undefined8 *)(local_160 + 8));
              FUN_00b8f030(local_1c0);
            }
          }
          if (local_29 != '\0') {
            local_1e8 = (undefined1 *)((ulonglong)local_1e8 & 0xffffffff00000000);
            FUN_01d082f0(param_1,&local_170,local_178,local_164 + 1);
            lVar9 = FUN_0142fc60(local_124);
            local_180 = (**(code **)(lVar9 + 0x28))(lVar9,1,param_1,local_164);
            uVar2 = FUN_01cfdf80(param_1,local_164);
            *(undefined1 *)(local_180 + 0x39) = uVar2;
            FUN_00f42d60(param_2,local_170,local_180);
            local_168 = local_168 + 1;
          }
        }
      }
    }
    local_164 = local_164 + 1;
  } while( true );
}

