/* Ghidra address: 01aa81c0 */
/* Ghidra symbol: FUN_01aa81c0 */


undefined1 FUN_01aa81c0(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  char *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  ushort uVar7;
  undefined4 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  byte bVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  char cVar16;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  char local_6a;
  byte local_69;
  ushort *local_68;
  ushort local_60;
  char local_5d;
  undefined1 local_5c;
  byte local_5b;
  ushort local_5a;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_3b;
  undefined1 local_3a;
  char local_39;
  longlong local_38;
  longlong local_30;
  
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_30 = FUN_004095c0(10000);
  local_38 = FUN_004095c0(10000);
  sVar13 = *(short *)(param_1 + 2);
  if (sVar13 != 0) {
    local_68 = (ushort *)(param_1 + 0x14ad9);
    do {
      *(undefined1 *)local_68 = 4;
      local_68 = (ushort *)((longlong)local_68 + 1);
      sVar13 = sVar13 + -1;
    } while (sVar13 != 0);
  }
  sVar13 = *(short *)(param_1 + 2);
  if (sVar13 != 0) {
    local_68 = (ushort *)(param_1 + 0x171ea);
    do {
      *(undefined1 *)local_68 = 0;
      local_68 = (ushort *)((longlong)local_68 + 1);
      sVar13 = sVar13 + -1;
    } while (sVar13 != 0);
  }
  lVar9 = FUN_00409570(*(undefined2 *)(param_1 + 0x13b30));
  sVar13 = *(short *)(param_1 + 0x13b30);
  uVar7 = 1;
  if (sVar13 != 0) {
    local_68 = (ushort *)(param_1 + 0x13b38);
    do {
      *(undefined1 *)(lVar9 + -1 + (ulonglong)uVar7) =
           *(undefined1 *)
            (*(longlong *)(param_1 + 0x10 + (ulonglong)**(ushort **)local_68 * 8) + -0x1e0 +
            (ulonglong)(byte)(*(ushort **)local_68)[1] * 0x788);
      uVar7 = uVar7 + 1;
      local_68 = local_68 + 4;
      sVar13 = sVar13 + -1;
    } while (sVar13 != 0);
  }
  sVar13 = *(short *)(param_1 + 0x10);
  if (sVar13 != 0) {
    local_68 = (ushort *)(param_1 + 0x18);
    do {
      lVar1 = *(longlong *)local_68;
      cVar16 = *(char *)(lVar1 + 1);
      local_5b = 1;
      for (; cVar16 != '\0'; cVar16 = cVar16 + -1) {
        *(undefined1 *)(lVar1 + -0x1e0 + (ulonglong)local_5b * 0x788) = 4;
        local_5b = local_5b + 1;
      }
      local_68 = local_68 + 4;
      sVar13 = sVar13 + -1;
    } while (sVar13 != 0);
  }
  sVar13 = *(short *)(param_1 + 0x13b30);
  uVar7 = 1;
  if (sVar13 != 0) {
    local_68 = (ushort *)(param_1 + 0x13b38);
    do {
      *(undefined1 *)
       (*(longlong *)(param_1 + 0x10 + (ulonglong)**(ushort **)local_68 * 8) + -0x1e0 +
       (ulonglong)(byte)(*(ushort **)local_68)[1] * 0x788) =
           *(undefined1 *)(lVar9 + -1 + (ulonglong)uVar7);
      uVar7 = uVar7 + 1;
      local_68 = local_68 + 4;
      sVar13 = sVar13 + -1;
    } while (sVar13 != 0);
  }
  FUN_004095f0(lVar9,*(undefined2 *)(param_1 + 0x13b30));
  cVar16 = *(char *)(param_1 + 0x13898);
  if (cVar16 != '\0') {
    local_68 = (ushort *)(param_1 + 0x1389a);
    do {
      local_5a = *local_68;
      local_88 = &local_3b;
      uVar5 = FUN_01aac6a0(param_1,local_5a,&local_39,&local_3a);
      *(undefined1 *)(param_1 + 0x14ad8 + (ulonglong)local_5a) = uVar5;
      *(undefined1 *)(param_1 + 0x171e9 + (ulonglong)local_5a) = 1;
      if (local_39 != '\0') {
        local_5c = 0;
        goto LAB_01aa8d35;
      }
      local_68 = local_68 + 1;
      cVar16 = cVar16 + -1;
    } while (cVar16 != '\0');
  }
  sVar13 = *(short *)(param_1 + 0x13b30);
  if (sVar13 != 0) {
    local_68 = (ushort *)(param_1 + 0x13b38);
    do {
      puVar2 = *(ushort **)local_68;
      uVar8 = FUN_01aa8090(param_1,*puVar2);
      cVar16 = FUN_01aa8120(auStack_a8,uVar8);
      if (cVar16 != '\0') {
        bVar12 = *(byte *)(*(longlong *)(param_1 + 0x10 + (ulonglong)*puVar2 * 8) + -0x1e0 +
                          (ulonglong)(byte)puVar2[1] * 0x788);
        uVar10 = FUN_01aa8150(auStack_a8,(char)puVar2[1]);
        *(undefined *)
         (*(longlong *)(param_1 + 0x10 + (ulonglong)*puVar2 * 8) + -0x1e0 + (uVar10 & 0xff) * 0x788)
             = (&DAT_01fce3e8)[bVar12];
      }
      local_68 = local_68 + 4;
      sVar13 = sVar13 + -1;
    } while (sVar13 != 0);
  }
  sVar13 = *(short *)(param_1 + 0x13b30);
  if (sVar13 != 0) {
    local_68 = (ushort *)(param_1 + 0x13b38);
    do {
      puVar2 = *(ushort **)local_68;
      local_5a = *(ushort *)
                  (*(longlong *)(param_1 + 0x10 + (ulonglong)*puVar2 * 8) + 0x4236 +
                  (ulonglong)(byte)puVar2[1] * 2);
      local_88 = &local_3b;
      uVar5 = FUN_01aac6a0(param_1,local_5a,&local_39,&local_3a);
      *(undefined1 *)(param_1 + 0x14ad8 + (ulonglong)local_5a) = uVar5;
      *(undefined1 *)(param_1 + 0x171e9 + (ulonglong)local_5a) = 1;
      if (local_39 != '\0') {
        local_5c = 0;
        goto LAB_01aa8d35;
      }
      uVar8 = FUN_01aa8090(param_1,*puVar2);
      cVar16 = FUN_01aa8120(auStack_a8,uVar8);
      if (cVar16 != '\0') {
        uVar10 = FUN_01aa8150(auStack_a8,(char)puVar2[1]);
        local_5a = *(ushort *)
                    (*(longlong *)(param_1 + 0x10 + (ulonglong)*puVar2 * 8) + 0x4236 +
                    (uVar10 & 0xff) * 2);
        local_88 = &local_3b;
        uVar5 = FUN_01aac6a0(param_1,local_5a,&local_39,&local_3a);
        *(undefined1 *)(param_1 + 0x14ad8 + (ulonglong)local_5a) = uVar5;
        *(undefined1 *)(param_1 + 0x171e9 + (ulonglong)local_5a) = 1;
        if (local_39 != '\0') {
          local_5c = 0;
          goto LAB_01aa8d35;
        }
      }
      local_68 = local_68 + 4;
      sVar13 = sVar13 + -1;
    } while (sVar13 != 0);
  }
  sVar13 = *(short *)(param_1 + 0x10);
  local_60 = 1;
  for (; sVar13 != 0; sVar13 = sVar13 + -1) {
    *(undefined1 *)(local_30 + -1 + (ulonglong)local_60) = 0;
    local_60 = local_60 + 1;
  }
  sVar13 = *(short *)(param_1 + 0x10);
  local_60 = 1;
  for (; sVar13 != 0; sVar13 = sVar13 + -1) {
    *(undefined1 *)(local_38 + -1 + (ulonglong)local_60) = 0;
    local_60 = local_60 + 1;
  }
  iVar14 = 0;
  iVar15 = *(int *)(*(longlong *)(param_1 + 0x13a58) + 0x10);
  if (-1 < iVar15 + -1) {
    do {
      lVar9 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x13a58),iVar14);
      local_5a = *(ushort *)(lVar9 + 0xc);
      *(undefined1 *)(param_1 + 0x14ad8 + (ulonglong)local_5a) = 3;
      iVar14 = iVar14 + 1;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  do {
    local_5d = '\x01';
    sVar13 = *(short *)(param_1 + 0x10);
    local_60 = 1;
    if (sVar13 != 0) {
      local_68 = (ushort *)(param_1 + 0x18);
      do {
        pcVar3 = *(char **)local_68;
        if (*(char *)(local_30 + -1 + (ulonglong)local_60) == '\0') {
          FUN_01d03160(*(undefined8 *)(pcVar3 + 0x550));
          (**(code **)(**(longlong **)(pcVar3 + 0x550) + 0x288))
                    (*(longlong **)(pcVar3 + 0x550),&local_48);
          cVar16 = FUN_014f9d10(*(undefined8 *)(pcVar3 + 0x550));
          if (cVar16 != '\0') {
            FUN_01d03160(*(undefined8 *)(pcVar3 + 0x550));
            (**(code **)(**(longlong **)(pcVar3 + 0x550) + 0x288))
                      (*(longlong **)(pcVar3 + 0x550),&local_48);
            cVar16 = FUN_014f9c80(*(undefined8 *)(pcVar3 + 0x550));
            if (cVar16 == '\0') {
              cVar16 = *pcVar3;
              bVar12 = 1;
              while ((cVar16 != '\0' &&
                     (local_6a = *(char *)(param_1 + 0x14ad8 +
                                          (longlong)
                                          (int)(uint)*(ushort *)
                                                      (pcVar3 + (ulonglong)bVar12 * 2 + 0x41f6)) !=
                                 '\x04', !(bool)local_6a))) {
                bVar12 = bVar12 + 1;
                cVar16 = cVar16 + -1;
              }
              if (local_6a == '\0') {
                cVar16 = pcVar3[1];
                local_5b = 1;
                while ((cVar16 != '\0' &&
                       (local_69 = *(char *)(param_1 + 0x14ad8 +
                                            (longlong)
                                            (int)(uint)*(ushort *)
                                                        (pcVar3 + (ulonglong)local_5b * 2 + 0x4236))
                                   != '\x04', !(bool)local_69))) {
                  local_5b = local_5b + 1;
                  cVar16 = cVar16 + -1;
                }
              }
              if ((local_69 & local_6a == '\0') != 0) {
                FUN_014f9e20(*(longlong *)local_68);
              }
            }
          }
          bVar4 = true;
          uVar10 = 1;
          for (cVar16 = *pcVar3; cVar16 != '\0'; cVar16 = cVar16 + -1) {
            cVar6 = *(char *)(param_1 + 0x14ad8 +
                             (longlong)(int)(uint)*(ushort *)(pcVar3 + uVar10 * 2 + 0x41f6));
            if (cVar6 == '\x04') {
              bVar4 = false;
              break;
            }
            pcVar3[uVar10 + 0x567] = cVar6;
            uVar10 = (ulonglong)(byte)((char)uVar10 + 1);
          }
          if (bVar4) {
            (**(code **)(pcVar3 + 0x10))(*(longlong *)local_68);
            cVar16 = pcVar3[1];
            local_5b = 1;
            for (; cVar16 != '\0'; cVar16 = cVar16 + -1) {
              uVar10 = (ulonglong)local_5b;
              local_5a = *(ushort *)(pcVar3 + uVar10 * 2 + 0x4236);
              cVar6 = *(char *)(param_1 + 0x14ad8 + (ulonglong)local_5a);
              if (cVar6 == '\x04') {
                if ((pcVar3[2] == '\0') && ((byte)pcVar3[1] < 2)) {
                  uVar11 = FUN_00b89270();
                  FUN_00b8e520(uVar11,&local_50,0x4fe);
                  uVar11 = FUN_00b89270();
                  FUN_00b8e520(uVar11,&local_58,0x4ff);
                  FUN_00416ba0(DAT_02110a68,local_50,local_58);
                  FUN_01aa37d0(1,&DAT_02110a68);
                  local_5c = 0;
                  FUN_01aa36f0();
                  goto LAB_01aa8d35;
                }
                local_88 = &local_3b;
                cVar6 = FUN_01aac6a0(param_1,local_5a,&local_39,&local_3a);
                *(char *)(param_1 + 0x14ad8 + (ulonglong)local_5a) = cVar6;
                if (local_39 != '\0') {
                  local_5c = 0;
                  goto LAB_01aa8d35;
                }
                *(bool *)(param_1 + 0x171e9 + (ulonglong)local_5a) = cVar6 != '\x04';
                local_5d = '\0';
              }
              else if (pcVar3[uVar10 * 0x788 + -0x1e0] != cVar6) {
                pcVar3[uVar10 * 0x788 + -0x1e0] = cVar6;
                local_5c = 0;
                goto LAB_01aa8d35;
              }
              local_5b = local_5b + 1;
            }
            *(undefined1 *)(local_30 + -1 + (ulonglong)local_60) = 1;
          }
        }
        local_60 = local_60 + 1;
        local_68 = local_68 + 4;
        sVar13 = sVar13 + -1;
      } while (sVar13 != 0);
    }
    local_60 = 1;
    for (sVar13 = *(short *)(param_1 + 0x10); sVar13 != 0; sVar13 = sVar13 + -1) {
      *(undefined1 *)(local_38 + -1 + (ulonglong)local_60) =
           *(undefined1 *)(local_30 + -1 + (ulonglong)local_60);
      local_60 = local_60 + 1;
    }
  } while ((local_5d == '\0') || (cVar16 = FUN_01aa8160(auStack_a8), cVar16 == '\0'));
  sVar13 = *(short *)(param_1 + 0x10);
  if (sVar13 != 0) {
    local_68 = (ushort *)(param_1 + 0x18);
    do {
      pcVar3 = *(char **)local_68;
      bVar12 = 1;
      for (cVar16 = *pcVar3; cVar16 != '\0'; cVar16 = cVar16 + -1) {
        pcVar3[(ulonglong)bVar12 + 0x587] = pcVar3[(ulonglong)bVar12 + 0x567];
        bVar12 = bVar12 + 1;
      }
      local_68 = local_68 + 4;
      sVar13 = sVar13 + -1;
    } while (sVar13 != 0);
  }
  local_5c = 1;
LAB_01aa8d35:
  FUN_004095f0(local_30);
  FUN_004095f0(local_38);
  FUN_00414560(&local_58,3);
  return local_5c;
}

