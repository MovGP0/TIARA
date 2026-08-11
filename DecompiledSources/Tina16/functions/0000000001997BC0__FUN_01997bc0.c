/* Ghidra address: 01997bc0 */
/* Ghidra symbol: FUN_01997bc0 */


void FUN_01997bc0(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_108 [36];
  int local_e4;
  int local_e0;
  int local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0 [2];
  longlong *local_90 [2];
  longlong local_80;
  longlong *local_48;
  int local_40;
  int local_3c [3];
  
  local_d8 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0[0] = 0;
  local_e4 = param_2;
  local_e0 = param_3;
  plVar6 = (longlong *)FUN_00b94e60(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xd0),param_2);
  (**(code **)(*plVar6 + 0x1f0))(plVar6,local_e0,local_3c,&local_40);
  cVar1 = FUN_0198a580(plVar6);
  if (cVar1 != '\x06') {
    cVar1 = FUN_019921c0(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xd0),local_3c[0],local_40)
    ;
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*plVar6 + 0x1e0))(plVar6,local_e0);
      if (cVar1 == '\0') {
        local_3c[0] = local_3c[0] + 1;
      }
    }
  }
  iVar2 = FUN_01996be0(*(longlong *)(param_1 + 0x30) + 0x78,local_3c[0],local_40);
  local_dc = iVar2;
  if (iVar2 < 0) goto LAB_019982c6;
  (**(code **)(*plVar6 + 0x208))
            (plVar6,local_e0,*(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x74),
             *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x100));
  lVar7 = FUN_01996b70(*(longlong *)(param_1 + 0x30) + 0x78,iVar2);
  cVar1 = (**(code **)(*plVar6 + 600))(plVar6,local_e0);
  if (cVar1 == '\0') {
    do {
      plVar8 = (longlong *)
               FUN_00b94e60(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xd0),
                            *(undefined4 *)(lVar7 + 8));
      (**(code **)(*plVar8 + 0x208))
                (plVar8,*(undefined4 *)(lVar7 + 0xc),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x74),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x100));
      uVar9 = FUN_00b94e60(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xd0),
                           *(undefined4 *)(lVar7 + 8));
      cVar1 = FUN_0198a580(uVar9);
      if ((cVar1 == '\x03') && (*(int *)(*(longlong *)(param_1 + 0x30) + 0x74) == 0)) {
        uVar9 = FUN_00b94e60(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xd0),
                             *(undefined4 *)(lVar7 + 8));
        FUN_01997a20(auStack_108,uVar9);
      }
      FUN_019978d0(auStack_108,*(undefined4 *)(lVar7 + 8),*(undefined4 *)(lVar7 + 0xc));
      iVar2 = iVar2 + 1;
      if (iVar2 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x88)) {
        lVar7 = FUN_01996b70(*(longlong *)(param_1 + 0x30) + 0x78,iVar2);
      }
    } while (((iVar2 != *(int *)(*(longlong *)(param_1 + 0x30) + 0x88)) &&
             (*(int *)(lVar7 + 0x10) == local_3c[0])) && (*(int *)(lVar7 + 0x14) == local_40));
  }
  iVar2 = local_dc;
  lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x100) + 0x488);
  if ((lVar7 == 0) || (*(char *)(lVar7 + 0xdd8) == '\0')) {
    lVar7 = FUN_01996b70(*(longlong *)(param_1 + 0x30) + 0x78,local_dc);
    do {
      plVar8 = (longlong *)
               FUN_00b94e60(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xd0),
                            *(undefined4 *)(lVar7 + 8));
      if (*(int *)(lVar7 + 8) == local_e4) {
LAB_01997ed3:
        cVar1 = FUN_0198a580(plVar8);
        if (cVar1 == '\x05') {
          iVar3 = (**(code **)(*plVar8 + 0x210))(plVar8,1 - *(int *)(lVar7 + 0xc));
          if (iVar3 == -1) {
            cVar1 = FUN_019977f0(auStack_108,plVar8);
            if (((cVar1 == '\0') || (*(char *)(*(longlong *)(param_1 + 0x30) + 0xe0) == '\x0f')) ||
               (*(char *)(*(longlong *)(param_1 + 0x30) + 0x108) == '\0')) {
              FUN_01997bc0(param_1,*(undefined4 *)(lVar7 + 8),1 - *(int *)(lVar7 + 0xc));
            }
          }
        }
      }
      else {
        cVar1 = (**(code **)(*plVar6 + 600))(plVar6,local_e0);
        if (cVar1 == '\0') goto LAB_01997ed3;
      }
      iVar2 = iVar2 + 1;
      if (iVar2 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x88)) {
        lVar7 = FUN_01996b70(*(longlong *)(param_1 + 0x30) + 0x78,iVar2);
      }
    } while (((iVar2 != *(int *)(*(longlong *)(param_1 + 0x30) + 0x88)) &&
             (*(int *)(lVar7 + 0x10) == local_3c[0])) && (*(int *)(lVar7 + 0x14) == local_40));
  }
  FUN_01997a20(auStack_108,plVar6);
  cVar1 = FUN_0198a580(plVar6);
  if (cVar1 != '\x05') goto LAB_019982c6;
  cVar1 = FUN_017c3740(plVar6);
  if (cVar1 != '\0') goto LAB_019982c6;
  if (*(char *)((longlong)plVar6 + 0x3dc) == '\0') {
    bVar10 = false;
  }
  else {
    local_80 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xd0) + 0x408) + 8;
    local_48 = plVar6;
    iVar2 = FUN_00596a10(local_80,&local_48);
    bVar10 = iVar2 == -1;
  }
  if (bVar10) {
    uVar4 = (**(code **)(*plVar6 + 0x210))(plVar6,0);
    cVar1 = FUN_01997840(auStack_108,uVar4);
    if (cVar1 == '\0') {
      local_90[0] = plVar6;
      FUN_00597e50(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xd0) + 0x408) + 8,
                   local_90);
    }
  }
  if ((local_e0 == 0) && (plVar6[0x7c] != 0)) {
    FUN_004169a0(local_a0,plVar6 + 0x5b);
    cVar1 = FUN_017c4210(plVar6[0x7c],local_a0[0]);
    if (cVar1 == '\0') goto LAB_019980a5;
  }
  else {
LAB_019980a5:
    if ((local_e0 == 1) && (plVar6[0x7d] != 0)) {
      FUN_004169a0(&local_a8,plVar6 + 0x5b);
      cVar1 = FUN_017c4210(plVar6[0x7d],local_a8);
      if (cVar1 != '\0') goto LAB_01998104;
    }
    if (((plVar6[0x7c] != 0) || (plVar6[0x7d] != 0)) || ((char)plVar6[0x5b] == '\0'))
    goto LAB_019982c6;
  }
LAB_01998104:
  for (iVar2 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x6c);
      iVar2 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xd0) + 0x10);
      iVar2 = iVar2 + 1) {
    uVar9 = FUN_00b94e60(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xd0),iVar2);
    cVar1 = FUN_0198a580(uVar9);
    if (cVar1 != '\x05') break;
    plVar8 = (longlong *)FUN_0198d420(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xd0),iVar2);
    if (plVar8 != plVar6) {
      cVar1 = FUN_017c3740(plVar8);
      if (cVar1 == '\0') {
        FUN_004169a0(&local_b0,plVar8 + 0x5b);
        lVar7 = local_b0;
        FUN_004169a0(&local_b8,plVar6 + 0x5b);
        if (lVar7 == local_b8) {
          bVar10 = true;
        }
        else if ((lVar7 == 0) || (local_b8 == 0)) {
          bVar10 = false;
        }
        else {
          iVar3 = FUN_0043e420(lVar7,local_b8);
          bVar10 = iVar3 == 0;
        }
        if (bVar10) {
          FUN_017ff570(plVar8,&local_c0);
          FUN_017ff570(plVar6,&local_c8);
          iVar3 = FUN_00416db0(local_c0,local_c8);
          if (iVar3 == 0) {
            lVar7 = plVar8[0x7c];
            iVar3 = -1;
            if (lVar7 != 0) {
              FUN_004169a0(&local_d0,plVar8 + 0x5b);
              cVar1 = FUN_017c4210(lVar7,local_d0);
              iVar3 = -1;
              if (cVar1 != '\0') {
                iVar3 = 0;
              }
            }
            lVar7 = plVar8[0x7d];
            if (lVar7 != 0) {
              FUN_004169a0(&local_d8,plVar8 + 0x5b);
              cVar1 = FUN_017c4210(lVar7,local_d8);
              if (cVar1 != '\0') {
                iVar3 = 1;
              }
            }
            if (((plVar8[0x7c] == 0) && (plVar8[0x7d] == 0)) && ((char)plVar8[0x5b] != '\0')) {
              iVar3 = 0;
            }
            if (iVar3 != -1) {
              iVar5 = (**(code **)(*plVar8 + 0x210))(plVar8,iVar3);
              if (iVar5 == -1) {
                FUN_01997bc0(param_1,iVar2,iVar3);
              }
            }
          }
        }
      }
    }
  }
LAB_019982c6:
  FUN_00414560(&local_d8,8);
  return;
}

