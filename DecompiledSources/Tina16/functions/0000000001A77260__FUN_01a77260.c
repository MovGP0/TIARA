/* Ghidra address: 01a77260 */
/* Ghidra symbol: FUN_01a77260 */


void FUN_01a77260(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined8 local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_48 = 0;
  local_40 = 0;
  if (*(longlong *)(param_1 + 0x798) == 0) goto LAB_01a77c82;
  FUN_01aee850(&local_40,0x41a,*(undefined4 *)(param_1 + 0x6b8),param_5,param_6);
  FUN_01aed640(*(undefined8 *)PTR_DAT_020041a8,local_40);
  FUN_01aee850(&local_48,0x41c,*(undefined4 *)(param_1 + 0x6b8),param_5,param_6);
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_48);
  uVar5 = (ulonglong)*(byte *)(param_1 + 0x7a8);
  if (uVar5 < 9) {
    if (uVar5 == 8) {
      plVar2 = *(longlong **)(param_1 + 0xfe8);
      (**(code **)(*plVar2 + 0x78))(plVar2,*(undefined8 *)(param_1 + 0x780));
      local_38 = (int)plVar2[0xd];
      local_34 = *(int *)((longlong)plVar2 + 0x6c);
      local_30 = (int)plVar2[0xe];
      local_2c = *(int *)((longlong)plVar2 + 0x74);
      iVar4 = local_30;
      if (local_38 < local_30) {
        iVar4 = local_38;
      }
      *(int *)(plVar2 + 0xd) = iVar4;
      iVar4 = local_34;
      if (local_2c <= local_34) {
        iVar4 = local_2c;
      }
      *(int *)((longlong)plVar2 + 0x6c) = iVar4;
      iVar4 = local_30;
      if (local_30 < local_38) {
        iVar4 = local_38;
      }
      *(int *)(plVar2 + 0xe) = iVar4;
      iVar4 = local_34;
      if (local_34 <= local_2c) {
        iVar4 = local_2c;
      }
      *(int *)((longlong)plVar2 + 0x74) = iVar4;
      (**(code **)(*plVar2 + 0x70))(plVar2,*(undefined8 *)(param_1 + 0x780));
      (**(code **)(*plVar2 + 0xe8))(plVar2);
      *(undefined8 *)(param_1 + 0xfe8) = 0;
      FUN_0082a6c0(*(undefined8 *)(param_1 + 0xa90),1);
      *(undefined1 *)(param_1 + 0x7a8) = 0;
      goto LAB_01a77c82;
    }
    if (uVar5 == 2) {
      (**(code **)(**(longlong **)(param_1 + 0x1008) + 0x140))
                (*(longlong **)(param_1 + 0x1008),*(undefined4 *)(param_1 + 0x768),
                 *(undefined4 *)(param_1 + 0x76c),*(undefined4 *)(param_1 + 0x770),
                 *(undefined4 *)(param_1 + 0x774),*(undefined8 *)(param_1 + 0x780));
      FUN_01acee70(*(undefined8 *)(param_1 + 0x798));
      (**(code **)(**(longlong **)(param_1 + 0x1008) + 0x148))
                (*(longlong **)(param_1 + 0x1008),*(undefined4 *)(param_1 + 0x768),
                 *(undefined4 *)(param_1 + 0x76c),*(undefined4 *)(param_1 + 0x770),
                 *(undefined4 *)(param_1 + 0x774));
      FUN_01a782f0(param_1,&local_60);
      cVar3 = FUN_01acf9e0(*(undefined8 *)(param_1 + 0x798),&local_60);
      if (cVar3 == '\0') {
        FUN_01ce4cd0(*(undefined8 *)(param_1 + 0x1008),*(undefined8 *)(param_1 + 0x780),param_1);
      }
      else {
        FUN_01acfa60(*(undefined8 *)(param_1 + 0x798));
      }
      if (*(char *)(*(longlong *)(param_1 + 0x798) + 0x10d) != '\0') {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1008) + 0x70);
        uVar9 = (**(code **)(*plVar2 + 0x30))(plVar2,0);
        FUN_01ad4210(*(undefined8 *)(param_1 + 0x798),uVar9);
        FUN_01acfc60(*(undefined8 *)(param_1 + 0x798));
      }
      FUN_01acedf0(*(undefined8 *)(param_1 + 0x798));
      FUN_01aceef0(*(undefined8 *)(param_1 + 0x798));
      lVar1 = *(longlong *)(param_1 + 0x798);
      if (*(char *)(lVar1 + 0x10d) == '\0') {
        FUN_01a8dee0(*(undefined8 *)(lVar1 + 0xe8),*(undefined8 *)(param_1 + 0x1008));
        FUN_01ae5650(*(undefined8 *)(param_1 + 0x798));
      }
      else {
        FUN_01aceb90(lVar1,1);
      }
      FUN_0082a6c0(*(undefined8 *)(param_1 + 0xa90),1);
      FUN_01a794b0(param_1,param_2);
      *(undefined8 *)(param_1 + 0x1008) = 0;
      *(undefined1 *)(param_1 + 0x7a8) = 0;
      goto LAB_01a77c82;
    }
    if (uVar5 == 4) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xf0);
      if ((plVar2 != (longlong *)0x0) && ((char)plVar2[2] != '\0')) {
        (**(code **)(*plVar2 + 0x50))(plVar2,0);
        local_50 = FUN_00498310(0,0);
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xf0);
        (**(code **)(*plVar2 + 0xd8))
                  (plVar2,DAT_01fcab48,&local_50,*(undefined8 *)(param_1 + 0x780));
        FUN_01a8dee0(*(undefined8 *)(*(longlong *)(param_1 + 0x798) + 0xe8),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x798) + 0xf0));
        FUN_01ae5650(*(undefined8 *)(param_1 + 0x798));
      }
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xf8);
      if ((plVar2 != (longlong *)0x0) && ((char)plVar2[2] != '\0')) {
        (**(code **)(*plVar2 + 0x50))(plVar2,0);
        local_50 = FUN_00498310(0,0);
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xf8);
        (**(code **)(*plVar2 + 0xd8))
                  (plVar2,DAT_01fcab48,&local_50,*(undefined8 *)(param_1 + 0x780));
        FUN_01a8dee0(*(undefined8 *)(*(longlong *)(param_1 + 0x798) + 0xe8),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x798) + 0xf8));
        FUN_01ae5650(*(undefined8 *)(param_1 + 0x798));
      }
      *(undefined1 *)(param_1 + 0x7a8) = 0;
      goto LAB_01a77c82;
    }
    if (uVar5 != 5) goto LAB_01a77c82;
    lVar1 = *(longlong *)(param_1 + 0x7a0);
    iVar4 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x28))();
    iVar7 = 0;
    if (-1 < iVar4 + -1) {
      do {
        plVar2 = *(longlong **)(lVar1 + 0x10);
        lVar6 = (**(code **)(*plVar2 + 0x30))(plVar2,iVar7);
        uVar9 = FUN_01ae5d90(*(undefined8 *)(param_1 + 0x798));
        FUN_01ae5df0(lVar6,uVar9);
        uVar9 = FUN_01ae5da0(*(undefined8 *)(param_1 + 0x798));
        FUN_01ae5e00(lVar6,uVar9);
        uVar9 = FUN_01ae5dc0(*(undefined8 *)(param_1 + 0x798));
        FUN_01ae5e30(lVar6,uVar9);
        uVar9 = FUN_01ae5dd0(*(undefined8 *)(param_1 + 0x798));
        FUN_01ae5e40(lVar6,uVar9);
        *(undefined4 *)(lVar6 + 0x100) = 0;
        *(undefined4 *)(lVar6 + 0x104) = 0;
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    lVar1 = *(longlong *)(param_1 + 0x798);
    plVar2 = *(longlong **)(lVar1 + 0xb8);
    if ((char)plVar2[2] != '\0') {
      (**(code **)(*plVar2 + 0x50))(plVar2,0);
    }
    if (*(char *)(*(longlong *)(lVar1 + 0xc0) + 0x10) != '\0') {
      (**(code **)(**(longlong **)(lVar1 + 0xc0) + 0x50))(*(longlong **)(lVar1 + 0xc0),0);
    }
    if (*(char *)(*(longlong *)(lVar1 + 200) + 0x10) != '\0') {
      (**(code **)(**(longlong **)(lVar1 + 200) + 0x50))(*(longlong **)(lVar1 + 200),0);
    }
    lVar6 = *(longlong *)(lVar1 + 0xd0);
    if (*(char *)(lVar6 + 0x10) != '\0') {
      lVar6 = (**(code **)(**(longlong **)(lVar1 + 0xd0) + 0x50))(*(longlong **)(lVar1 + 0xd0),0);
    }
    if (*(char *)(lVar1 + 0x108) == '\0') {
LAB_01a77664:
      FUN_01acfc60(lVar1);
    }
    else {
      if (*(byte *)(lVar1 + 0xb0) < 8) {
        bVar8 = ((int)CONCAT71((int7)((ulonglong)lVar6 >> 8),1) << (*(byte *)(lVar1 + 0xb0) & 0x1f)
                & 1U) != 0;
      }
      else {
        bVar8 = false;
      }
      if (!bVar8) goto LAB_01a77664;
      FUN_01acfa60(lVar1);
    }
    FUN_01aceb90(lVar1,1);
    *(undefined1 *)(param_1 + 0x7a8) = 0;
    goto LAB_01a77c82;
  }
  if (1 < uVar5 - 0x11) {
    if (uVar5 == 0x13) {
      *(undefined1 *)(param_1 + 0x7a8) = 0;
    }
    else if (uVar5 == 0x16) {
      plVar2 = *(longlong **)(param_1 + 0x1000);
      FUN_010ef4e0(plVar2,*(undefined8 *)(param_1 + 0x780));
      (**(code **)(*plVar2 + 0x130))(plVar2,DAT_01fcab48,*(undefined8 *)(param_1 + 0x780));
      *(undefined1 *)(param_1 + 0x7a8) = 0;
    }
    goto LAB_01a77c82;
  }
  plVar2 = *(longlong **)(param_1 + 0x1000);
  *(undefined1 *)((longlong)plVar2 + 0x11) = 1;
  cVar3 = FUN_004113d0(plVar2,&LAB_00f12330);
  if (cVar3 != '\0') {
    (**(code **)(*plVar2 + 0x120))(plVar2,param_1,*(undefined8 *)(param_1 + 0x780));
    FUN_00f14480(*(undefined8 *)(param_1 + 0x1000),param_1 + 0x1018,param_1 + 0x101c);
    FUN_00f149f0(*(undefined8 *)(param_1 + 0x1000),param_1,*(undefined8 *)(param_1 + 0x780));
    (**(code **)(**(longlong **)(param_1 + 0x1000) + 0x128))
              (*(longlong **)(param_1 + 0x1000),param_1,*(undefined8 *)(param_1 + 0x780));
  }
  FUN_00498350(&local_60,0,0,0,0);
  cVar3 = FUN_01a8e470(param_1 + 0x1028,&local_60);
  if (cVar3 == '\0') {
    uVar9 = FUN_00498310(*(undefined4 *)(param_1 + 0x1018),*(undefined4 *)(param_1 + 0x101c));
    iVar4 = thunk_FUN_03f16006(param_1 + 0x1028,uVar9);
    if (iVar4 != 0) goto LAB_01a77a73;
    (**(code **)(**(longlong **)(param_1 + 0x1000) + 0xa8))
              (*(longlong **)(param_1 + 0x1000),
               *(int *)(param_1 + 0x1020) - *(int *)(param_1 + 0x1018),
               *(int *)(param_1 + 0x1024) - *(int *)(param_1 + 0x101c));
    (**(code **)(**(longlong **)(param_1 + 0x1000) + 0xe8))(*(longlong **)(param_1 + 0x1000));
    local_50 = FUN_00498310(*(undefined4 *)(param_1 + 0x1018),*(undefined4 *)(param_1 + 0x101c));
    (**(code **)(**(longlong **)(param_1 + 0x1000) + 0xd8))
              (*(longlong **)(param_1 + 0x1000),param_1,&local_50,*(undefined8 *)(param_1 + 0x780));
    local_50 = FUN_00498310(*(undefined4 *)(param_1 + 0x1020),*(undefined4 *)(param_1 + 0x1024));
    (**(code **)(**(longlong **)(param_1 + 0x1000) + 0xd8))
              (*(longlong **)(param_1 + 0x1000),param_1,&local_50,*(undefined8 *)(param_1 + 0x780));
  }
  else {
LAB_01a77a73:
    (**(code **)(**(longlong **)(param_1 + 0x1000) + 0xe8))(*(longlong **)(param_1 + 0x1000));
    local_50 = FUN_00498310(*(undefined4 *)(param_1 + 0x1020),*(undefined4 *)(param_1 + 0x1024));
    (**(code **)(**(longlong **)(param_1 + 0x1000) + 0xd8))
              (*(longlong **)(param_1 + 0x1000),param_1,&local_50,*(undefined8 *)(param_1 + 0x780));
    local_50 = FUN_00498310(*(undefined4 *)(param_1 + 0x1018),*(undefined4 *)(param_1 + 0x101c));
    (**(code **)(**(longlong **)(param_1 + 0x1000) + 0xd8))
              (*(longlong **)(param_1 + 0x1000),param_1,&local_50,*(undefined8 *)(param_1 + 0x780));
  }
  FUN_00498350(&local_60,0,0,0,0);
  *(undefined8 *)(param_1 + 0x1028) = local_60;
  *(undefined8 *)(param_1 + 0x1030) = uStack_58;
  FUN_01add6f0(*(undefined8 *)(param_1 + 0x798),0);
  *(undefined1 *)(param_1 + 0x7a8) = 0;
LAB_01a77c82:
  FUN_00414560(&local_48,2);
  return;
}

