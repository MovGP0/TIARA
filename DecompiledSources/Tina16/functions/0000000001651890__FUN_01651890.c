/* Ghidra address: 01651890 */
/* Ghidra symbol: FUN_01651890 */


void FUN_01651890(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  uint *puVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined7 uVar13;
  longlong *plVar11;
  longlong lVar12;
  byte bVar14;
  undefined1 uVar15;
  int iVar16;
  char cVar17;
  char cVar18;
  bool bVar19;
  ulonglong in_stack_ffffffffffffff58;
  undefined8 uVar20;
  int local_74;
  int local_6c;
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
  pbVar8 = (byte *)FUN_016ea6c0(param_1,1);
  FUN_016ee260(param_1,&local_30,0xd0,0);
  puVar3 = local_30;
  *(uint **)(*(longlong *)(param_1 + 0x128) + 0x538) = local_30;
  cVar18 = *(char *)(param_2 + 0x98);
  local_30[1] = (uint)*pbVar8;
  *(undefined2 *)(local_30 + 2) = *(undefined2 *)(pbVar8 + 0x10);
  *(undefined8 *)(local_30 + 8) = *(undefined8 *)(pbVar8 + 0x18);
  *(byte *)(local_30 + 3) = pbVar8[0x40];
  *(undefined8 *)(local_30 + 4) = *(undefined8 *)(pbVar8 + 8);
  *(undefined8 *)(local_30 + 0x14) = *(undefined8 *)(pbVar8 + 0x28);
  *(undefined8 *)(local_30 + 0x16) = *(undefined8 *)(pbVar8 + 0x48);
  *(undefined2 *)((longlong)local_30 + 10) = *(undefined2 *)(pbVar8 + 0x48);
  *(undefined8 *)(local_30 + 0x10) = *(undefined8 *)(pbVar8 + 0x50);
  *(byte *)(local_30 + 0x18) = pbVar8[0x30];
  *(byte *)((longlong)local_30 + 0x61) = pbVar8[0x31];
  *(char *)(local_30 + 0x1b) = '\x01';
  *(char *)((longlong)local_30 + 0x6d) = '\0';
  local_30[0x1c] = 0xffffffff;
  puVar3[0x1e] = 0;
  puVar3[0x1f] = 0;
  *(char *)(local_30 + 0x28) = '\x01';
  *(char *)((longlong)local_30 + 0xa1) = '\x02';
  bVar14 = cVar18 - 8;
  if ((bVar14 < 8 && (1 << (bVar14 & 0x1f) & 0x11U) != 0) || ((char)local_30[3] != '\x04')) {
    bVar19 = false;
  }
  else {
    bVar19 = true;
  }
  if (((char)local_30[3] == '\a') || ((char)local_30[3] == '\x04')) {
    uVar4 = FUN_016ea1b0(param_1,3);
    *(undefined2 *)(puVar3 + 0x26) = uVar4;
  }
  else {
    uVar4 = FUN_016ea1b0(param_1,2);
    *(undefined2 *)(puVar3 + 0x26) = uVar4;
  }
  uVar4 = FUN_016ea1b0(param_1,2);
  *(undefined2 *)((longlong)puVar3 + 0x9a) = uVar4;
  uVar9 = FUN_00409570((longlong)(int)(puVar3[1] * 8));
  *(undefined8 *)(puVar3 + 0xe) = uVar9;
  uVar9 = FUN_00409570((longlong)(int)(puVar3[1] * 8));
  *(undefined8 *)(puVar3 + 0xc) = uVar9;
  uVar9 = FUN_00409570((longlong)(int)(puVar3[1] * 0xc));
  *(undefined8 *)(puVar3 + 6) = uVar9;
  puVar3[0x27] = 0xffffffff;
  lVar10 = *(longlong *)(pbVar8 + 0x38);
  if ((lVar10 == 0) || (*(char *)(lVar10 + 0x4a) != '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    iVar16 = *(int *)(*(longlong *)(lVar10 + 8) + 0x10);
    local_74 = 0;
    if (-1 < iVar16 + -1) {
      do {
        lVar10 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(pbVar8 + 0x38) + 8),local_74);
        *(longlong *)(lVar10 + 0x80) = param_1;
        local_74 = local_74 + 1;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    iVar16 = *(int *)(*(longlong *)(*(longlong *)(pbVar8 + 0x38) + 0x10) + 0x10);
    local_74 = 0;
    if (-1 < iVar16 + -1) {
      do {
        lVar10 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(pbVar8 + 0x38) + 0x10),local_74);
        *(longlong *)(lVar10 + 0x80) = param_1;
        local_74 = local_74 + 1;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
  }
  if (bVar19) {
    puVar3[0x31] = 0x2aaaaaa;
    puVar3[0x30] = 0xaaaa;
    uVar9 = FUN_00409570((longlong)(int)(puVar3[0x30] * 8));
    *(undefined8 *)(puVar3 + 0x2a) = uVar9;
    uVar9 = FUN_00409570((longlong)(int)(puVar3[0x30] * 8));
    *(undefined8 *)(puVar3 + 0x2c) = uVar9;
    uVar9 = FUN_00409570((longlong)(int)(puVar3[0x30] * 8));
    *(undefined8 *)(puVar3 + 0x2e) = uVar9;
    puVar3[0x32] = 0;
    puVar3[0x33] = 0xbff00000;
  }
  else {
    puVar3[0x31] = 0;
    puVar3[0x30] = 0;
    puVar3[0x2a] = 0;
    puVar3[0x2b] = 0;
    puVar3[0x2c] = 0;
    puVar3[0x2d] = 0;
    puVar3[0x2e] = 0;
    puVar3[0x2f] = 0;
  }
  uVar13 = (undefined7)((ulonglong)puVar3 >> 8);
  if ((byte)puVar3[3] < 8) {
    bVar19 = ((int)CONCAT71(uVar13,1) << ((byte)puVar3[3] & 0x1f) & 3U) != 0;
  }
  else {
    bVar19 = false;
  }
  if (((bVar19) && (puVar3[1] == 1)) && ((short)puVar3[2] == 1)) {
    **(undefined1 **)(puVar3 + 6) = 0;
    if (*(char *)((longlong)puVar3 + 0x61) == '\0') {
      uVar5 = FUN_016e9e80(param_1,1);
      *puVar3 = uVar5 & 0xff;
      *(undefined8 *)(puVar3 + 0x24) = **(undefined8 **)(puVar3 + 8);
      FUN_016ec2d0(param_1,(char)*puVar3 + '\x01',1,2,3,4,1);
      FUN_016ed320(param_1,(char)*puVar3 + '\x01',0,*(undefined8 *)(puVar3 + 0x24),0);
      *(char *)(puVar3 + 0x28) = '\x03';
      *(char *)((longlong)puVar3 + 0xa1) = '\x04';
      *(undefined1 *)(*(longlong *)(puVar3 + 6) + 1) = 1;
      *(undefined1 *)(*(longlong *)(puVar3 + 6) + 2) = 2;
      FUN_016e9f40(param_1,FUN_0164c6c0);
      FUN_016e9ff0(param_1,FUN_0164c3d0);
      FUN_016ea040(param_1,FUN_0164c5a0);
    }
    else {
      uVar5 = FUN_016e9e80(param_1,2);
      *puVar3 = uVar5 & 0xff;
      *(undefined8 *)(puVar3 + 0x24) = **(undefined8 **)(puVar3 + 8);
      uVar9 = CONCAT71((int7)(in_stack_ffffffffffffff58 >> 8),1);
      FUN_016ebe60(param_1,(char)*puVar3 + '\x01',(char)puVar3[0x28],
                   *(char *)((longlong)puVar3 + 0xa1),uVar9);
      uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
      iVar16 = (**(code **)(**(longlong **)(puVar3 + 4) + 0x28))(*(longlong **)(puVar3 + 4));
      if (iVar16 == 0) {
        plVar11 = (longlong *)FUN_016ebdc0(param_1);
        (**(code **)(*plVar11 + 0x288))(plVar11,local_50);
        FUN_01b04d70(0x20e,*(undefined8 *)(param_2 + 0x1310),local_50[0]);
      }
      uVar9 = FUN_016ebdc0(param_1);
      (**(code **)(**(longlong **)(puVar3 + 4) + 0x18))(*(longlong **)(puVar3 + 4),&local_58,0);
      lVar10 = FUN_01b07f10(param_2,uVar9,local_58,&DAT_01f7d06c,CONCAT44(uVar7,3),1);
      if (*(char *)(lVar10 + 5) == '\x01') {
        uVar15 = 0;
      }
      else {
        uVar15 = 2;
      }
      *(undefined1 *)(*(longlong *)(puVar3 + 6) + 1) = 1;
      *(undefined1 *)(*(longlong *)(puVar3 + 6) + 2) = uVar15;
      FUN_016ecd60(param_1,(char)*puVar3 + '\x02',lVar10,1,uVar15,(char)*puVar3 + '\x01');
      FUN_016ed220(param_1,(char)*puVar3 + '\x02',*(undefined8 *)(puVar3 + 0x24),0);
      FUN_016e9f40(param_1,FUN_0164c6c0);
      FUN_016e9ff0(param_1,FUN_0164c3d0);
      FUN_016ea040(param_1,FUN_0164c5a0);
    }
    goto code_r0x016526de;
  }
  if ((((char)puVar3[3] != '\x01') &&
      (uVar5 = (**(code **)(**(longlong **)(puVar3 + 4) + 0x28))(*(longlong **)(puVar3 + 4)),
      puVar3[1] != uVar5)) ||
     ((*(char *)((longlong)puVar3 + 0x61) != '\0' &&
      (uVar5 = (**(code **)(**(longlong **)(puVar3 + 4) + 0x28))(*(longlong **)(puVar3 + 4)),
      puVar3[1] != uVar5)))) {
    (**(code **)(**(longlong **)(param_1 + 0x128) + 0x288))
              (*(longlong **)(param_1 + 0x128),&local_60);
    FUN_00416ad0(&local_60,L": Dimension <> # of Controlling components");
    uVar9 = FUN_0044d490(&PTR_FUN_004334c0,1,local_60);
    FUN_004134c0(uVar9);
  }
  uVar9 = FUN_00409570((longlong)(int)(puVar3[1] * 8));
  *(undefined8 *)(puVar3 + 10) = uVar9;
  uVar9 = FUN_00409570((longlong)(int)(puVar3[1] * 2));
  *(undefined8 *)(puVar3 + 0x12) = uVar9;
  if ((char)puVar3[3] == '\x01') {
    uVar5 = FUN_016e9e80(param_1,(char)puVar3[1] + '\x01');
    *puVar3 = uVar5 & 0xff;
    cVar18 = (char)puVar3[1] * '\x02';
    if (*(char *)((longlong)puVar3 + 0x61) == '\0') {
      *(char *)(puVar3 + 0x28) = cVar18 + '\x01';
      *(char *)((longlong)puVar3 + 0xa1) = cVar18 + '\x02';
    }
    in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffffffffffff00;
    FUN_016ebe60(param_1,(char)*puVar3 + '\x01',(char)puVar3[0x28],
                 *(char *)((longlong)puVar3 + 0xa1),in_stack_ffffffffffffff58);
    local_6c = 1;
    uVar5 = puVar3[1];
    local_74 = 1;
    if (0 < (int)uVar5) {
      do {
        uVar7 = (undefined4)(in_stack_ffffffffffffff58 >> 0x20);
        lVar10 = (longlong)(local_74 + -1);
        *(undefined1 *)(*(longlong *)(puVar3 + 6) + lVar10 * 0xc) = 0;
        if (*(char *)((longlong)puVar3 + 0x61) == '\0') {
          cVar18 = (char)local_6c + '\x01';
          in_stack_ffffffffffffff58 =
               CONCAT71((int7)(in_stack_ffffffffffffff58 >> 8),(char)*puVar3 + '\x01');
          FUN_016ec850(param_1,(char)*puVar3 + (char)local_74 + '\x01',local_6c,
                       CONCAT31((int3)((uint)local_6c >> 8),cVar18),in_stack_ffffffffffffff58);
          lVar12 = *(longlong *)(puVar3 + 6);
          *(char *)(lVar12 + 1 + lVar10 * 0xc) = (char)local_6c;
          *(char *)(lVar12 + 2 + lVar10 * 0xc) = cVar18;
        }
        else {
          (**(code **)(**(longlong **)(puVar3 + 4) + 0x18))
                    (*(longlong **)(puVar3 + 4),&local_38,local_74 + -1);
          uVar9 = FUN_016ebdc0(param_1);
          uVar20 = CONCAT44(uVar7,3);
          lVar12 = FUN_01b07f10(param_2,uVar9,local_38,&DAT_01f7d06c,uVar20,1);
          if (*(char *)(lVar12 + 5) == '\x01') {
            uVar15 = 0;
          }
          else {
            uVar15 = 2;
          }
          lVar1 = *(longlong *)(puVar3 + 6);
          *(undefined1 *)(lVar1 + 1 + lVar10 * 0xc) = 1;
          *(undefined1 *)(lVar1 + 2 + lVar10 * 0xc) = uVar15;
          in_stack_ffffffffffffff58 = CONCAT71((int7)((ulonglong)uVar20 >> 8),uVar15);
          FUN_016ecd60(param_1,(char)*puVar3 + (char)local_74 + '\x01',lVar12,
                       CONCAT71((uint7)(uint3)((uint)local_74 >> 8),1),in_stack_ffffffffffffff58,
                       (char)*puVar3 + '\x01');
        }
        local_6c = local_6c + 2;
        local_74 = local_74 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  else {
    uVar5 = FUN_016e9e80(param_1,(char)puVar3[1] + '\x01');
    *puVar3 = uVar5 & 0xff;
    cVar18 = FUN_0164cc10(*(undefined8 *)(puVar3 + 4));
    if (*(char *)((longlong)puVar3 + 0x61) == '\0') {
      *(char *)(puVar3 + 0x28) = cVar18 * '\x02' + '\x01';
      *(char *)((longlong)puVar3 + 0xa1) = cVar18 * '\x02' + '\x02';
    }
    in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffffffffffff00;
    FUN_016ebe60(param_1,(char)*puVar3 + '\x01',(char)puVar3[0x28],
                 *(char *)((longlong)puVar3 + 0xa1),in_stack_ffffffffffffff58);
    uVar5 = puVar3[1];
    local_74 = 1;
    if (0 < (int)uVar5) {
      do {
        iVar16 = local_74 + -1;
        (**(code **)(**(longlong **)(puVar3 + 4) + 0x18))
                  (*(longlong **)(puVar3 + 4),&local_38,iVar16);
        uVar7 = (undefined4)(in_stack_ffffffffffffff58 >> 0x20);
        cVar18 = (char)local_74;
        if (*local_38 == 0x49) {
          *(undefined1 *)(*(longlong *)(puVar3 + 6) + (longlong)iVar16 * 0xc) = 1;
          iVar16 = FUN_004170c0(&DAT_016527b4,local_38,1);
          if (iVar16 < 1) {
            iVar16 = FUN_004170c0(&DAT_016527c4,local_38,1);
            uVar6 = 0;
            if (local_38 != (short *)0x0) {
              uVar6 = *(undefined4 *)(local_38 + -2);
            }
            FUN_00416dc0(&local_38,local_38,iVar16 + 1,uVar6);
          }
          else {
            iVar16 = FUN_004170c0(&DAT_016527b4,local_38,1);
            uVar6 = 0;
            if (local_38 != (short *)0x0) {
              uVar6 = *(undefined4 *)(local_38 + -2);
            }
            FUN_00416dc0(&local_38,local_38,iVar16 + 1,uVar6);
          }
          uVar9 = FUN_016ebdc0(param_1);
          uVar20 = CONCAT44(uVar7,6);
          uVar9 = FUN_01b07f10(param_2,uVar9,local_38,&DAT_01f7d074,uVar20,1);
          in_stack_ffffffffffffff58 =
               CONCAT71((int7)((ulonglong)uVar20 >> 8),(char)*puVar3 + '\x01');
          FUN_016ecf90(param_1,(char)*puVar3 + cVar18 + '\x01',uVar9,1,in_stack_ffffffffffffff58);
        }
        else {
          lVar10 = (longlong)iVar16;
          *(undefined1 *)(*(longlong *)(puVar3 + 6) + lVar10 * 0xc) = 0;
          iVar16 = FUN_004170c0(&DAT_016527c4,local_38,1);
          uVar7 = 0;
          if (local_38 != (short *)0x0) {
            uVar7 = *(undefined4 *)(local_38 + -2);
          }
          FUN_00416dc0(&local_38,local_38,iVar16 + 1,uVar7);
          uVar7 = (undefined4)(in_stack_ffffffffffffff58 >> 0x20);
          if (*(char *)((longlong)puVar3 + 0x61) == '\0') {
            iVar16 = FUN_0043fc00(local_38);
            iVar16 = iVar16 * 2 + 1;
            cVar17 = (char)iVar16;
            in_stack_ffffffffffffff58 =
                 CONCAT71((int7)(in_stack_ffffffffffffff58 >> 8),(char)*puVar3 + '\x01');
            FUN_016ec850(param_1,(char)*puVar3 + cVar18 + '\x01',iVar16,
                         CONCAT31((int3)((uint)iVar16 >> 8),cVar17 + '\x01'),
                         in_stack_ffffffffffffff58);
            *(char *)(*(longlong *)(puVar3 + 6) + 1 + lVar10 * 0xc) = cVar17;
            *(char *)(*(longlong *)(puVar3 + 6) + 2 + lVar10 * 0xc) = cVar17 + '\x01';
          }
          else {
            uVar9 = FUN_016ebdc0(param_1);
            uVar20 = CONCAT44(uVar7,3);
            lVar12 = FUN_01b07f10(param_2,uVar9,local_38,&DAT_01f7d06c,uVar20,1);
            if (*(char *)(lVar12 + 5) == '\x01') {
              uVar15 = 0;
            }
            else {
              uVar15 = 2;
            }
            *(undefined1 *)(*(longlong *)(puVar3 + 6) + 1 + lVar10 * 0xc) = 1;
            *(undefined1 *)(*(longlong *)(puVar3 + 6) + 2 + lVar10 * 0xc) = uVar15;
            in_stack_ffffffffffffff58 = CONCAT71((int7)((ulonglong)uVar20 >> 8),uVar15);
            FUN_016ecd60(param_1,(char)*puVar3 + cVar18 + '\x01',lVar12,
                         CONCAT71((uint7)(uint3)((uint)local_74 >> 8),1),in_stack_ffffffffffffff58,
                         (char)*puVar3 + '\x01');
          }
        }
        local_74 = local_74 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (((char)puVar3[0x1b] == '\0') || (*(char *)(param_2 + 0x32e) == '\0')) {
LAB_016525c2:
      cVar18 = '\0';
    }
    else {
      if ((byte)puVar3[3] < 8) {
        bVar19 = ((int)CONCAT71(uVar13,1) << ((byte)puVar3[3] & 0x1f) & 0x8cU) != 0;
      }
      else {
        bVar19 = false;
      }
      if (!bVar19) goto LAB_016525c2;
      cVar18 = '\x01';
    }
    *(char *)((longlong)puVar3 + 0x6d) = cVar18;
    if (*(char *)((longlong)puVar3 + 0x6d) != '\0') {
      FUN_016ea1b0(param_1,2);
    }
  }
  lVar10 = FUN_016517b0(param_1,param_2);
  if (lVar10 != 0) {
    local_40 = lVar10;
    FUN_00597e50(*(longlong *)(param_1 + 0x130) + 8,&local_40);
  }
  FUN_0164be80(param_1,param_2,local_30);
  if (!bVar2) {
    FUN_016e9f40(param_1,FUN_016502e0);
  }
  FUN_016e9f50(param_1,FUN_0164bf30);
  FUN_016e9fd0(param_1,FUN_0164d630);
  FUN_016e9ff0(param_1,FUN_0164c3d0);
  FUN_016ea040(param_1,FUN_0164c5a0);
  if ((*(char *)(param_2 + 0xed6) == '\0') || (*(int *)(*(longlong *)(param_1 + 0x130) + 0x10) == 0)
     ) {
    if (((char)puVar3[3] == '\x03') || (*PTR_DAT_02004ff8 != '\0')) {
      FUN_016e9f70(param_1,FUN_0164d150);
    }
    else {
      FUN_016e9f60(param_1,FUN_0164ccc0);
    }
  }
code_r0x016526de:
  FUN_00414560(&local_60,3);
  FUN_00414480(&local_38);
  return;
}

