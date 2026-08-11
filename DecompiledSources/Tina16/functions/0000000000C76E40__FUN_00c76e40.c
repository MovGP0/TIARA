/* Ghidra address: 00c76e40 */
/* Ghidra symbol: FUN_00c76e40 */


void FUN_00c76e40(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_68 [24];
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  *(undefined1 *)(param_1 + 0x2e) = 1;
  FUN_00722870(param_1);
  *(undefined1 *)(param_1 + 0x46) = 0;
  param_1[0x33] = DAT_02019d38;
  param_1[0x34] = DAT_02019d48;
  *(undefined4 *)(param_1 + 0x35) = DAT_02019d20;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = DAT_02019d24;
  *(undefined4 *)(param_1 + 0x36) = DAT_02019d28;
  *(int *)((longlong)param_1 + 0x1b4) = DAT_02019d2c;
  uVar4 = (**(code **)(*param_1 + 0x90))(param_1);
  lVar5 = thunk_FUN_04118143(uVar4,0xfffffffc);
  param_1[0x52] = lVar5;
  uVar4 = (**(code **)(*param_1 + 0x90))(param_1);
  thunk_FUN_03c9d277(uVar4,0xfffffffc,param_1[0x51]);
  uVar4 = (**(code **)(*param_1 + 0x90))(param_1);
  lVar5 = thunk_FUN_04118143(uVar4,0xfffffff8);
  lVar6 = thunk_FUN_04118143(lVar5,0xfffffffc);
  param_1[0x50] = lVar6;
  thunk_FUN_03c9d277(lVar5,0xfffffffc,param_1[0x4f]);
  param_1[0x53] = lVar5;
  if (param_1[0x45] != 0) {
    FUN_00c78ad0(param_1,param_1[0x45]);
  }
  thunk_FUN_03abe598(param_1[0x53],param_1[0x42] + 0x7c);
  if (DAT_02019d2c == 0) {
    thunk_FUN_03e49910(param_1[0x53],&DAT_02019d20);
  }
  if ((*(uint *)(param_1 + 0x1b) & 0x80000) == 0) {
    thunk_FUN_03e49910(lVar5,&local_38);
    *(uint *)(param_1 + 0x30) = local_30 - local_38;
    *(int *)((longlong)param_1 + 0x184) = local_2c - local_34;
  }
  else {
    thunk_FUN_03e49910(lVar5,&local_38);
    if ((int)param_1[0x30] == 0) {
      cVar1 = FUN_00c76df0(param_1);
      if (cVar1 == '\x01') {
        *(uint *)(param_1 + 0x30) = (local_30 - local_38) + 0x28;
        *(int *)((longlong)param_1 + 0x184) = (local_2c - local_34) + 0x46;
      }
    }
    if ((int)param_1[0x30] == 0) {
      cVar1 = FUN_00c76df0(param_1);
      if (cVar1 == '\0') {
        *(uint *)(param_1 + 0x30) = local_30 - local_38;
        *(int *)((longlong)param_1 + 0x184) = local_2c - local_34;
      }
    }
  }
  cVar1 = FUN_00c76df0(param_1);
  if (cVar1 == '\x01') {
    thunk_FUN_03e49910(param_1[0x53],&local_38);
    DAT_02019d48 = param_1[0x53];
    uVar4 = thunk_FUN_03a99535(param_1[0x53],0x471);
    thunk_FUN_03e49910(uVar4,&local_48);
    uVar4 = thunk_FUN_03a99535(param_1[0x53],0x471);
    thunk_FUN_041cc6e2(uVar4,0,6,6,(local_40 - local_48) + 0x2d,local_3c - local_44,4);
    uVar4 = thunk_FUN_03a99535(param_1[0x53],0x443);
    thunk_FUN_041cc6e2(uVar4,0,0xffffffb0,8,0,0,5);
    thunk_FUN_0414fb0c(param_1[0x53],FUN_00c76470,0x5a);
    thunk_FUN_041cc6e2(param_1[0x53],0,0,0,(local_30 - local_38) + 0x5a,local_2c - local_34,6);
    plVar7 = (longlong *)FUN_007fc180(&PTR_FUN_00c68b38,1,*(undefined8 *)PTR_DAT_02004030);
    param_1[0x38] = (longlong)plVar7;
    (**(code **)(*plVar7 + 0x148))(plVar7,0);
    (**(code **)(*(longlong *)param_1[0x38] + 0x130))((longlong *)param_1[0x38],0);
    FUN_00655f80(param_1[0x38],param_1[0x53]);
    FUN_007ff680(param_1[0x38],0);
    FUN_00743910(*(undefined8 *)(param_1[0x38] + 0x6c8),*(undefined1 *)(param_1[0x3a] + 0x28));
    FUN_007fdf50(param_1[0x38],0);
    *(longlong **)(param_1[0x38] + 0x6e0) = param_1;
    if (*(longlong *)(param_1[0x3a] + 0x10) != 0) {
      FUN_00c6e8f0(param_1[0x3a]);
    }
    if (*(char *)(param_1[0x3a] + 0x1a) == '\x01') {
      uVar4 = FUN_0065b870(param_1[0x38]);
      thunk_FUN_03ea7391(uVar4,0xffffffff);
    }
    FUN_00806b40(param_1[0x38],0x21);
    FUN_00806af0(param_1[0x38],4);
    lVar6 = param_1[0x38];
    if (*(char *)(*(longlong *)(lVar6 + 0x6c8) + 0x4a4) == '\0') {
      FUN_0064cbf0(lVar6,0x57);
      *(undefined4 *)(param_1 + 0x31) = 0x57;
    }
    else {
      FUN_0064cbf0(lVar6,0x5b);
      *(undefined4 *)(param_1 + 0x31) = 0x5b;
    }
    FUN_007fdf50(param_1[0x38],1);
    FUN_00703440(*(undefined8 *)(param_1[0x38] + 0x6d0),*(undefined1 *)(param_1[0x3a] + 0x1b));
    if (*(char *)(param_1[0x3a] + 0x18) == '\0') {
      FUN_007e2da0(*(undefined8 *)(param_1[0x38] + 0x6c0),0);
    }
    if (*(char *)(param_1[0x3a] + 0x19) == '\0') {
      FUN_007e2da0(*(undefined8 *)(param_1[0x38] + 0x6b8),0);
    }
    uVar4 = *(undefined8 *)(param_1[0x3a] + 0x20);
    lVar6 = param_1[0x38];
    *(undefined8 *)(lVar6 + 0x6e8) = uVar4;
    FUN_00c6ffe0(uVar4,*(undefined8 *)(lVar6 + 0x6d8));
  }
  lVar6 = FUN_00c6e340(param_1[0x53],0xa001);
  param_1[0x3d] = lVar6;
  if (*(char *)(param_1[0x37] + 8) != '\0') {
    FUN_00c701a0(param_1[0x3d]);
  }
  if (*(longlong *)(param_1[0x37] + 0x10) != 0) {
    thunk_FUN_03e49910(param_1[0x3d],&local_38);
    local_50 = local_30 + 1;
    local_4c = local_34;
    thunk_FUN_0417e313(param_1[0x53],&local_50);
    param_1[0x3e] = *(longlong *)(*(longlong *)(param_1[0x37] + 0x10) + 0x78);
    *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(*(longlong *)(param_1[0x37] + 0x10) + 0xa9);
    FUN_0064d000(*(undefined8 *)(param_1[0x37] + 0x10),local_68);
    thunk_FUN_040e284c(param_1 + 0x3f,local_68);
    (**(code **)(**(longlong **)(param_1[0x37] + 0x10) + 0x130))
              (*(longlong **)(param_1[0x37] + 0x10),0);
    FUN_00655f80(*(undefined8 *)(param_1[0x37] + 0x10),param_1[0x53]);
    FUN_0064cb30(*(undefined8 *)(param_1[0x37] + 0x10),local_50);
    local_50 = local_38;
    local_4c = local_34;
    thunk_FUN_0417e313(param_1[0x53],&local_50);
    FUN_0064cb90(*(longlong *)(param_1[0x37] + 0x10),
                 ((local_4c + (local_2c - local_34) / 2) -
                 *(int *)(*(longlong *)(param_1[0x37] + 0x10) + 0x9c) / 2) + -1);
    FUN_0064cb30(*(undefined8 *)(param_1[0x37] + 0x10),local_50);
    FUN_0064dbe0(*(undefined8 *)(param_1[0x37] + 0x10),1);
  }
  (**(code **)(*(longlong *)param_1[0x42] + 0x20))((longlong *)param_1[0x42],lVar5);
  uVar4 = thunk_FUN_03a99535(lVar5,0x460);
  thunk_FUN_03e49910(uVar4,&local_38);
  thunk_FUN_03abe598(uVar4,&local_48);
  local_50 = local_38;
  local_4c = local_34;
  thunk_FUN_0417e313(lVar5,&local_50);
  iVar2 = thunk_FUN_0410f747(7);
  *(int *)(param_1[0x42] + 0x94) = local_40 + iVar2;
  iVar2 = thunk_FUN_0410f747(8);
  lVar5 = param_1[0x42];
  *(int *)(lVar5 + 0x98) = local_3c + iVar2;
  *(int *)(lVar5 + 0x90) = local_4c;
  *(uint *)(lVar5 + 0x8c) = local_50;
  FUN_00c78f40(param_1,(short)param_1[0x71]);
  FUN_00c778e0(param_1);
  (**(code **)(*(longlong *)param_1[0x43] + 0x20))((longlong *)param_1[0x43],param_1[0x53]);
  DAT_02019d40 = 0;
  DAT_02019d38 = 0;
  uVar3 = FUN_00427ab0();
  DAT_02019d38 = thunk_FUN_0417e981(2,FUN_00c765f0,PTR_IMAGE_DOS_HEADER_0200c280,uVar3);
  uVar3 = FUN_00427ab0();
  DAT_02019d40 = thunk_FUN_0417e981(0xc,FUN_00c76500,PTR_IMAGE_DOS_HEADER_0200c280,uVar3);
  DAT_02019d30 = param_1;
  if (param_1[0x55] != 0) {
    (*(code *)param_1[0x55])(param_1[0x56],param_1);
  }
  if (param_1[0x57] != 0) {
    (*(code *)param_1[0x57])(param_1[0x58],param_1);
  }
  return;
}

