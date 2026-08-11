/* Ghidra address: 01654cb0 */
/* Ghidra symbol: FUN_01654cb0 */


void FUN_01654cb0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  char cVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined7 uVar12;
  int iVar13;
  bool bVar14;
  int local_6c;
  int local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  short *local_40;
  short *local_38;
  uint *local_30;
  
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_38 = (short *)0x0;
  local_40 = (short *)0x0;
  uVar12 = (undefined7)((ulonglong)param_2 >> 8);
  pbVar9 = (byte *)FUN_016ea6c0(param_1,CONCAT71(uVar12,1));
  FUN_016ee260(param_1,&local_30,0xd0,0);
  puVar1 = local_30;
  local_30[1] = (uint)*pbVar9;
  *(undefined2 *)(local_30 + 2) = *(undefined2 *)(pbVar9 + 0x10);
  *(undefined8 *)(local_30 + 8) = *(undefined8 *)(pbVar9 + 0x18);
  *(byte *)(local_30 + 3) = pbVar9[0x40];
  *(undefined8 *)(local_30 + 4) = *(undefined8 *)(pbVar9 + 8);
  *(undefined8 *)(local_30 + 0x14) = *(undefined8 *)(pbVar9 + 0x28);
  *(undefined2 *)((longlong)local_30 + 10) = *(undefined2 *)(pbVar9 + 0x48);
  *(undefined8 *)(local_30 + 0x10) = *(undefined8 *)(pbVar9 + 0x50);
  local_30[0x19] = 0;
  local_30[0x1a] = 0;
  local_6c = 0;
  iVar13 = 0;
  bVar14 = true;
  *(char *)(local_30 + 0x1b) = '\x01';
  *(char *)((longlong)local_30 + 0x6d) = '\0';
  local_30[0x1c] = 0xffffffff;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  local_30[0x27] = 0xffffffff;
  *(char *)(local_30 + 0x28) = '\x01';
  *(char *)((longlong)local_30 + 0xa1) = '\x02';
  uVar4 = FUN_016ea1b0(param_1,2);
  *(undefined2 *)((longlong)puVar1 + 0x9a) = uVar4;
  plVar10 = (longlong *)FUN_016ebdc0(param_1);
  iVar5 = (**(code **)(*plVar10 + 0x1c8))();
  local_68 = 0;
  if (-1 < iVar5 + -1) {
    do {
      plVar10 = (longlong *)FUN_016ebdc0(param_1);
      (**(code **)(*plVar10 + 0x298))(plVar10,&local_38,local_68);
      if (*local_38 == 0x4e) {
        local_6c = local_6c + 1;
        FUN_00416ba0(local_50,&PTR_u_laFloralwhite_0165539c,local_38);
        iVar6 = (**(code **)(**(longlong **)(puVar1 + 4) + 0xb0))
                          (*(longlong **)(puVar1 + 4),local_50[0]);
        if (-1 < iVar6) {
          puVar1[0x19] = puVar1[0x19] + 1;
        }
      }
      else if (*local_38 == 0x56) {
        FUN_00416ba0(&local_58,&PTR_DAT_016553b0,local_38);
        iVar6 = (**(code **)(**(longlong **)(puVar1 + 4) + 0xb0))
                          (*(longlong **)(puVar1 + 4),local_58);
        if (-1 < iVar6) {
          puVar1[0x1a] = puVar1[0x1a] + 1;
        }
      }
      else {
        iVar13 = iVar13 + 1;
        if (iVar13 == 1) {
          iVar6 = FUN_004170c0(&DAT_016553c4,local_38,1);
          bVar14 = 0 < iVar6;
        }
      }
      local_68 = local_68 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (iVar13 == 1) {
    plVar10 = (longlong *)FUN_016ebdc0(param_1);
    cVar2 = (**(code **)(*plVar10 + 0x1c8))(plVar10);
    *(char *)(puVar1 + 0x28) = cVar2;
    *(char *)((longlong)puVar1 + 0xa1) = '\0';
  }
  else {
    plVar10 = (longlong *)FUN_016ebdc0(param_1);
    cVar2 = (**(code **)(*plVar10 + 0x1c8))(plVar10);
    *(char *)(puVar1 + 0x28) = cVar2 + -1;
    plVar10 = (longlong *)FUN_016ebdc0(param_1);
    cVar2 = (**(code **)(*plVar10 + 0x1c8))(plVar10);
    *(char *)((longlong)puVar1 + 0xa1) = cVar2;
  }
  uVar11 = FUN_00409570((longlong)(int)(puVar1[1] * 8));
  *(undefined8 *)(puVar1 + 10) = uVar11;
  uVar11 = FUN_00409570((longlong)(int)(puVar1[1] * 8));
  *(undefined8 *)(puVar1 + 0xe) = uVar11;
  uVar11 = FUN_00409570((longlong)(int)(puVar1[1] * 8));
  *(undefined8 *)(puVar1 + 0xc) = uVar11;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  uVar7 = FUN_016e9e80(param_1,(char)puVar1[0x19] + (char)puVar1[0x1a] * '\x02' + '\x01');
  *puVar1 = uVar7 & 0xff;
  if (bVar14) {
    FUN_016ebdd0(param_1,(char)*puVar1 + '\x01',(char)puVar1[0x28],
                 *(char *)((longlong)puVar1 + 0xa1),0);
  }
  else {
    FUN_016ebe60(param_1,(char)*puVar1 + '\x01',(char)puVar1[0x28],
                 *(char *)((longlong)puVar1 + 0xa1),0);
  }
  uVar7 = (**(code **)(**(longlong **)(puVar1 + 4) + 0x28))(*(longlong **)(puVar1 + 4));
  if (puVar1[1] != uVar7) {
    (**(code **)(**(longlong **)(param_1 + 0x128) + 0x288))
              (*(longlong **)(param_1 + 0x128),&local_60);
    FUN_00416ad0(&local_60,L": Dimension <> # of Controlling components");
    uVar11 = FUN_0044d490(&PTR_FUN_004334c0,1,local_60);
    FUN_004134c0(uVar11);
  }
  cVar2 = '\x01';
  uVar7 = puVar1[1];
  local_68 = 1;
  if (0 < (int)uVar7) {
    do {
      (**(code **)(**(longlong **)(puVar1 + 4) + 0x18))
                (*(longlong **)(puVar1 + 4),&local_40,local_68 + -1);
      if (*local_40 == 0x49) {
        iVar5 = FUN_004170c0(&DAT_0165543c,local_40,1);
        uVar8 = 0;
        if (local_40 != (short *)0x0) {
          uVar8 = *(undefined4 *)(local_40 + -2);
        }
        FUN_00416dc0(&local_40,local_40,iVar5 + 2,uVar8);
        iVar5 = FUN_0043fc00(local_40);
        iVar5 = iVar5 * 2 + local_6c + -1;
        FUN_016ebdd0(param_1,(char)*puVar1 + cVar2 + '\x01',iVar5,
                     CONCAT31((int3)((uint)iVar5 >> 8),(char)iVar5 + '\x01'),1);
        if (bVar14) {
          cVar3 = (char)*puVar1 + cVar2;
          FUN_016ecbf0(param_1,cVar3 + '\x02',cVar3 + '\x01',(char)*puVar1 + '\x01');
        }
        else {
          cVar3 = (char)*puVar1 + cVar2;
          FUN_016eca70(param_1,cVar3 + '\x02',cVar3 + '\x01',(char)*puVar1 + '\x01');
        }
        cVar2 = cVar2 + '\x02';
      }
      else {
        iVar5 = FUN_004170c0(&DAT_0165543c,local_40,1);
        uVar8 = 0;
        if (local_40 != (short *)0x0) {
          uVar8 = *(undefined4 *)(local_40 + -2);
        }
        FUN_00416dc0(&local_40,local_40,iVar5 + 2,uVar8);
        uVar8 = FUN_0043fc00(local_40);
        if (bVar14) {
          FUN_016ec970(param_1,(char)*puVar1 + cVar2 + '\x01',uVar8,0,(char)*puVar1 + '\x01');
        }
        else {
          FUN_016ec850(param_1,(char)*puVar1 + cVar2 + '\x01',uVar8,0,(char)*puVar1 + '\x01');
        }
        cVar2 = cVar2 + '\x01';
      }
      local_68 = local_68 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  *(bool *)(puVar1 + 0x1b) = !bVar14;
  FUN_0164be80(param_1,param_2,local_30);
  FUN_016e9f40(param_1,FUN_01654c40);
  FUN_016e9f50(param_1,FUN_0164bf30);
  if (!bVar14) {
    FUN_016e9ff0(param_1,FUN_0164c3d0);
    FUN_016ea040(param_1,FUN_0164c5a0);
  }
  else {
    FUN_016e9ff0(param_1,FUN_0164c040);
    FUN_016ea040(param_1,FUN_0164c240);
  }
  uVar4 = FUN_016ea1b0(param_1,4);
  *(undefined2 *)(puVar1 + 0x26) = uVar4;
  if (((char)puVar1[0x1b] != '\0') && (*(char *)(param_2 + 0x32e) != '\0')) {
    if ((byte)puVar1[3] < 8) {
      bVar14 = ((int)CONCAT71(uVar12,1) << ((byte)puVar1[3] & 0x1f) & 0x8cU) != 0;
    }
    else {
      bVar14 = false;
    }
    if (bVar14) {
      cVar2 = '\x01';
      goto LAB_01655329;
    }
  }
  cVar2 = '\0';
LAB_01655329:
  *(char *)((longlong)puVar1 + 0x6d) = cVar2;
  FUN_00414560(&local_60,3);
  FUN_00414560(&local_40,2);
  return;
}

