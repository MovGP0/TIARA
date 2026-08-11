/* Ghidra address: 016527d0 */
/* Ghidra symbol: FUN_016527d0 */


void FUN_016527d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint *puVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte *pbVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  byte bVar14;
  undefined1 uVar15;
  char cVar16;
  char cVar17;
  longlong lVar18;
  int iVar19;
  bool bVar20;
  ulonglong in_stack_ffffffffffffff58;
  undefined8 uVar21;
  int local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  longlong local_40;
  short *local_38;
  uint *local_30;
  
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_38 = (short *)0x0;
  pbVar10 = (byte *)FUN_016ea6c0(param_1,1);
  FUN_016ee260(param_1,&local_30,0xd0,0);
  puVar5 = local_30;
  *(uint **)(*(longlong *)(param_1 + 0x128) + 0x538) = local_30;
  cVar16 = *(char *)(param_2 + 0x98);
  local_30[1] = (uint)*pbVar10;
  *(undefined2 *)(local_30 + 2) = *(undefined2 *)(pbVar10 + 0x10);
  *(undefined8 *)(local_30 + 8) = *(undefined8 *)(pbVar10 + 0x18);
  *(byte *)(local_30 + 3) = pbVar10[0x40];
  *(undefined8 *)(local_30 + 4) = *(undefined8 *)(pbVar10 + 8);
  *(undefined8 *)(local_30 + 0x14) = *(undefined8 *)(pbVar10 + 0x28);
  *(undefined8 *)(local_30 + 0x16) = *(undefined8 *)(pbVar10 + 0x48);
  *(undefined2 *)((longlong)local_30 + 10) = *(undefined2 *)(pbVar10 + 0x48);
  *(undefined8 *)(local_30 + 0x10) = *(undefined8 *)(pbVar10 + 0x50);
  *(byte *)(local_30 + 0x18) = pbVar10[0x30];
  *(byte *)((longlong)local_30 + 0x61) = pbVar10[0x31];
  *(char *)(local_30 + 0x1b) = '\0';
  *(char *)((longlong)local_30 + 0x6d) = '\0';
  local_30[0x1c] = 0xffffffff;
  puVar5[0x1e] = 0;
  puVar5[0x1f] = 0;
  *(char *)(local_30 + 0x28) = '\x01';
  *(char *)((longlong)local_30 + 0xa1) = '\x02';
  bVar14 = cVar16 - 8;
  if ((bVar14 < 8 && (1 << (bVar14 & 0x1f) & 0x11U) != 0) || ((char)local_30[3] != '\x04')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((char)local_30[3] == '\a') {
    uVar6 = FUN_016ea1b0(param_1,3);
    *(undefined2 *)(puVar5 + 0x26) = uVar6;
  }
  else {
    uVar6 = FUN_016ea1b0(param_1,2);
    *(undefined2 *)(puVar5 + 0x26) = uVar6;
  }
  uVar6 = FUN_016ea1b0(param_1,2);
  *(undefined2 *)((longlong)puVar5 + 0x9a) = uVar6;
  uVar11 = FUN_00409570((longlong)(int)(puVar5[1] * 8));
  *(undefined8 *)(puVar5 + 0xe) = uVar11;
  uVar11 = FUN_00409570((longlong)(int)(puVar5[1] * 8));
  *(undefined8 *)(puVar5 + 0xc) = uVar11;
  uVar11 = FUN_00409570((longlong)(int)(puVar5[1] * 0xc));
  *(undefined8 *)(puVar5 + 6) = uVar11;
  puVar5[0x27] = 0xffffffff;
  if ((*(longlong *)(pbVar10 + 0x38) == 0) ||
     (*(char *)(*(longlong *)(pbVar10 + 0x38) + 0x4a) != '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((bVar3) || ((bVar4 && (*(char *)(*(longlong *)(pbVar10 + 0x38) + 0x49) == '\0')))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar4) {
    iVar19 = *(int *)(*(longlong *)(*(longlong *)(pbVar10 + 0x38) + 8) + 0x10);
    local_70 = 0;
    if (-1 < iVar19 + -1) {
      do {
        lVar12 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(pbVar10 + 0x38) + 8),local_70);
        *(longlong *)(lVar12 + 0x80) = param_1;
        local_70 = local_70 + 1;
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
    }
    iVar19 = *(int *)(*(longlong *)(*(longlong *)(pbVar10 + 0x38) + 0x10) + 0x10);
    local_70 = 0;
    if (-1 < iVar19 + -1) {
      do {
        lVar12 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(pbVar10 + 0x38) + 0x10),local_70);
        *(longlong *)(lVar12 + 0x80) = param_1;
        local_70 = local_70 + 1;
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
    }
  }
  if (bVar3) {
    puVar5[0x31] = 0x2aaaaaa;
    puVar5[0x30] = 0xaaaa;
    uVar11 = FUN_00409570(0x55550);
    *(undefined8 *)(puVar5 + 0x2a) = uVar11;
    uVar11 = FUN_00409570((longlong)(int)(puVar5[0x30] * 8));
    *(undefined8 *)(puVar5 + 0x2c) = uVar11;
    uVar11 = FUN_00409570((longlong)(int)(puVar5[0x30] * 8));
    *(undefined8 *)(puVar5 + 0x2e) = uVar11;
    puVar5[0x32] = 0;
    puVar5[0x33] = 0xbff00000;
  }
  else {
    puVar5[0x31] = 0;
    puVar5[0x30] = 0;
    puVar5[0x2a] = 0;
    puVar5[0x2b] = 0;
    puVar5[0x2c] = 0;
    puVar5[0x2d] = 0;
    puVar5[0x2e] = 0;
    puVar5[0x2f] = 0;
  }
  if ((byte)puVar5[3] < 8) {
    bVar20 = ((int)CONCAT71((int7)((ulonglong)puVar5 >> 8),1) << ((byte)puVar5[3] & 0x1f) & 3U) != 0
    ;
  }
  else {
    bVar20 = false;
  }
  if (((bVar20) && (puVar5[1] == 1)) && ((short)puVar5[2] == 1)) {
    **(undefined1 **)(puVar5 + 6) = 0;
    if (*(char *)((longlong)puVar5 + 0x61) == '\0') {
      uVar7 = FUN_016e9e80(param_1,1);
      *puVar5 = uVar7 & 0xff;
      *(undefined8 *)(puVar5 + 0x24) = **(undefined8 **)(puVar5 + 8);
      FUN_016ec420(param_1,(char)*puVar5 + '\x01',1,2,3,4,1);
      FUN_016ed320(param_1,(char)*puVar5 + '\x01',0,*(undefined8 *)(puVar5 + 0x24),0);
      *(char *)(puVar5 + 0x28) = '\x03';
      *(char *)((longlong)puVar5 + 0xa1) = '\x04';
      *(undefined1 *)(*(longlong *)(puVar5 + 6) + 1) = 1;
      *(undefined1 *)(*(longlong *)(puVar5 + 6) + 2) = 2;
      FUN_016e9f40(param_1,FUN_0164c6c0);
      FUN_016e9ff0(param_1,FUN_0164c040);
      FUN_016ea040(param_1,FUN_0164c240);
    }
    else {
      if (!bVar2) {
        uVar7 = FUN_016e9e80(param_1,2);
        *puVar5 = uVar7 & 0xff;
        *(undefined8 *)(puVar5 + 0x24) = **(undefined8 **)(puVar5 + 8);
        in_stack_ffffffffffffff58 = CONCAT71((int7)(in_stack_ffffffffffffff58 >> 8),1);
        FUN_016ebdd0(param_1,(char)*puVar5 + '\x01',(char)puVar5[0x28],
                     *(char *)((longlong)puVar5 + 0xa1),in_stack_ffffffffffffff58);
      }
      uVar9 = (undefined4)(in_stack_ffffffffffffff58 >> 0x20);
      iVar19 = (**(code **)(**(longlong **)(puVar5 + 4) + 0x28))(*(longlong **)(puVar5 + 4));
      if (iVar19 == 0) {
        plVar13 = (longlong *)FUN_016ebdc0(param_1);
        (**(code **)(*plVar13 + 0x288))(plVar13,local_50);
        FUN_01b04d70(0x20e,*(undefined8 *)(param_2 + 0x1310),local_50[0]);
      }
      uVar11 = FUN_016ebdc0(param_1);
      (**(code **)(**(longlong **)(puVar5 + 4) + 0x18))(*(longlong **)(puVar5 + 4),&local_58,0);
      lVar12 = FUN_01b07f10(param_2,uVar11,local_58,&DAT_01f7d06c,CONCAT44(uVar9,3),1);
      if (*(char *)(lVar12 + 5) == '\x01') {
        uVar15 = 0;
      }
      else {
        uVar15 = 2;
      }
      *(undefined1 *)(*(longlong *)(puVar5 + 6) + 1) = 1;
      *(undefined1 *)(*(longlong *)(puVar5 + 6) + 2) = uVar15;
      if (!bVar2) {
        FUN_016ece80(param_1,(char)*puVar5 + '\x02',lVar12,1,uVar15,(char)*puVar5 + '\x01');
        FUN_016ed220(param_1,(char)*puVar5 + '\x02',*(undefined8 *)(puVar5 + 0x24),0);
        FUN_016e9f40(param_1,FUN_0164c6c0);
        FUN_016e9ff0(param_1,FUN_0164c040);
        FUN_016ea040(param_1,FUN_0164c240);
      }
    }
  }
  else {
    if ((((char)puVar5[3] != '\x01') &&
        (uVar7 = (**(code **)(**(longlong **)(puVar5 + 4) + 0x28))(*(longlong **)(puVar5 + 4)),
        puVar5[1] != uVar7)) ||
       ((*(char *)((longlong)puVar5 + 0x61) != '\0' &&
        (uVar7 = (**(code **)(**(longlong **)(puVar5 + 4) + 0x28))(*(longlong **)(puVar5 + 4)),
        puVar5[1] != uVar7)))) {
      (**(code **)(**(longlong **)(param_1 + 0x128) + 0x288))
                (*(longlong **)(param_1 + 0x128),&local_60);
      FUN_00416ad0(&local_60,L": Dimension <> # of Controlling components");
      uVar11 = FUN_0044d490(&PTR_FUN_004334c0,1,local_60);
      FUN_004134c0(uVar11);
    }
    uVar11 = FUN_00409570((longlong)(int)(puVar5[1] * 8));
    *(undefined8 *)(puVar5 + 10) = uVar11;
    uVar11 = FUN_00409570((longlong)(int)(puVar5[1] * 2));
    *(undefined8 *)(puVar5 + 0x12) = uVar11;
    if ((char)puVar5[3] == '\x01') {
      uVar7 = FUN_016e9e80(param_1,(char)puVar5[1] + '\x01');
      *puVar5 = uVar7 & 0xff;
      cVar16 = (char)puVar5[1] * '\x02';
      if (*(char *)((longlong)puVar5 + 0x61) == '\0') {
        *(char *)(puVar5 + 0x28) = cVar16 + '\x01';
        *(char *)((longlong)puVar5 + 0xa1) = cVar16 + '\x02';
      }
      in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffffffffffff00;
      FUN_016ebdd0(param_1,(char)*puVar5 + '\x01',(char)puVar5[0x28],
                   *(char *)((longlong)puVar5 + 0xa1),in_stack_ffffffffffffff58);
      iVar19 = 1;
      uVar7 = puVar5[1];
      local_70 = 1;
      if (0 < (int)uVar7) {
        do {
          uVar9 = (undefined4)(in_stack_ffffffffffffff58 >> 0x20);
          lVar12 = *(longlong *)(puVar5 + 6);
          lVar18 = (longlong)(local_70 + -1);
          *(undefined1 *)(lVar12 + lVar18 * 0xc) = 0;
          if (*(char *)((longlong)puVar5 + 0x61) == '\0') {
            *(char *)(lVar12 + 1 + lVar18 * 0xc) = (char)iVar19;
            cVar16 = (char)iVar19 + '\x01';
            *(char *)(lVar12 + 2 + lVar18 * 0xc) = cVar16;
            in_stack_ffffffffffffff58 =
                 CONCAT71((int7)(in_stack_ffffffffffffff58 >> 8),(char)*puVar5 + '\x01');
            FUN_016ec970(param_1,(char)*puVar5 + (char)local_70 + '\x01',iVar19,
                         CONCAT31((int3)((uint)iVar19 >> 8),cVar16),in_stack_ffffffffffffff58);
          }
          else {
            (**(code **)(**(longlong **)(puVar5 + 4) + 0x18))
                      (*(longlong **)(puVar5 + 4),&local_38,local_70 + -1);
            uVar11 = FUN_016ebdc0(param_1);
            uVar21 = CONCAT44(uVar9,3);
            lVar12 = FUN_01b07f10(param_2,uVar11,local_38,&DAT_01f7d06c,uVar21,1);
            if (*(char *)(lVar12 + 5) == '\x01') {
              uVar15 = 0;
            }
            else {
              uVar15 = 2;
            }
            lVar1 = *(longlong *)(puVar5 + 6);
            *(undefined1 *)(lVar1 + 1 + lVar18 * 0xc) = 1;
            *(undefined1 *)(lVar1 + 2 + lVar18 * 0xc) = uVar15;
            in_stack_ffffffffffffff58 = CONCAT71((int7)((ulonglong)uVar21 >> 8),uVar15);
            FUN_016ece80(param_1,(char)*puVar5 + (char)local_70 + '\x01',lVar12,
                         CONCAT71((uint7)(uint3)((uint)local_70 >> 8),1),in_stack_ffffffffffffff58,
                         (char)*puVar5 + '\x01');
          }
          iVar19 = iVar19 + 2;
          local_70 = local_70 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    else {
      if (!bVar2) {
        uVar7 = FUN_016e9e80(param_1,(char)puVar5[1] + '\x01');
        *puVar5 = uVar7 & 0xff;
      }
      cVar16 = FUN_0164cc10(*(undefined8 *)(puVar5 + 4));
      if (*(char *)((longlong)puVar5 + 0x61) == '\0') {
        *(char *)(puVar5 + 0x28) = cVar16 * '\x02' + '\x01';
        *(char *)((longlong)puVar5 + 0xa1) = cVar16 * '\x02' + '\x02';
      }
      if (!bVar2) {
        in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffffffffffff00;
        FUN_016ebdd0(param_1,(char)*puVar5 + '\x01',(char)puVar5[0x28],
                     *(char *)((longlong)puVar5 + 0xa1),in_stack_ffffffffffffff58);
      }
      uVar7 = puVar5[1];
      local_70 = 1;
      if (0 < (int)uVar7) {
        do {
          iVar19 = local_70 + -1;
          (**(code **)(**(longlong **)(puVar5 + 4) + 0x18))
                    (*(longlong **)(puVar5 + 4),&local_38,iVar19);
          uVar9 = (undefined4)(in_stack_ffffffffffffff58 >> 0x20);
          cVar16 = (char)local_70;
          if (*local_38 == 0x49) {
            *(undefined1 *)(*(longlong *)(puVar5 + 6) + (longlong)iVar19 * 0xc) = 1;
            iVar19 = FUN_004170c0(&DAT_016537c4,local_38,1);
            if (iVar19 < 1) {
              iVar19 = FUN_004170c0(&LAB_016537d4,local_38,1);
              uVar8 = 0;
              if (local_38 != (short *)0x0) {
                uVar8 = *(undefined4 *)(local_38 + -2);
              }
              FUN_00416dc0(&local_38,local_38,iVar19 + 1,uVar8);
            }
            else {
              iVar19 = FUN_004170c0(&DAT_016537c4,local_38,1);
              uVar8 = 0;
              if (local_38 != (short *)0x0) {
                uVar8 = *(undefined4 *)(local_38 + -2);
              }
              FUN_00416dc0(&local_38,local_38,iVar19 + 1,uVar8);
            }
            uVar11 = FUN_016ebdc0(param_1);
            in_stack_ffffffffffffff58 = CONCAT44(uVar9,6);
            uVar11 = FUN_01b07f10(param_2,uVar11,local_38,&DAT_01f7d074,in_stack_ffffffffffffff58,1)
            ;
            if (!bVar2) {
              in_stack_ffffffffffffff58 =
                   CONCAT71((int7)(in_stack_ffffffffffffff58 >> 8),(char)*puVar5 + '\x01');
              FUN_016ed0a0(param_1,(char)*puVar5 + cVar16 + '\x01',uVar11,1,
                           in_stack_ffffffffffffff58);
            }
          }
          else {
            lVar12 = (longlong)iVar19;
            *(undefined1 *)(*(longlong *)(puVar5 + 6) + lVar12 * 0xc) = 0;
            iVar19 = FUN_004170c0(&LAB_016537d4,local_38,1);
            uVar9 = 0;
            if (local_38 != (short *)0x0) {
              uVar9 = *(undefined4 *)(local_38 + -2);
            }
            FUN_00416dc0(&local_38,local_38,iVar19 + 1,uVar9);
            uVar9 = (undefined4)(in_stack_ffffffffffffff58 >> 0x20);
            if (*(char *)((longlong)puVar5 + 0x61) == '\0') {
              iVar19 = FUN_0043fc00(local_38);
              iVar19 = iVar19 * 2 + 1;
              cVar17 = (char)iVar19;
              *(char *)(*(longlong *)(puVar5 + 6) + 1 + lVar12 * 0xc) = cVar17;
              *(char *)(*(longlong *)(puVar5 + 6) + 2 + lVar12 * 0xc) = cVar17 + '\x01';
              if (!bVar2) {
                in_stack_ffffffffffffff58 =
                     CONCAT71((int7)(in_stack_ffffffffffffff58 >> 8),(char)*puVar5 + '\x01');
                FUN_016ec970(param_1,(char)*puVar5 + cVar16 + '\x01',iVar19,
                             CONCAT31((int3)((uint)iVar19 >> 8),cVar17 + '\x01'),
                             in_stack_ffffffffffffff58);
              }
            }
            else {
              uVar11 = FUN_016ebdc0(param_1);
              in_stack_ffffffffffffff58 = CONCAT44(uVar9,3);
              lVar18 = FUN_01b07f10(param_2,uVar11,local_38,&DAT_01f7d06c,in_stack_ffffffffffffff58,
                                    1);
              if (*(char *)(lVar18 + 5) == '\x01') {
                uVar15 = 0;
              }
              else {
                uVar15 = 2;
              }
              *(undefined1 *)(*(longlong *)(puVar5 + 6) + 1 + lVar12 * 0xc) = 1;
              *(undefined1 *)(*(longlong *)(puVar5 + 6) + (lVar12 * 6 + 1) * 2) = uVar15;
              if (!bVar2) {
                in_stack_ffffffffffffff58 = CONCAT71((int7)(in_stack_ffffffffffffff58 >> 8),uVar15);
                FUN_016ece80(param_1,(char)*puVar5 + cVar16 + '\x01',lVar18,
                             CONCAT71((uint7)(uint3)((uint)local_70 >> 8),1),
                             in_stack_ffffffffffffff58,(char)*puVar5 + '\x01');
              }
            }
          }
          local_70 = local_70 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    if (bVar3) {
      lVar12 = *(longlong *)(puVar5 + 6);
      FUN_016e9e20(param_1,2);
      *puVar5 = 0;
      FUN_016ebdd0(param_1,(char)*puVar5 + '\x01',*(undefined1 *)(lVar12 + 1),
                   *(undefined1 *)(lVar12 + 2),1);
      FUN_016ec240(param_1,(char)*puVar5 + '\x02',(char)puVar5[0x28],
                   *(char *)((longlong)puVar5 + 0xa1));
      FUN_016ed320(param_1,(char)*puVar5 + '\x01',0,0x41cdcd6500000000,0);
      FUN_016ed5d0(param_1,(char)*puVar5 + '\x02',0x4014000000000000,0,0,0,0);
    }
    lVar12 = FUN_016517b0(param_1,param_2);
    if (lVar12 != 0) {
      local_40 = lVar12;
      FUN_00597e50(*(longlong *)(param_1 + 0x130) + 8,&local_40);
    }
    FUN_0164be80(param_1,param_2,local_30);
    if (!bVar4) {
      FUN_016e9f40(param_1,FUN_016502e0);
    }
    FUN_016e9f50(param_1,FUN_0164bf30);
    FUN_016e9fd0(param_1,FUN_0164d630);
    FUN_016e9ff0(param_1,FUN_0164c040);
    FUN_016ea040(param_1,FUN_0164c240);
    if (((char)puVar5[3] == '\x03') || (*PTR_DAT_02004ff8 != '\0')) {
      FUN_016e9f70(param_1,FUN_0164d150);
    }
    else {
      FUN_016e9f60(param_1,FUN_0164ccc0);
    }
  }
  FUN_00414560(&local_60,3);
  FUN_00414480(&local_38);
  return;
}

